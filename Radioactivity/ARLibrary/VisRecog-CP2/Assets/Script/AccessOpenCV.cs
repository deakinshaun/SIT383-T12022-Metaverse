using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using System.IO;
using System;

public class AccessOpenCV : MonoBehaviour
{
    public Material cameraMaterial;

    public GameObject markerTemplate;
    public GameObject markerParent;

    private bool modelReady = false;

    private float delayTime = 0.0f;

    public Text text;

    private string[] CLASSES = { "background", "aeroplane", "bicycle", "bird", "boat", "bottle",
"bus", "car", "cat", "chair", "cow", "diningtable", "dog", "horse", "motorbike", "person", "pottedplant", "sheep", "sofa", "train"
, "tvmonitor" };

    [DllImport("VisualRecognition")]
    private static extern void prepareModel(string
   dirname);

    [DllImport("VisualRecognition")]
    private static extern int doRecognise(byte[]
   imageData, int width, int height);

    [DllImport("VisualRecognition")]
    private static extern void retrieveMatch(int i, ref
   int category, ref float confidence, ref float sx
   , ref float sy, ref float ex, ref float ey);

    void Start()
    {
        StartCoroutine(prepareModel());
    }
    IEnumerator prepareModel()
    {
        yield return StartCoroutine(extractFile("", "MobileNetSSD_deploy.caffemodel"));
        yield return StartCoroutine(extractFile("", "MobileNetSSD_deploy.prototxt.txt"));

        prepareModel(Application.persistentDataPath);

        modelReady = true;
    }
    private void clearVisuals()
    {
        foreach (Transform child in markerParent.transform)
        {
            GameObject.Destroy(child.gameObject);
        }

    }

    private void addVisual(string name, float confidence
   , float sx, float sy, float ex, float ey)
    {
        GameObject g = GameObject.Instantiate(
       markerTemplate);
        g.transform.position = new Vector3(5.0f * (sx + ex
       ) - 5.0f, -5.0f * (sy + ey) + 5.0f, 0);
        g.transform.localScale = new Vector3(10.0f * Mathf
       .Abs(sx - ex), 10.0f * Mathf.Abs(sx - ex),
       1);
        g.GetComponentInChildren<TextMesh>().text = name
       + "\n" + confidence;
        g.transform.SetParent(markerParent.transform, false
       );
    }

    void Update()
    {
        delayTime += Time.deltaTime;

        if (modelReady && (delayTime > 2.0f))
        {
            clearVisuals();
            delayTime = 0.0f;

            Texture2D image = new Texture2D(cameraMaterial.
           mainTexture.width, cameraMaterial.
           mainTexture.height, TextureFormat.RGBA32,
           false);
            RenderTexture renderTexture = new RenderTexture(
           cameraMaterial.mainTexture.width,
           cameraMaterial.mainTexture.height, 32);
            Graphics.Blit(cameraMaterial.mainTexture,
           renderTexture);
            RenderTexture.active = renderTexture;
            image.ReadPixels(new Rect(0, 0, renderTexture.
           width, renderTexture.height), 0, 0);
            image.Apply();

            int numMatch = doRecognise(image.
           GetRawTextureData(), image.width, image.
           height);
            text.text = "Matches: " + numMatch;

            for (int i = 0; i < numMatch; i++)
            {
                int category = -1;
                float confidence = 0.0f;
                float sx = 0, sy = 0, ex = 0, ey = 0;
                retrieveMatch(i, ref category, ref confidence,
               ref sx, ref sy, ref ex, ref ey);
                if (confidence > 0.2f)
                {
                    Debug.Log("Match: " + category + " " +
                   confidence + " " + sx + " " + sy + " " +
                   ex + " " + ey);
                    addVisual(CLASSES[category], confidence, sx,
                   sy, ex, ey);
                }
            }

        }
    }

    // Copy file from the android package to a readable-writeable region of the host file system.
    IEnumerator extractFile(string assetPath, string
assetFile)
    {
        // Source is the streaming assets path.
        string sourcePath = Application.streamingAssetsPath
       + "/" + assetPath + assetFile;
        if ((sourcePath.Length > 0) && (sourcePath[0] ==
       '/'))
        {
            sourcePath = "file://" + sourcePath;
        }
        string destinationPath = Application.
       persistentDataPath + "/" + assetFile;

        // Files must be handled via a WWW to extract.
        WWW w = new WWW(sourcePath);
        yield return w;
        try
        {
            File.WriteAllBytes(destinationPath, w.bytes);
        }
        catch (Exception e)
        {
            Debug.Log("Issue writing " + destinationPath + " " + e);
        }
        Debug.Log(sourcePath + " -> " + destinationPath +
       " " + w.bytes.Length);
    }
}



