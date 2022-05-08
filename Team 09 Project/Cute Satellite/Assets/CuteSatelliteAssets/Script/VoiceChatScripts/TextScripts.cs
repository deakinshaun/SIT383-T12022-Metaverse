using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.IO;


public class TextScripts : MonoBehaviour
{

    private int z = 17;


    public GameObject[] Maps;
    private void retrieveMap(int x, int y, int zoom, Material MapMaterial)
    {
        string url = "https://tile.openstreetmap.org/" + zoom + "/" + x + "/" + y + ".png";

        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "Terrain Retrieval Agent v0.01";
        var response = www.GetResponse();
        Debug.Log("Got a response");

        Texture2D tex = new Texture2D(256, 256);

        ImageConversion.LoadImage(tex, new BinaryReader(response.GetResponseStream()).ReadBytes(1000000));

        //GetComponent<MeshRenderer>().material.mainTexture = tex;
        MapMaterial.mainTexture = tex;
    }

    private void FindPlanes()
    {
        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                string address = "/Maps/" + i + j;
                Debug.Log(address);
                Debug.Log(k);
                Maps[k] = GameObject.Find(address);
                
                Debug.Log(Maps[k].name);
                k++;
            }
        }
    }
    private void test01()
    {
        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            int x = 118368;
            int y = 80442;
            for (int j = 0; j < 5; j++)
            {
                Maps[k].transform.position = new Vector3(20 - 10 * j, 0, -10 + i * 10);                
                Material mapMaterial = Maps[k].GetComponent<MeshRenderer>().material;
                retrieveMap(x + j, y + i, z, mapMaterial);
                k++;
            }
        }
    }

    void Start()
    {
        Debug.Log("Start");
        FindPlanes();
        test01();
        Debug.Log("Loading Done");
    }


    void Update()
    {

    }
}

