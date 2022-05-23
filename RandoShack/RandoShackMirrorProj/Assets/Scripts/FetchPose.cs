using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using System;
using System.Runtime.InteropServices;
using System.Threading;
using System.IO;
using UnityEngine.UI;

public class FetchPose : MonoBehaviour
{

    [DllImport("poseinterface")]
    unsafe private static extern void initPose(string modelfile);

    [DllImport("poseinterface")]
    unsafe private static extern int computePose(IntPtr texture, int w, int h, float* results);
    [DllImport("poseinterface")]
    unsafe private static extern int computePoseData(byte[] imageData, int w, int h, float* results);

    [SerializeField]
    private GameObject planeScreen;

    public Material camTexMaterial;

    private WebCamTexture webcamTexture;

    private int numPointsInPose = 17;

   // public PoseSkeleton poseVisualizer;
   public NetworkedPose poseTransmitter;

    private bool dataReady;

    private int currentCamera = 0;
    public Text outputText;

    private bool overrideCapture = false;



    public void toggleCapture()
    {
        overrideCapture = !overrideCapture;
    }

    private void showCameras()
    {
        outputText.text = "";
        foreach (WebCamDevice d in WebCamTexture.devices)
        {
            outputText.text += d.name + (d.name == webcamTexture.deviceName ? "*" : "") + "\n";
        }
    }

    public void nextCamera()
    {
        currentCamera = (currentCamera + 1) % WebCamTexture.devices.Length;

        // Change camera only works if the camera is stopped.
        webcamTexture.Stop();
        webcamTexture.deviceName = WebCamTexture.devices[currentCamera].name;
        Debug.Log($"W: {webcamTexture.width} h:{webcamTexture.height}");
        webcamTexture.Play();
        showCameras();
    }

    // Start is called before the first frame update
    void Start()
    {
        webcamTexture = new WebCamTexture();
        showCameras();

        camTexMaterial.mainTexture = webcamTexture;

        webcamTexture.Play();
        dataReady = false;
        StartCoroutine(prepareModel());
    }


    IEnumerator prepareModel()
    {
        string modelfile = "posenet_mobilenet_v1_100_257x257_multi_kpt_stripped.tflite";
        yield return StartCoroutine(extractFile("", modelfile));

        initPose(Application.persistentDataPath + "/" + modelfile);
        dataReady = true;
    }

    // Retrieve the pose from the native library. This returns
    // as an array of floats, containing x, y, and confidence
    // values for each point.
    unsafe float[] retrievePose()
    {
        NativeArray<float> pose = new NativeArray<float>
            (numPointsInPose * 3, Allocator.Temp);
        int result = computePose(webcamTexture.GetNativeTexturePtr(), webcamTexture.width, webcamTexture.height, (float*)NativeArrayUnsafeUtility.GetUnsafePtr(pose));
        Debug.Log("Got result " + result + " " + pose[0] + " " + pose[1] + " " + pose[2]);
        return pose.ToArray();
    }

    // Version that retrieves the pose that passes image data
    // directly to the native library, rather that relying on
    // accessing the texture directly.
    unsafe float[] retrievePoseData()
    {
        Texture2D image = new Texture2D(camTexMaterial.mainTexture.width, camTexMaterial.mainTexture.height, TextureFormat.RGB24, false);


        RenderTexture renderTexture = new RenderTexture(camTexMaterial.mainTexture.width, camTexMaterial.mainTexture.height, 24);

        Graphics.Blit(camTexMaterial.mainTexture, renderTexture);
        RenderTexture.active = renderTexture;
        image.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);
        image.Apply();

        NativeArray<float> pose = new NativeArray<float>(numPointsInPose * 3, Allocator.Temp);

        int result = computePoseData(image.GetRawTextureData(), image.width, image.height, (float*)NativeArrayUnsafeUtility.GetUnsafePtr(pose));

        // Debug.Log ("Got result " + result + " " + pose[0] +" " + pose[1] + " " + pose[2]);

        Destroy(renderTexture);
        Destroy(image);
        return pose.ToArray();
    }

    // Update is called once per frame
    void Update()
    {
        if (dataReady && (overrideCapture || (Input.GetAxis
       ("Fire1") > 0)))
        {
            float startTime = Time.realtimeSinceStartup;
            // float [] pose = retrievePose ();
            float[] pose = retrievePoseData();
            float endTime = Time.realtimeSinceStartup;
            Debug.Log("Pose tracked in " + (endTime - startTime).ToString("F6") + " seconds");

            //poseVisualizer.updatePose(pose);
            poseTransmitter.updatePose(pose);
        }
    }

    // Copy files into an area where they are accessible. This is particularly
    // relevant to packages created for mobile platforms.
    IEnumerator extractFile(string assetPath, string assetFile)
    {
        // Source is the streaming assets path.
        string sourcePath = Application.streamingAssetsPath + "/" + assetPath + assetFile;
        if ((sourcePath.Length > 0) && (sourcePath[0] == '/'))
        {
            sourcePath = "file://" + sourcePath;
        }
        string destinationPath = Application.persistentDataPath + "/" + assetFile;

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
        Debug.Log(sourcePath + " -> " + destinationPath + " " + w.bytes.Length);
    }

}
