using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPositive : MonoBehaviour
{
    [SerializeField] private GameObject prefab;
    [SerializeField] private Vector3 spawnPosition;
    [SerializeField] private bool random;
    public void OnSpawnAPrefab()
    {
        if (random)
        {
            float x = Random.Range(-8, 8);
            float y = Random.Range(-4, 4);
            float z = Random.Range(-2, 2);
            Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity);
        }
        else
        {
            Instantiate(prefab, spawnPosition, Quaternion.identity);
        }
    }
}
