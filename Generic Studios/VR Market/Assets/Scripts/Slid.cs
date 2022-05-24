using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Slid : MonoBehaviour
{
    private Slider scaleSlider;
    private Slider rotateSlider;
    public float scaleMinvalue;
    public float scaleMaxvalue;
    public float rotateMinvalue;
    public float rotateMaxvalue;
    void Start()
    {
        scaleSlider = GameObject.Find("Slider1").GetComponent<Slider>();
        scaleSlider.minValue = scaleMinvalue;
        scaleSlider.maxValue = scaleMaxvalue;
        scaleSlider.onValueChanged.AddListener(ScaleSliderUpdate);

        rotateSlider = GameObject.Find("Slider2").GetComponent<Slider>();
        rotateSlider.minValue = rotateMinvalue;
        rotateSlider.maxValue = rotateMaxvalue;
        rotateSlider.onValueChanged.AddListener(RotateSliderUpdate);
        

    }

    void ScaleSliderUpdate(float value)
    {
        transform.localScale = new Vector3(value, value, value);
    }
    void RotateSliderUpdate(float value)
    {
        transform.localEulerAngles = 
            new Vector3(transform.rotation.x, value, transform.rotation.z);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
