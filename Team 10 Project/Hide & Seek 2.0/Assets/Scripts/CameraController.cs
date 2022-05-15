using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    private Gyroscope gyro;
    private bool gyroSupported;

    public float turnSpeed = 50.0f;
    public float moveSpeed = 2.0f;

    // Start is called before the first frame update
    void Start()
    {
        gyroSupported = SystemInfo.supportsGyroscope;

        if (gyroSupported)
        {
            gyro = Input.gyro;
            gyro.enabled = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (gyroSupported)
        {
            transform.rotation = Quaternion.Euler(90, 0, 90) * gyro.attitude * Quaternion.Euler(180, 180, 0);
        }

        // Code below was taken from the Week 7 - Portals Project to help with testing purposes
        float v = Input.GetAxis("Vertical");
        float h = Input.GetAxis("Horizontal");

        transform.rotation *= Quaternion.AngleAxis(h * turnSpeed * Time.deltaTime, transform.up);
        transform.position += v * moveSpeed * Time.deltaTime * transform.forward;
    }
}