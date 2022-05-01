using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class RSManagerController : MonoBehaviour
{
    public int PositiveCount = 10;
    public int NegativeCount = 10;
    public GameObject bin;
    public List<GameObject> reviewList;
    // Start is called before the first frame update
    void Start()
    {

        GetComponent<SpawnNegative>().OnSpawnAPrefab();
        GetComponent<SpawnNegative>().OnSpawnAPrefab();
        GetComponent<SpawnNegative>().OnSpawnAPrefab();
        GetComponent<SpawnNegative>().OnSpawnAPrefab();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
