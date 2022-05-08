using UnityEngine;
using UnityEditor;
#if UNITY_ANDROID
using UnityEngine.Android;
using System;
#endif

[InitializeOnLoad]
public class ManoMotionSetup
{
    /// <summary>
    /// Automaticly sets up the "Project Settings/Player/Other Settings" for you.
    /// </summary>
    static ManoMotionSetup()
    {
#if UNITY_ANDROID
        Debug.Log("Setting up ManoMotion Library Requirements");
        PlayerSettings.Android.preferredInstallLocation = AndroidPreferredInstallLocation.PreferExternal;
        PlayerSettings.Android.forceInternetPermission = true;
        PlayerSettings.Android.forceSDCardPermission = true;
        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
        PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARM64;
        Debug.Log("Successfully set up ManoMotion Library Requirements");
#endif
#if UNITY_IOS
        int arm64Architecture = 1;
        if (PlayerSettings.iOS.targetOSVersionString == "10.0")
        {
            PlayerSettings.iOS.targetOSVersionString = "11.0";
        }
        PlayerSettings.SetArchitecture(BuildTargetGroup.iOS, arm64Architecture);
        if (PlayerSettings.iOS.cameraUsageDescription == "")
        {
            PlayerSettings.iOS.cameraUsageDescription = "This application requires camera permission in order to detect a hand when you place it in front of the camera and understand the gesture interaction. ";
        }
        PlayerSettings.SetScriptingBackend(BuildTargetGroup.iOS, ScriptingImplementation.IL2CPP);
        PlayerSettings.SetArchitecture(BuildTargetGroup.iOS, arm64Architecture);
#endif
    }
}
