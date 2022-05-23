using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Scripting;
using System.Runtime.InteropServices;

/// <summary>
/// Information of wrist position.
/// </summary> 
[StructLayout(LayoutKind.Sequential)]
public struct WristInfo
{
    /// <summary>
    ///The normalized left wrist position.
    /// </summary>
    public Vector3 left_point;

    /// <summary>
    ///The normalized right wrist position.
    /// </summary>
    public Vector3 right_point;

    /// <summary>
    /// Warning flag if wrist info can´t be calculated correctly.
    /// </summary>
    public int wristWarning;
}
