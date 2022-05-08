using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.IO;


public class DeakinUniMap : MonoBehaviour
{
    public int x;
    public int y;
    private int z = 17;
    private Material mapMaterial;

    public GameObject[] Maps;
    public Material[] MapMaterials;
    private void retrieveMap(int x, int y, int zoom)
    {
        string url = "https://tile.openstreetmap.org/" + zoom + "/" + x + "/" + y + ".png";

        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "Terrain Retrieval Agent v0.01";
        var response = www.GetResponse();
        Debug.Log("Got a response");

        Texture2D tex = new Texture2D(256, 256);

        ImageConversion.LoadImage(tex, new BinaryReader(response.GetResponseStream()).ReadBytes(1000000));

        GetComponent<Renderer>().material.mainTexture = tex;
    }

    /*private void test01()
    {
        int k = 0;
        for (int i = 2; i >= -2; i--)
        {
            for (int j = -1; j < 1; j++)
            {
                Maps[k].transform.position = new Vector3(i * 10, 0, j * 10);
                Maps[k].GetComponent<Renderer>().material = 
                k++;
            }
        }
    }*/

    void Start()
    {
        retrieveMap(x, y, z);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
