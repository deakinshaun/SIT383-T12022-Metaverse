using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.IO;


public class DeakinUniMap : MonoBehaviour
{
    private int z = 17;

    private GameObject[] Maps = new GameObject[20];
    public GameObject MapMana;

    private void retrieveMap(int x, int y, int zoom, Material MapMaterial)
    {
        //string url = "https://tile.openstreetmap.org/" + zoom + "/" + x + "/" + y + ".png";//This is using for Deakin Uni Map
        string url = "https://wprd03.is.autonavi.com/appmaptile?x=" + x + "&y=" + y + "&z=" + z + "&lang=zh_cn&size=1&scl=1&style=8"; //This is using for Chinese Map
        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "Terrain Retrieval Agent v0.01";
        var response = www.GetResponse();
        Debug.Log("Got a response");

        Texture2D tex = new Texture2D(256, 256);

        ImageConversion.LoadImage(tex, new BinaryReader(response.GetResponseStream()).ReadBytes(1000000));

        MapMaterial.mainTexture = tex;
    }

    private void FindPlanes()
    {
        int k = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                string address = "/ARCamera/Maps/" + i + j;
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
        for (int i = 0; i < 4; i++)
        {
            //DeakinUni x: 118368, y: 80441, z: 17;
            //Jinkun家 x: 106182, y: 49253, z:17;
            //guanxing家 x: 106901, y: 52034
            //我家 x: 106935, y: 52045
            //Huiqing x:104431, y:49774
            int x = 106935;
            int y = 52045;
            for (int j = 0; j < 5; j++)
            {
                Maps[k].transform.position = new Vector3(MapMana.transform.position.x + 20 - 10 * j, MapMana.transform.position.y + 15 - i * 10, MapMana.transform.position.z);
                Material mapMaterial = Maps[k].GetComponent<Renderer>().material;
                retrieveMap(x + j, y + i, z, mapMaterial);
                k++;
            }
        }
    }

    void Start()
    {
        MapMana = GameObject.Find("/ARCamera/Maps");
        Debug.Log("Start");
        FindPlanes();
        test01();
        Debug.Log("Loading Done");
    }

    // Update is called once per frame
    void Update()
    {

    }
}
