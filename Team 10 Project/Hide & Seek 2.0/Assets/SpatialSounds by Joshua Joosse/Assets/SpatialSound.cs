using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpatialSound : MonoBehaviour
{
    public GameObject soundSource;
    public GameObject viewer;
    public float decayFactor = 1.0f;
    public float dropoff = 0.1f;

    // Update is called once per frame
    void Update()
    {
        float distance = (soundSource.transform.position - viewer.transform.position).magnitude;
        soundSource.GetComponent<AudioSource>().volume = 1.0f / Mathf.Pow(distance * dropoff, decayFactor);
    }
}
