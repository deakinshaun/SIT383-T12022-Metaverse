using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.Interaction.Toolkit
{
    public class SpawnPositive : MonoBehaviour
    {
        [SerializeField] private GameObject prefab;
        [SerializeField] private Vector3 spawnPosition;
        [SerializeField] private bool random;
        [SerializeField] XRInteractionManager m_InteractionManager;
        public void OnSpawnAPrefab(string textToShow)
        {
            if (random)
            {
                float x = Random.Range(-1.5f, 1.5f);
                float y = 6f;
                float z = Random.Range(-17f, -15f);
                GameObject gameObject = Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity) as GameObject;
                gameObject.GetComponent<voteBehaviorScript>().TextToShow = textToShow;
            }
            else
            {
                Instantiate(prefab, spawnPosition, Quaternion.identity);
            }
        }
    }
}
