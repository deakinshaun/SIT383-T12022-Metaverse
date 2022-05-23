using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DescriptionManager : MonoBehaviour
{
    public string productName;
    public string designerName;
    public TextMeshProUGUI description;
    public float fadeTime = 3f;
    public bool displayInfo;
    [SerializeField]
    private GameObject button;
    [SerializeField]
    private GameObject product;
 
    void Start()
    {
        description.color = Color.clear;
        button.gameObject.SetActive(false);
    }

    void Update()
    {

        FadeText();

    }


    void FadeText()

    {


        if (displayInfo)
        {
            if (product != null) {
                description.text = productName + " made by " + designerName;
            } else {
                description.text = "This item has been purchased";
            }
            description.color = Color.Lerp(description.color, Color.black, fadeTime * Time.deltaTime);
        }
        else
        {

            description.color = Color.Lerp(description.color, Color.clear, fadeTime * Time.deltaTime);
        }




    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            displayInfo = true;
            if (button.gameObject != null) button.gameObject.SetActive(true);
        }
    }

    void OnTriggerExit(Collider other)
    {  
        if (other.tag == "Player") 
        { 
            displayInfo = false;
            if (button.gameObject != null) button.gameObject.SetActive(false);
        }
    }

}

