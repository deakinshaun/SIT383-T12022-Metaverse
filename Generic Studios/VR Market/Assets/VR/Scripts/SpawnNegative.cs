using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.Interaction.Toolkit
{
    public class SpawnNegative : MonoBehaviour
    {
        [SerializeField] private GameObject prefab;
        [SerializeField] private Vector3 spawnPosition;
        [SerializeField] private bool random;
        [SerializeField] XRInteractionManager m_InteractionManager;
        public void OnSpawnAPrefab(string textToShow)
        {
            if (random)
            {
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
}

