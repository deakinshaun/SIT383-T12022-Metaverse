using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Photon.Pun;
namespace UnityEngine.XR.Interaction.Toolkit
{
    public class RSManagerController : MonoBehaviour
    {
        public int PositiveCount = 10;
        public int NegativeCount = 10;
        public GameObject bin;
        public List<GameObject> reviewList;
        private SpawnNegative SpawnNegative;
        private SpawnPositive SpawnPositive;
        // Start is called before the first frame update
        [PunRPC]
        void sendReview(bool bad, string message)
        {
            Debug.Log("message recieved: " + message + " and review was " + bad.ToString());
            if (bad)
            {
                SpawnNegative.OnSpawnAPrefab(message);
            }
            else
            {
                SpawnPositive.OnSpawnAPrefab(message);
                Debug.Log("positive: " + message);
            }
        }

        void Start()
        {
            string[] goodReview = new string[4] {"LOVED IT!", "great product", "easy to use", null};
            string[] badReview = new string[4] {"HATED IT!", "unusable", "had trouble using it", null};
            //GetComponent<PhotonView>().RPC("updateChat", RpcTarget.All, "RPC success");
            SpawnNegative = GetComponent<SpawnNegative>();
            SpawnPositive = GetComponent<SpawnPositive>();
            for (int i = 0; i < PositiveCount; i++)
            {
                SpawnPositive.OnSpawnAPrefab(goodReview[i % 4]);
            }
            for (int i = 0; i < NegativeCount; i++)
            {
                SpawnNegative.OnSpawnAPrefab(badReview[i % 4]);
            }
        }
        public void addANewNegative()
        {
            SpawnNegative.OnSpawnAPrefab("RPC test");
            GetComponent<PhotonView>().RPC("updateChat", RpcTarget.All, "RPC success");
        }
        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown("space"))
            {
                Debug.Log("here");
                addANewNegative();
            }
        }
    }
}
