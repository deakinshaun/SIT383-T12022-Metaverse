using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using UnityEngine.Video;
using NatSuite.ML;
using NatSuite.ML.Features;
using NatSuite.ML.Vision;
using NatSuite.ML.Visualizers;

public class WebcamPoseTracking : MonoBehaviour
{

    [Header(@"NatML")]
    public string accessKey;

    [Header(@"UI")]
    public MoveNetVisualizer visualizer;

    private MoveNetPredictor predictor;
    private WebCamTexture webcam;
    // Start is called before the first frame update
    async void Start()
    {
        // Fetch model data from NatML
        Debug.Log("Fetching model data from NatML...");
        var modelData = await MLModelData.FromHub("@natsuite/movenet", accessKey);


        // Create MoveNet predictor
        using var model = modelData.Deserialize();
        predictor = new MoveNetPredictor(model);

        webcam = new WebCamTexture();
        webcam.Play();
    }



    // Update is called once per frame
    void Update()
    {
        var pose = predictor.Predict(webcam);
        visualizer.Render(webcam, pose);
        // Visualize
    }
}
