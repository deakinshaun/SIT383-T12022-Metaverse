using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerScript : MonoBehaviour
{
    public List<GameObject> _prefabs = new List<GameObject>();
    int i = 0;
    float timer = 0;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        //timer += Time.deltaTime;
        //if (timer>2)
        //{

        //    if (i >= _prefabs.Count) { i = 0; }
        //    dummy.transform.position = _prefabs[i].transform.position;
        //    i++;
        //    timer = 0;
        //}
    }
}
