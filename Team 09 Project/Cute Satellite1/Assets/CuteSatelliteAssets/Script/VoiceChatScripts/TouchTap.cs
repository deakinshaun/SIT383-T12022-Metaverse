using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchTap : MonoBehaviour
{
    public float speed = 15f;

    void Update()
    {
        TouchMovement();
    }



    public void TouchMovement()
    {
        if (Input.touchCount == 1)
        {           
            Debug.Log("2");
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Moved)
            {
               
                Debug.Log("3");
                float moveX = Input.GetAxis("Mouse X");
                float moveY = Input.GetAxis("Mouse Y");
                transform.position -= moveX * speed * Time.deltaTime * transform.right;
                transform.position += moveY * speed * Time.deltaTime * transform.forward;
            }
        }
    }
}
