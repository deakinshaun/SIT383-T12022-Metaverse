using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveCamera : MonoBehaviour
{
    public float distance = 3.0f;
    public float frequency = 0.3f;

    void Update()
    {
        float z = distance * Mathf.Sin(frequency * 2.0f * Mathf.PI * Time.time);
        transform.position = new Vector3(transform.position.x, transform.position.y, z);
    }
}
