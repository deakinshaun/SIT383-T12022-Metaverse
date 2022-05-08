using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Raycast : MonoBehaviour
{
    //object raycast id
    private GameObject raycastedObj;

    [SerializeField] 
    private int rayLength = 10;
    
    [SerializeField] 
    private LayerMask layerMaskInteract;
    
    [SerializeField] 
    private Image uiCrosshair;

    void Update()
    {
        //raycast hit in a forward direction in front of player
        RaycastHit hit;
        Vector3 fwd = transform.TransformDirection(Vector3.forward);
        //looking for length and casting layer
        if (Physics.Raycast(transform.position, fwd, out hit, rayLength, layerMaskInteract.value))
        {
            //Encapsulating in game object varables 
            if (hit.collider.CompareTag("Object"))
            {
                raycastedObj = hit.collider.gameObject;
                //Because we see the Object

                CrosshairActive();
                //interacting with object key
                if (Input.GetKeyDown("e"))
                {
                    Debug.Log("Interacted with Object");
                    SceneManager.LoadScene("Ex1_Exhibit_1");
                    raycastedObj.SetActive(true);
                }

            }
        }
        else
        {
            //If we haven't found object
            CrosshairNormal();
        }
    }

    void CrosshairActive()
    {
        uiCrosshair.color = Color.green;
    }

    //If we haven't found object
    void CrosshairNormal()
    {
        uiCrosshair.color = Color.white;
    }

}