using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GPSDisplay : MonoBehaviour
{

    public GPSTracking locationService;

    public Text displayText;

    void Update()
    {
        float latitude;
        float longitude;
        float altitude;
        if (locationService.retrieveLocation(out
        latitude, out longitude, out altitude))
        {
            displayText.text = "Lat: " + latitude + "\n" +
         "Long: " + longitude + " \n" +
         "Alt: " + altitude;
        }
        else
        {
            displayText.text = "No location";
        }
    }
}

