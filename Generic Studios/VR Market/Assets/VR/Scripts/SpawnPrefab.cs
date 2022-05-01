using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPrefab : MonoBehaviour
{
    [SerializeField] private GameObject prefab;
    [SerializeField] private Vector2 spawnPosition;
    [SerializeField] private bool random;
    public void OnSpawnAPrefab()
    {
        if (random)
        {
            float x = Random.Range(-8, 8);
            float y = Random.Range(-4, 4);
            Instantiate(prefab, new Vector2(x, y), Quaternion.identity);
        }
        else
        {
            Instantiate(prefab, spawnPosition, Quaternion.identity);
        }
    }
}
