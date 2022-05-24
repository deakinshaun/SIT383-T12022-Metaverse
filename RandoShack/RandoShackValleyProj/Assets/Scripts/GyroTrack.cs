using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroTrack : MonoBehaviour {
    private Gyroscope gyro;
    private bool gyroSupported;

    // Start is called before the first frame update
    void Start() {
        // Ensure this code is only used if there is actually a gyroscope
        gyroSupported = SystemInfo.supportsGyroscope;
        if (gyroSupported) {
            // Get hold of the system gyroscope
            gyro = Input.gyro;
            // Switch it on
            gyro.enabled = true;
        }
    }

    // Update is called once per frame
    void Update() {
        if (gyroSupported) {
            // Map the gyro rotation into the same coordiatne system as the unity camera
            transform.rotation = Quaternion.Euler(90, 0, 90) * gyro.attitude * Quaternion.Euler(180, 180, 0);
        }
    }
}
