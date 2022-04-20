using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PhysicalCameraTexture : MonoBehaviour
{
    public Material camTexMaterial;

    public Text outputText;

    private WebCamTexture webcamTexture;

    private int currentCamera = 0;

    private void showCameras() {
        outputText.text = "";
        foreach (WebCamDevice d in WebCamTexture.devices) {
            outputText.text += d.name + (d.name == webcamTexture.deviceName ? "*" : "") + "\n";
        }
    }

    public void nextCamera() {
        currentCamera = (currentCamera + 1) % WebCamTexture.devices.Length;
        // Change camera only works if the camera is stopped
        webcamTexture.Stop();
        webcamTexture.deviceName = WebCamTexture.devices[currentCamera].name;
        webcamTexture.Play();
        showCameras();
    }

    // Start is called before the first frame update
    void Start()
    {
        webcamTexture = new WebCamTexture();

        showCameras();

        camTexMaterial.mainTexture = webcamTexture;
        webcamTexture.Play();
    }

    // Update is called once per frame
    //void Update()
    //{
        
    //}
}
