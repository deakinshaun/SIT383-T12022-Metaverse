using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDropper : MonoBehaviour
{
    public GameObject objectTemplate;

    public Vector3 startPoint;

    public int numberOfObjects = 30;

    public float initialSpeed = 1.0f;

    public float timeInterval = 0.3f;

    private float currentTime = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        currentTime += Time.deltaTime;

        if((currentTime > timeInterval) && (numberOfObjects > 0))
        {
            currentTime = 0.0f;
            numberOfObjects--;
            GameObject g = Instantiate(objectTemplate);
            g.transform.position = startPoint;
            g.GetComponent<Rigidbody>().velocity = Random.onUnitSphere * initialSpeed;
            g.GetComponent<MeshRenderer>().material.color = Random.ColorHSV(0, 1, 0.5f, 1);
        }
    }
}
