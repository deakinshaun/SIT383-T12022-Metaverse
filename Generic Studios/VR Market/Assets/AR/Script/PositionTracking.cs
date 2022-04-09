using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SpatialTracking;

public class PositionTracking : MonoBehaviour
{
    public GameObject Avatar = null;
    void Start()
    {
        
    }

    void Update()
    {
        Avatar.transform.rotation = transform.rotation;
        Avatar.transform.position = new Vector3(transform.position.x + 1000, transform.position.y + 1000, transform.position.z + 1000);

        //Debug.Log(transform.rotation);
        //Debug.Log("avatar transform: " + transform.rotation);
    }
}
