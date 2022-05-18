using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class Compass : MonoBehaviour
{
    private int beforeAngle = 0;
    private int afterAngle = 0;

    private float Radius;
    private float Angle;

    public GameObject MyControl;
    public GameObject HisControl;

    public GameObject[] allObjects;
    void Start()
    {
        Input.compass.enabled = true;
    }

    public void findUsersControl()
    {
        allObjects = GameObject.FindGameObjectsWithTag("Users");
        for (int i = 0; i < allObjects.Length; i++)
        {
            if (allObjects[i].GetPhotonView().IsMine)
            {
                MyControl = allObjects[i];
            }
            else
            {
                HisControl = allObjects[i];
            }
        }
    }

    public void findAngle()
    {
        findUsersControl();
        if (MyControl != null)
        {
            if (HisControl != null)
            {
                float x = HisControl.transform.position.x - MyControl.transform.position.x;
                float y = HisControl.transform.position.y - MyControl.transform.position.y;

                Radius = Mathf.Atan2(x, y);
                Angle = Radius * (180 / Mathf.PI);
            }
            else
            {
                Debug.Log("Only 1 users");
            }
        }

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
        findAngle();
        Refresh();
        beforeAngle = (int)Input.compass.trueHeading;
    }
}
