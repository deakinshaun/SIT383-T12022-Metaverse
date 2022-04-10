using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPS_Tracking : MonoBehaviour
{
    public bool retrieveLocation(out float latitude, out
        float longitude, out float altitude)
    {
        latitude = 0.0f;
        longitude = 0.0f;
        altitude = 0.0f;

        if (!Input.location.isEnabledByUser)
        {
            Debug.Log("Location service needs to be enabled");
            return false;
        }
        if (Input.location.status != LocationServiceStatus.Running)
        {
            Debug.Log("Starting location service");
            if (Input.location.status == LocationServiceStatus.Stopped)
            {
                Input.location.Start();
            }
            return false;
        }
        else
        {
            latitude = Input.location.lastData.latitude;
            longitude = Input.location.lastData.longitude;
            altitude = Input.location.lastData.altitude;
            return true;
        }
    }
}
