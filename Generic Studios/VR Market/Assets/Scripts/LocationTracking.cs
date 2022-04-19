using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LocationTracking : MonoBehaviour
{
    //This script is for YuanZhuo¡®s 18.1.1 component
    public float moveSpeed = 10.0f;
    public float turnSpeed = 100.0f;
    public float pathSpeed = 1.0f;

    public bool realtime = true;
    public bool manualMove = true;
    public bool manualRotate = false;
    public bool autoFollowPath =false;

    public float pathRadius = 10.0f;
    public int pathSides = 4;

    private void processPositionControls()
    {
        //Handle change in position using input axes.
        float h = 0.0f;
        float v = 0.0f;
        float d = 0.0f;

        try
        {
            h = Input.GetAxis("Horizontal");
            v = Input.GetAxis("Vertical");
            d = Input.GetAxis("Depth");
        }catch(UnityException)
        {
            Debug.Log("Unable to read from one of input axes: Horizontal,Vertical,Depth");
        }

        float step = moveSpeed;
        if(realtime)
        {
            step *= Time.deltaTime;
        }
        transform.position += step * (h * transform.right + d * transform.up + v * transform.forward);
    }

    private void processOrientationControls()
    {
        float mx = 0.0f;
        float my = 0.0f;
        float fire = 0.0f;

        try
        {
            mx = Input.GetAxis("Mouse X");
            my = Input.GetAxis("Mouse Y");
            fire = Input.GetAxis("Fire1");
        }catch(UnityException)
        {
            Debug.Log("Unable to read from one of input axes: Mouse X, Mouse Y, Fire1");
        }
        float step = turnSpeed;
        if(realtime)
        {
            step *= Time.deltaTime;
        }
        if(fire>0.0f)
        {
            transform.rotation *= Quaternion.AngleAxis(step * my, Vector3.right) * Quaternion.AngleAxis(step * mx, Vector3.up);
        }
    }

    private void processControls()
    {
        if(manualMove)
        {
            processPositionControls();
        }
        if(manualRotate)
        {
            processOrientationControls();
        }
    }

    private void followPath()
    {
        float angle = pathSpeed * Time.time / pathRadius;
        float quantAngle = (2.0f * Mathf.PI / pathSides) * 
            Mathf.Floor(angle * pathSides / (2.0f * Mathf.PI));
        float edgeLength = 2.0f * pathRadius * Mathf.Sin(Mathf.PI / pathSides);
        float distanceAlongEdge = 
            edgeLength * (angle - quantAngle) / (2.0f * Mathf.PI / pathSides);

        float x = pathRadius * Mathf.Sin(quantAngle);
        float z = pathRadius * Mathf.Cos(quantAngle);
        float dx = pathRadius * Mathf.Sin(quantAngle + Mathf.PI / pathSides);
        float dz = pathRadius * Mathf.Cos(quantAngle + Mathf.PI / pathSides);

        Vector3 forward = Vector3.Normalize(new Vector3(dz, 0, -dx));
        transform.position = new Vector3(x, 0, z) + distanceAlongEdge * forward;
        transform.up = Vector3.up;
        transform.forward = forward;
    }

    void Update()
    {
        processControls();
        if(autoFollowPath)
        {
            followPath();
        }
    }
    
    public Transform getLocation()
    {
        return transform;
    }
}
