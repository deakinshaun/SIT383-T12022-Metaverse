using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class Portal : MonoBehaviour
{
    public Material[] materials;

    public Transform device;

    bool wasInFront;
    bool inOtherWorld;
    bool hasCollided;

    void Start()
    {
        SetMaterial(false);
    }

    void SetMaterial(bool fullRender)
    {
        var stencilTest = fullRender ? CompareFunction.NotEqual : CompareFunction.Equal;
        
        foreach (var mat in materials)
        {
            mat.SetInt("_StencilTest", (int)stencilTest);
        }
    }

    bool GetIsInFront()
    {
        Vector3 worldPos = device.position + device.forward * Camera.main.nearClipPlane;

        Vector3 pos = transform.InverseTransformPoint(worldPos);
        return pos.z>=0 ?  true: false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.transform != device)
            return;
        wasInFront = GetIsInFront();

        hasCollided = true;
    }

    void OnTriggerExit(Collider other)
    {
        if(other.transform != device)
            return;
        hasCollided = false;
    }

    void WhileCamColliding()
    {
        if (!hasCollided)
            return;

        bool isInFront = GetIsInFront();

        if((isInFront && !wasInFront) || (wasInFront&& !isInFront))
        {
            inOtherWorld = !inOtherWorld;
            SetMaterial(inOtherWorld);
        }
        wasInFront = isInFront;
    }

    void OnDestroy()
    {
        SetMaterial(true);
    }

    void Update()
    {
        WhileCamColliding();
    }
}
