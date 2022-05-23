using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateButton : MonoBehaviour
{
    public GameObject buttonObject;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        GameObject button = Instantiate(buttonObject);
        button.transform.position = new Vector3(0, 1, 10);
    }
}
