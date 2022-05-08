using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Scripting;
using System.Runtime.InteropServices;

/// <summary>
/// Gives information about the width of the fingers.
/// </summary>
[StructLayout(LayoutKind.Sequential)]
public struct FingerInfo
{
    /// <summary>
    ///The normalized left position.
    /// </summary>
    public Vector3 left_point;

    /// <summary>
    ///The normalized right position.
    /// </summary>
    public Vector3 right_point;

    /// <summary>
    /// Warning flag if finger info can´t be calculated correctly.
    /// </summary>
    public int fingerWarning;
}
