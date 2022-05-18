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
                float x = Random.Range(-2.5f, -0.7f);
                float y = 0.44f;
                float z = Random.Range(-2.5f, -0.7f);
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

