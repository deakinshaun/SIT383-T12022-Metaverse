using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Handle the linerenderers between the skeleton joints.
/// </summary>
public class DrawLineBetweenJoints : MonoBehaviour
{
    private LineRenderer lineRenderer;

    /// The joints that will be connected by the line renderer
    public Transform[] nextJoint;

    /// Set to true if the joints is the wrist
    [SerializeField]
    private bool useWrist;

    /// Set to true if the joints is palm
    [SerializeField]
    private bool usePalm;

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    void LateUpdate()
    {
        DrawOutJointLInes();
    }

    /// <summary>
    /// Draws out the skeleton with line renderers. 
    /// if useWrist is true it will need one extra postion, and if usePalm is true it will use two extra positions.
    /// </summary>
    public void DrawOutJointLInes()
    {
        lineRenderer.SetPosition(0, nextJoint[0].position);
        lineRenderer.SetPosition(1, nextJoint[1].position);
        lineRenderer.SetPosition(2, nextJoint[2].position);
        lineRenderer.SetPosition(3, nextJoint[3].position);

        if (useWrist)
        {
            lineRenderer.SetPosition(4, nextJoint[4].position);
        }
        if (usePalm)
        {
            lineRenderer.SetPosition(4, nextJoint[4].position);
            lineRenderer.SetPosition(5, nextJoint[5].position);
        }
    }
}
