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
            SpawnPositive.OnSpawnAPrefab(null);
        }
        for(int i = 0; i < NegativeCount; i++)
        {
            SpawnNegative.OnSpawnAPrefab(null);
        }
    }
    public void addANewNegative()
    {
        SpawnNegative.OnSpawnAPrefab("YEE YEE ASS");
    }
    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown("space"))
        {
            Debug.Log("here");
            addANewNegative();
        }
    }
}
