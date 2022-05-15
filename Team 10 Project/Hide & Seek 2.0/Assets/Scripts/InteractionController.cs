using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class InteractionController : MonoBehaviour
{
    public TextMeshProUGUI messages;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            PerformRayCast();
        }
    }

    // The code below was provided by Unity which I have adapted to better suit this project
    // https://docs.unity3d.com/ScriptReference/Physics.Raycast.html
    public void PerformRayCast()
    {
        RaycastHit hit;
        // Does the ray intersect any objects excluding the player layer
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity))
        {
            Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.red, 1.0f);
            Debug.Log("Did Hit");

            if(hit.transform.gameObject.tag == "ButtonPress")
            {
                ActivateButton(hit.transform.gameObject);

            }

            if (hit.transform.gameObject.tag == "ObjectToFind")
            {
                FoundObject();
            }
        }
        else
        {
            Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * 1000, Color.red, 1.0f);
            Debug.Log("Did not Hit");
        }
    }

    private void ActivateButton(GameObject button)
    {
        Debug.Log("Trigger is activating");
        button.gameObject.GetComponent<Renderer>().material.SetColor("_Color", Color.green);

        StartCoroutine(DeactivateButton(button));
    }

    private IEnumerator DeactivateButton(GameObject button)
    {
        yield return new WaitForSeconds(1.0f);
        button.gameObject.GetComponent<Renderer>().material.SetColor("_Color", Color.red);
    }

    private void FoundObject()
    {
        messages.text = "You have found the hiding object";

        StartCoroutine(ClearText());
    }

    private IEnumerator ClearText()
    {
        yield return new WaitForSeconds(3.0f);
        messages.text = "";
    }
}
