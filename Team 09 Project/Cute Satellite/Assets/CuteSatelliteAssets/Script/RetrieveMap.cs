using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Net;
using System.IO;
public class RetrieveMap : MonoBehaviour
{
    
    public MeshFilter mesh;
    public Material mapMaterial;

    public float scaleFactor = 0.001f;

    public int x = 63;
    public int y = 42;
    public int zoom = 7;
    public bool reshow = false;

    private void retrieveMap(int x, int y, int zoom)
    {
        string url = "https://tile.openstreetmap.org/" + zoom + "/" +
        x + "/" + y + ".png";
        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "Terrain Retrieval Agent v0.01";
        var response = www.GetResponse();
        Debug.Log("Got a response");
        Texture2D tex = new Texture2D(2, 2);
        ImageConversion.LoadImage(tex, new BinaryReader
        (response.GetResponseStream()).ReadBytes(1000000));
        mapMaterial.mainTexture = tex;
    }

    private void retrieveElevation(int x, int y, int zoom)
    {
        string url = "https://s3.amazonaws.com/elevation-tiles-prod/terrarium/" + zoom +
        "/" + x + "/" + y + ".png";
        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "Terrain Retrieval Agent v0.01";
        var response = www.GetResponse();
        Debug.Log("Got a response");
        Texture2D tex = new Texture2D(2, 2);
        ImageConversion.LoadImage(tex, new BinaryReader
        (response.GetResponseStream()).ReadBytes(1000000));
        //mapMaterial.mainTexture = tex;

        makeMesh(tex, 64, 64, scaleFactor);
    }

    void makeMesh(Texture2D tex, int xgrid, int zgrid, float yscale)
    {
        Vector3[] vertices = new Vector3[xgrid * zgrid];
        Vector2[] uvs = new Vector2[xgrid * zgrid];
        int[] triangles = new int[(xgrid - 1) * (zgrid - 1) * 2 * 3];
        //vertices
        for (int x = 0; x < xgrid; x++)
        {
            for (int z = 0; z < zgrid; z++)
            {
                float height = 0.0f;
                Color a = tex.GetPixel((int)(tex.width * ((float)(x - 1)) / xgrid),
                    (int) (tex.height * ((float)(z - 1) / zgrid)));
                height = (a.r * 255.0f * 256.0f) +
                    (a.g * 255.0f) +
                    (a.b * 255.0f / 256.0f) - 32768.0f;
                vertices[x + (z * xgrid)] = new Vector3(x, yscale * height, z);
                uvs[x + (z * zgrid)] =
                    new Vector2(((float)(x - 1)) / xgrid, ((float)(z - 1) / zgrid));
            }
        }
        //triangles
        for (int x = 0; x < xgrid - 1; x++)
        {
            for (int z = 0; z < zgrid - 1; z++)
            {
                triangles[(x + z * (xgrid - 1)) * 6 + 0] = (x + 1) + (z * xgrid);
                triangles[(x + z * (xgrid - 1)) * 6 + 1] = x + (z * xgrid);
                triangles[(x + z * (xgrid - 1)) * 6 + 2] = x + +((z + 1) * xgrid);

                triangles[(x + z * (xgrid - 1)) * 6 + 3] = (x + 1) + ((z + 1) * xgrid);
                triangles[(x + z * (xgrid - 1)) * 6 + 4] = (x + 1) + (z * xgrid);
                triangles[(x + z * (xgrid - 1)) * 6 + 5] = x + +((z + 1) * xgrid);
            }
        }

        //vertices[0] = new Vector3(-1, 0, -1);
        //vertices[1] = new Vector3(1, 0, -1);
        //vertices[2] = new Vector3(-1, 0, 1);
        //triangles[0] = 1;
        //triangles[1] = 0;
        //triangles[2] = 2;

        mesh.mesh.Clear();
        mesh.mesh.vertices = vertices;
        mesh.mesh.uv = uvs;
        mesh.mesh.triangles = triangles;
        mesh.mesh.RecalculateNormals();
    }
    void Start()
    {
        refresh();
    }
    void refresh() 
    
    { 

        retrieveMap(x, y, zoom); // 7/63/42
        retrieveElevation(x, y, zoom); // 7/63/42
    }
    public void zoomIn()
    {
        zoom = zoom + 1;
        x = x * 2;
        y = y * 2;
        refresh();
    }

    public void zoomOut()
    {
        zoom = zoom - 1;
        x = x / 2;
        y = y / 2;
        refresh();
    }

    public void Update()
    {
        if (reshow)
        {
            refresh();
            reshow = false;
        }
    }

}
