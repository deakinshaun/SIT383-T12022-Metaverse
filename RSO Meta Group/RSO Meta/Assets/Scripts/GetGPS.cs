using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GetGPS : MonoBehaviour
{
    public TextMeshProUGUI message;
    public GameObject planet;
    public GameObject marker;
    private float rotation = 0.5f;
    float latitude, longitude, altitude = 0.0f;

    void getGPS()
    {
        if (!Input.location.isEnabledByUser)
        {
            message.text = "Location service has no permission";
            return;
        }
        if (Input.location.status != LocationServiceStatus.Running)
        {
            message.text = "Location service not active yet";
            Input.location.Start();
            return;
        }
        string location = "";
        latitude = Input.location.lastData.latitude;
        longitude = Input.location.lastData.longitude;
        altitude = Input.location.lastData.altitude;
        location = "Position at: " + latitude + ", " + longitude + ", " + altitude;
        message.text = location;
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        getGPS();
        planet.transform.rotation = Quaternion.AngleAxis(rotation, Vector3.up);
        Quaternion markerOrientation = Quaternion.AngleAxis(90.0f - longitude + rotation, Vector3.up) * Quaternion.AngleAxis(90.0f - latitude, Vector3.right);
        marker.transform.rotation = markerOrientation;
        rotation += 15.0f * Time.deltaTime;
    }
}
