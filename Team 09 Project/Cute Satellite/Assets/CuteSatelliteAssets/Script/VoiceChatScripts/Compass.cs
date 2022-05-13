using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Threading;
using Photon.Pun;

public class Compass : MonoBehaviour
{
    private int beforeAngle = 0;
    private int afterAngle = 0;

    private float Radius;
    private float Angle;
    void Start()
    {
        Input.compass.enabled = true;
    }

    public void findAngle()
    {
        Radius = Mathf.Atan2(0, 0);
        Angle = Radius * (180 / Mathf.PI);
    }

    private void Refresh()
    {
        if (Mathf.Abs(afterAngle - beforeAngle) >= 10)
        {
            afterAngle = beforeAngle;
            transform.eulerAngles = new Vector3(-afterAngle + Angle, 0, 0);
        }
    }


    private void Update()
    {
        Refresh();
        beforeAngle = (int)Input.compass.trueHeading;
    }
}
