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
    private SpawnNegative SpawnNegative;
    private SpawnPositive SpawnPositive;
    // Start is called before the first frame update
    void Start()
    {
        SpawnNegative = GetComponent<SpawnNegative>();
        SpawnPositive = GetComponent<SpawnPositive>();
        for(int i = 0; i < PositiveCount; i++)
        {
            SpawnPositive.OnSpawnAPrefab();
        }
        for(int i = 0; i < NegativeCount; i++)
        {
            SpawnNegative.OnSpawnAPrefab();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
