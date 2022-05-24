using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GPS_Display : MonoBehaviour
{
    public GPS_Tracking locationService;
    //public Text displayText;
    public TextMeshPro textMeshPro;

    void Update()
    {
        float latitude;
        float longitude;
        float altitude;
        if (locationService.retrieveLocation(out latitude, out longitude, out altitude))
        {
            textMeshPro.text = "Lat: " + latitude + "\n" + "Long: " + longitude + "\n" + "Alt: " + altitude;
        }
        else
        {
            textMeshPro.text = "No location";
        }
    }
}

