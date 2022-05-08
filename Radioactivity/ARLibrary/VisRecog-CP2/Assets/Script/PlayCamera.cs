using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayCamera : MonoBehaviour
{

    public Material camTexMaterial;

    private WebCamTexture webcamTexture;

    // Update is called once per frame
    void Update()
    {
        if (webcamTexture == null)
        {
            webcamTexture = new WebCamTexture();
            camTexMaterial.mainTexture = webcamTexture;
        }
        if (!webcamTexture.isPlaying)
        {
            webcamTexture.Play();
        }
    }
}