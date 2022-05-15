using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// This tells the SDK if you are using any add ons like ARFoundations.
/// </summary>
public enum AddOn
{
    DEFAULT = 0,
    ARFoundation = 4
}

/// <summary>
/// Provides information regarding the different orientation types supported by the SDK.
/// </summary>
public enum SupportedOrientation
{
    LANDSCAPE_LEFT = 3,
    LANDSCAPE_RIGHT = 4,
    PORTRAIT = 1,
    PORTRAIT_INVERTED = 2
}

/// <summary>
/// Provides additional information regarding the lincenses taking place in this application.
/// </summary>
public enum Flags
{
    FLAG_IMAGE_SIZE_IS_ZERO = 1000,
    FLAG_IMAGE_IS_TOO_SMALL = 1001,
    ANDROID_SAVE_BATTERY_ON = 2000
}

/// <summary>
/// Information reagarding the sessions sent to the SDK every frame.
/// </summary>
public struct Session
{
    /// Information about imgae size.  
    public Flags flag;
    /// The current orientation of the device
    public DeviceOrientation orientation;
    /// Inforamtion if the SDK is used together with add on such as AR Foundation.
    public AddOn add_on;
    /// The current Tracking smoothing value (0-1) for the finger & wrist information.
    public float smoothing_controller;
    /// The current Tracking smoothing value (0-1) for the gestures.
    public float gesture_smoothing_controller;
    /// Information about which features to run.
    public Features enabled_features;
}

/// <summary>
/// 1 for using it and 0 for not using it, for skeleton it´s either 3d if 1 or 2d if 0. 
/// </summary>
public struct Features
{
    ///\deprecated
    public int pinch_poi;
    /// 1 = 3D skeleton, 0 = 2D skeleton.
    public int skeleton_3d;
    /// 1 = gesturs on, 0 = gestures off.
    public int gestures;
    /// 1 = fast mode on, 0 = fast mode off.
    public int fast_mode;
    /// This feature is not working as expected at the moment
    /// therefore we recomend not to use it in this version 1.4.3.2 of the SDK Pro.
    /// It will be fixed in the next iteration.
    /// 1 = wrist info on, 0 = wrist info off.
    public int wrist_info;
    /// 0 = finger info off.
    /// 1 = Thumb.
    /// 2 = Index Finger.
    /// 3 = Middle Finger.
    /// 4 = Ring Finger.
    /// 5 = Pinky.
    public int finger_info;
    /// 1 = contour on, 0 = contour off.
    public int contour;
}