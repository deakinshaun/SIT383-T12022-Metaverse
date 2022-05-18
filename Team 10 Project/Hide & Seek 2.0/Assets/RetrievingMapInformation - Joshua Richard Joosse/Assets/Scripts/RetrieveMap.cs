using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Net;
using System.IO;

public class RetrieveMap : MonoBehaviour
{
    public int zoom = 0;
    public int x = 0;
    public int y = 0;

    public Material mapMaterial;
    public GameObject tileObject;

    private static bool TrustCertificate (object sender, X509Certificate x509Certificate, X509Chain x509Chain, SslPolicyErrors sslPolicyErrors)
    {
        // All Certificates are accepted. Not good
        // practice, but outside scope of this
        // example
        return true;
    }

    private void retrieveTile (int zoom, int x, int y)
    {
        // Elevation tiles, see: https://www.mapzen.com/blog/terrain-tile-service/
        string url = "https://s3.amazonaws.com/elevation-tiles-prod/terrarium/" + zoom + "/" + x + "/" + y + ".png";
        //string url = "https://a.tile.openstreetmap.org/" + zoom + "/" + x + "/" + y + ".png";
        Debug.Log("Retrieving: " + url);
        WebRequest www = WebRequest.Create(url);
        ((HttpWebRequest)www).UserAgent = "TerrainAltitudeMaps";
        
        WebResponse response = www.GetResponse();
        Texture2D tex = new Texture2D(10, 10);
        ImageConversion.LoadImage (tex, new BinaryReader (response.GetResponseStream ()).ReadBytes(10000000));
    
        mapMaterial.mainTexture = tex;
    }

    void makeMesh (int width, int height)
    {
        Vector3 [] vertices = new Vector3[(width + 1) * (height + 1)];
        int [] triangles = new int[6 * width * height];
        int triangleindex = 0;
        for (int y = 0; y < height + 1; y++)
        {
            for (int x = 0; x <  width + 1; x++)
            {
                float xc = (float)x / (width + 1);
                float yc = (float)y / (height + 1);
                float zc = 0.0f;

                Debug.Log("At " + x + " " + y + " " + triangleindex);
                vertices[y * (width + 1) + x] = new Vector3(xc, yc, zc);

                if ((x < width) && (y < height))
                {

                
                    
                    triangles[triangleindex++] = (y) * (width + 1) + (x + 1);
                    triangles[triangleindex++] = (y) * (width + 1) + (x);
                    triangles[triangleindex++] = (y + 1) * (width + 1) + (x);

                   
                    triangles[triangleindex++] = (y + 1) * (width + 1) + (x + 1);
                     triangles[triangleindex++] = (y) * (width + 1) + (x + 1);
                    triangles[triangleindex++] = (y + 1) * (width + 1) + (x);
                }
            }
        }
    
        Mesh m = new Mesh();
        m.vertices = vertices;
        m.triangles = triangles;
        tileObject.GetComponent<MeshFilter>().mesh = m;
    
    }   

    void Start()
    {
        ServicePointManager.ServerCertificateValidationCallback = TrustCertificate;

        makeMesh(16, 16);

            retrieveTile(zoom, x, y);
    }

}
