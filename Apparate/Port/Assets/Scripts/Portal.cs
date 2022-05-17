using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class Portal : MonoBehaviour
{
    public Material[] materials;

    void Start()
    {
        foreach (var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
            }
    }

    void OnTriggerStay(Collider other)
    {
        if(other.name != "Main Camera")
        {

            return;
        }

        //In Real World
        if(transform.position.z > other.transform.position.z)
        {
            Debug.Log("Outside of House");
            foreach (var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
            }
        }
        //Inside Inspection place
        else
        {
            Debug.Log("Inside inspection House");
            foreach (var mat in materials)
            {
                mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
            }
        }
    }

    void OnDestroy()
    {
        foreach (var mat in materials)
        {
            mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
        }
    }

    void Update()
    {
        
    }
}
