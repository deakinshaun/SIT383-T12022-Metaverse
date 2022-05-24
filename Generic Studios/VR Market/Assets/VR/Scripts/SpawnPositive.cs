using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.Interaction.Toolkit
{
    public class SpawnPositive : MonoBehaviour
    {
        [SerializeField] private GameObject prefab;
        [SerializeField] private Transform spawnPosition;
        [SerializeField] private bool random;
        [SerializeField] XRInteractionManager m_InteractionManager;
        public void OnSpawnAPrefab(string textToShow)
        {
            if (random)
            {
                float x = Random.Range(spawnPosition.position.x - 1.5f, spawnPosition.position.x + 1.5f);
                float y = 6f;
                float z = Random.Range(spawnPosition.position.z - 1.5f, spawnPosition.position.z + 1.5f);
                GameObject gameObject = Instantiate(prefab, new Vector3(x, y, z), Quaternion.identity) as GameObject;
                gameObject.GetComponent<voteBehaviorScript>().TextToShow = textToShow;
            }
            else
            {
                Instantiate(prefab, spawnPosition.position, Quaternion.identity);
            }
        }
    }
}
