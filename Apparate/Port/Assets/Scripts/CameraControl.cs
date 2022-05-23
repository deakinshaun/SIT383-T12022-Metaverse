using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour
{
    [Range(0.00001f, 3)]
    float speed = 0.1f;

    void Update()
    {
        Vector3 velocity = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical")) * speed;
        transform.Translate(velocity);
        float rotation = 0;
        if (Input.GetKey(KeyCode.Q))
            rotation -= 1;
        if (Input.GetKey(KeyCode.E))
            rotation += 1;
    }
}
