using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.XR.ARFoundation;
using TMPro;

public class ExampleDetectionCanvas : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI statusText;

    //This square can be used to indicate that a plane has been found by overlaying a 2D sprite on the Raycasting of the screen onto a detected plane.
    [SerializeField]
    private GameObject Square;

    [SerializeField]
    private GameObject textDisplay;

    [SerializeField]
    private GameObject GizmoCanvas;

    [SerializeField]
    private ManoVisualization manoVisualization;

    private bool showBBStoredValue;

    void Start()
    {
        ARSession.stateChanged += HandleStateChanged;
    }

    void HandleShowBoundingBoxValueChanged(bool state)
    {
        showBBStoredValue = state;
    }

    void HandleStateChanged(ARSessionStateChangedEventArgs eventArg)
    {
        switch (eventArg.state)
        {
            case ARSessionState.None:
                statusText.text = "session status none";

                break;
            case ARSessionState.Unsupported:
                statusText.text = "ARFoundation not supported";

                break;
            case ARSessionState.CheckingAvailability:
                statusText.text = "Checking availability";

                break;
            case ARSessionState.NeedsInstall:
                statusText.text = "Needs Install";

                break;
            case ARSessionState.Installing:
                statusText.text = "Installing";

                break;
            case ARSessionState.Ready:
                statusText.text = "Ready";

                break;
            case ARSessionState.SessionInitializing:
                statusText.text = "Poor SLAM Quality";
                break;

            case ARSessionState.SessionTracking:
                statusText.text = "Tracking quality is Good";

                break;
            default:
                break;
        }

        //Advice
        //Maybe combine this with the plane detection being 1. See if its needed after the QA.
        //Maybe use the box in the Raycast scenario
        textDisplay.SetActive(eventArg.state != ARSessionState.SessionTracking);
        Square.SetActive(eventArg.state != ARSessionState.SessionTracking);
        GizmoCanvas.SetActive(eventArg.state == ARSessionState.SessionTracking);
    }
}
