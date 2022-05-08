using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using TMPro;

/// <summary>
/// Instruction for the user to scan for surfaces reqierd for AR foundation SLAM tracking.
/// </summary>
public class ScanForSurface : MonoBehaviour
{
    public GameObject arPlanes;
    public GameObject arBoxes;
    public GameObject[] ManoMotionObjects;
    public ARPlaneManager arPlaneManager;
    public int planeUpdates;
    public TMP_Text percentegetext;
    public int scannpercent = 0;

    /// <summary>
    /// Starts to subscribe to the Plane Updated event and deactivates the ManoMotion objects while scanning.
    /// </summary>
    void Start()
    {
        arPlaneManager.planesChanged += CheckForUpdatedPlanes;

        foreach (var item in ManoMotionObjects)
        {
            item.SetActive(false);
        }
    }

    /// <summary>
    /// Every time a plane detection gets updated add 1 percent to scanning.
    /// </summary>
    /// <param name="plane"></param>
    public void CheckForUpdatedPlanes(ARPlanesChangedEventArgs plane)
    {
        scannpercent += 5;
    }

    /// <summary>
    /// When scanning gets 100% it deactivate the scanning instructions and the other objects gets active.
    /// </summary>
    void Update()
    {
        if (scannpercent > 100)
        {
            arPlanes.SetActive(false);

            if (arBoxes != null)
            {
                arBoxes.SetActive(true);
            }

            foreach (var item in ManoMotionObjects)
            {
                item.SetActive(true);
            }

            this.gameObject.SetActive(false);
        }

        percentegetext.text = (scannpercent.ToString() + "%");
    }

    /// <summary>
    /// Stop subscribing for plane updated when game object gets disabled.
    /// </summary>
    private void OnDisable()
    {
        arPlaneManager.planesChanged -= CheckForUpdatedPlanes;
    }
}
