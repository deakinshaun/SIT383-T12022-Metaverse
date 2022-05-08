using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlayers : MonoBehaviour
{
    public GameObject playerPrefab;
    public GameObject[] spawnPoints; 
    // Start is called before the first frame update
    void Start()
    {
        GameObject randomPoint = spawnPoints[Random.Range(0, spawnPoints.Length - 1)];
        PhotonNetwork.Instantiate(playerPrefab.name,randomPoint.transform.position, Quaternion.identity);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
