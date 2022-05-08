using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TryOnLine : MonoBehaviour
{
    /// <summary>
    /// Wrist or finger left point GameObject.
    /// </summary>
    public GameObject leftPoint;

    /// <summary>
    /// Wrist or finger right point GameObject.
    /// </summary>
    public GameObject rightPoint;

    /// <summary>
    /// Linerenderer to illustrate line between wrist or finger points.
    /// </summary>
    public LineRenderer tryOnLineRenderer;

    void LateUpdate()
    {
        DrawOutLine();
    }

    /// <summary>
    /// Draws a line between the 2 points.
    /// </summary>
    private void DrawOutLine()
    {
        tryOnLineRenderer.SetPosition(0, leftPoint.transform.position);
        tryOnLineRenderer.SetPosition(1, rightPoint.transform.position);
    }
}
