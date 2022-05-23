using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LocationTrack : MonoBehaviour
{
    public GameObject trackedObject;
    public TextMeshProUGUI message;
    public GameObject crumb;

    // Update is called once per frame
    void Update()
    {
        message.text = "Pos: " + trackedObject.transform.position;
        Instantiate (crumb, trackedObject.transform.position, Quaternion.identity);
    }
}
