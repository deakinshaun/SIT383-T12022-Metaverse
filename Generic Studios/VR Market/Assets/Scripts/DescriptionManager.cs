using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DescriptionManager : MonoBehaviour
{
    public string myString;
    public TextMeshProUGUI myText;
    public float fadeTime = 3f;
    public bool displayInfo;
    [SerializeField]
    private GameObject button;
    // private Vector3 pos;
    // public string textObjName;

    // Use this for initialization
    void Start()
    {
        myText.color = Color.clear;
        button.gameObject.SetActive(false);
        // pos = pedestal.transform.position;
    }

    // Update is called once per frame
    void Update()
    {

        FadeText();

    }


    void FadeText()

    {


        if (displayInfo)
        {
            myText.text = myString;
            myText.color = Color.Lerp(myText.color, Color.black, fadeTime * Time.deltaTime);
            // myText.transform.position = new Vector3(pos.x,pos.y,pos.z);
        }
        else
        {

            myText.color = Color.Lerp(myText.color, Color.clear, fadeTime * Time.deltaTime);
        }




    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            displayInfo = true;
            button.gameObject.SetActive(true);
        }
    }

    void OnTriggerExit(Collider other)
    {  
        if (other.tag == "Player") 
        { 
            displayInfo = false;
            button.gameObject.SetActive(false);
        }
    }

}

