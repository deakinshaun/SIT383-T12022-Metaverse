using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyesCam : MonoBehaviour
{
    public Material camTextMaterial;
    private WebCamTexture webcamTexture;
    
    // Start is called before the first frame update
    void Start()
    {
        webcamTexture = new WebCamTexture();

        
        camTextMaterial.mainTexture = webcamTexture;
        webcamTexture.Play();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
