using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

[AddComponentMenu("ManoMotion/ManoVisualization")]
public class ManoVisualization : MonoBehaviour
{
    private int handsSupportedByLicence = 1;

    #region variables

    [SerializeField]
    private Camera cam;

    //[SerializeField]
    //private GameObject manomotionGenericLayerPrefab;

    private MeshRenderer _backgroundMeshRenderer;

    #endregion

    #region Initializing Components

    void Start()
    {
        if (!cam)
            cam = Camera.main;

        SetHandsSupportedByLicence();
        //InstantiateManomotionMeshes();

        ManomotionManager.OnManoMotionFrameProcessed += HandleVisualizationOfUpdatedFrame;
    }

    /// <summary>
    /// Set the maximum number of hands that can be simultaneously detected by Manomotion Manager based on the licence.
    /// This process is based on your Licence privilliges.
    /// </summary>
    void SetHandsSupportedByLicence()
    {
        handsSupportedByLicence = 1;
    }

    #endregion

    /// <summary>
    /// Setting up
    /// </summary>
    void HandleVisualizationOfUpdatedFrame()
    {
        if (!cam)
            cam = Camera.main;

        for (int handIndex = 0; handIndex < handsSupportedByLicence; handIndex++)
        {
            Warning warning = ManomotionManager.Instance.Hand_infos[handIndex].hand_info.warning;
            TrackingInfo trackingInfo = ManomotionManager.Instance.Hand_infos[handIndex].hand_info.tracking_info;
        }
    }

    /// <summary>
    /// Toggles the visibility of the given gameobject
    /// </summary>
    /// <param name="givenObject">Requires a gameObject that will change layers</param>
    private void ToggleObjectVisibility(GameObject givenObject)
    {
        givenObject.SetActive(!givenObject.activeInHierarchy);
    }
}