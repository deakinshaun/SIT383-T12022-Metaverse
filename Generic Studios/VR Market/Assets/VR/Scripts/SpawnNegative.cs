using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnNegative : MonoBehaviour
{
    [SerializeField] private GameObject prefab;
    [SerializeField] private Vector3 spawnPosition;
    [SerializeField] private bool random;
    public void OnSpawnAPrefab()
    {
        if (random)
        {
            float x = Random.Range(-0.2f, 0.2f);
            float y = Random.Range(0, 4);
            float z = Random.Range(-0.2f, 0.2f);
            Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity);
        }
        else
        {
            Instantiate(prefab, spawnPosition, Quaternion.identity);
        }
    }
}

