using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Threading;

public class Compass : MonoBehaviour
{
    private int beforeAngle = 0;
    private int afterAngle = 0;
    void Start()
    {
        Input.compass.enabled = true;
    }

    private void Refresh()
    {
        if (Mathf.Abs(afterAngle - beforeAngle) >= 10)
        {
            afterAngle = beforeAngle;
            transform.eulerAngles = new Vector3(-afterAngle,0, 0);
        }
    }


    private void Update()
    {
        Refresh();
        beforeAngle = (int)Input.compass.trueHeading;
    }
}
