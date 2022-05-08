using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Handles the visualization for the hand contour.
/// </summary>
public class ContourGizmo : MonoBehaviour
{
    /// <summary>
    /// Line renderer for drawing the hand contour.
    /// </summary>
    [SerializeField]
    private LineRenderer contourLineRenderer;

    /// <summary>
    /// ManoMotion Tracking information.
    /// </summary>
    private TrackingInfo trackingInfo;

    /// <summary>
    /// Vector3[] that will store modified contour points to show on screen
    /// </summary>
    private Vector3[] newContourPoints = new Vector3[200];

    /// <summary>
    /// The amount of contour points used for each frame.
    /// </summary>
    private int amountOfContourPoint;

    /// <summary>
    /// If no linerenderer is set this will get the Linerenderer from the GameObject
    /// </summary>
    private void Start()
    {
        if (contourLineRenderer == null)
        {
            contourLineRenderer = GetComponent<LineRenderer>();
        }
    }

    /// <summary>
    /// This will calculate the new ContourPoints and set the positions of the LineRenderer.
    /// </summary>
    public void ShowContour()
    {
        trackingInfo = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info;
        amountOfContourPoint = trackingInfo.amount_of_contour_points;

        if (ManomotionManager.Instance.Manomotion_Session.enabled_features.contour != 0)
        {
            newContourPoints = new Vector3[amountOfContourPoint];

            for (int i = 0; i < amountOfContourPoint; i++)
            {
                newContourPoints[i] = ManoUtils.Instance.CalculateNewPositionDepth(new Vector3(trackingInfo.contour_points[i].x, trackingInfo.contour_points[i].y, trackingInfo.contour_points[i].z), trackingInfo.depth_estimation);
            }

            contourLineRenderer.positionCount = amountOfContourPoint;
            contourLineRenderer.SetPositions(newContourPoints);
        }
    }
}
