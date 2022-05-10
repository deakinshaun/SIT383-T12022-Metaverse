using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPositive : MonoBehaviour
{
    [SerializeField] private GameObject prefab;
    [SerializeField] private Vector3 spawnPosition;
    [SerializeField] private bool random;
    public void OnSpawnAPrefab(string textToShow)
    {
        if (random)
        {
            //float x = Random.Range(-8, 8);
            //float y = Random.Range(-4, 4);
            //float z = Random.Range(-2, 2);
            ////Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity);
            //GameObject gameObject = Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity) as GameObject;
            //gameObject.GetComponent<voteBehaviorScript>().TextToShow = textToShow;
            float x = Random.Range(-0.2f, 0.2f);
            float y = Random.Range(0, 4);
            float z = Random.Range(-0.2f, 0.2f);
            GameObject gameObject = Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity) as GameObject;
            gameObject.GetComponent<voteBehaviorScript>().TextToShow = textToShow;
        }
        else
        {
            Instantiate(prefab, spawnPosition, Quaternion.identity);
        }
    }
}
