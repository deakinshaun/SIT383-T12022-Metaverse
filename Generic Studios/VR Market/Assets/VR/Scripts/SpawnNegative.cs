using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.Interaction.Toolkit
{
    public class SpawnNegative : MonoBehaviour
    {
        [SerializeField] private GameObject prefab;
        [SerializeField] private Transform spawnPosition;
        [SerializeField] private bool random;
        [SerializeField] XRInteractionManager m_InteractionManager;
        public void OnSpawnAPrefab(string textToShow)
        {
            if (random)
            {
                float x = Random.Range(-1.5f, 1.5f);
                float y = 6f;
                float z = Random.Range(-17f, -15f);
                GameObject gameObject = Instantiate(prefab, spawnPosition.position, Quaternion.identity) as GameObject;
                gameObject.GetComponent<voteBehaviorScript>().TextToShow = textToShow;
            }
            else
            {
                Instantiate(prefab, spawnPosition.position, Quaternion.identity);
            }
        }
    }
}

