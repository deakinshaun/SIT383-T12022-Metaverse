using UnityEngine;

public class GyroController : MonoBehaviour
{
    #region [Private fields ]
 
    private bool gyroEnabled = true;
  
    private const float lowPassFilterFactor = 0.2f;
   
    private readonly Quaternion baseIdentity = Quaternion.Euler(90, 0, 0);
    private readonly Quaternion landscapeRight = Quaternion.Euler(0, 0, 90);
    private readonly Quaternion landscapeLeft = Quaternion.Euler(0, 0, -90);
    private readonly Quaternion upsideDown = Quaternion.Euler(0, 0, 180);
   
    private Quaternion cameraBase = Quaternion.identity;
  
    private Quaternion calibration = Quaternion.identity;
   
    private Quaternion baseOrientation = Quaternion.Euler(90, 0, 0);
   
    private Quaternion baseOrientationRotationFix = Quaternion.identity;
  
    private Quaternion referanceRotation = Quaternion.identity;
    private bool debug = true;
    #endregion
    #region [Unity events Unity]
    protected void Start()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        AttachGyro();
    }
    protected void Update()
    {
        if (!gyroEnabled)
            return;
        transform.rotation = Quaternion.Slerp(transform.rotation,
          cameraBase * (ConvertRotation(referanceRotation * Input.gyro.attitude) * GetRotFix()), lowPassFilterFactor);
    }
   
    #endregion
    #region [Public methods 

    private void AttachGyro()
    {
        Input.gyro.enabled = true;
        gyroEnabled = true;
        ResetBaseOrientation();
        UpdateCalibration(true);
        UpdateCameraBaseRotation(true);
        RecalculateReferenceRotation();
    }
   
    private void DetachGyro()
    {
        gyroEnabled = false;
    }
    #endregion
    #region [Private methods]

    private void UpdateCalibration(bool onlyHorizontal)
    {
        if (onlyHorizontal)
        {
            var fw = (Input.gyro.attitude) * (-Vector3.forward);
            fw.z = 0;
            if (fw == Vector3.zero)
            {
                calibration = Quaternion.identity;
            }
            else
            {
                calibration = (Quaternion.FromToRotation(baseOrientationRotationFix * Vector3.up, fw));
            }
        }
        else
        {
            calibration = Input.gyro.attitude;
        }
    }
    
    private void UpdateCameraBaseRotation(bool onlyHorizontal)
    {
        if (onlyHorizontal)
        {
            var fw = transform.forward;
            fw.y = 0;
            if (fw == Vector3.zero)
            {
                cameraBase = Quaternion.identity;
            }
            else
            {
                cameraBase = Quaternion.FromToRotation(Vector3.forward, fw);
            }
        }
        else
        {
            cameraBase = transform.rotation;
        }
    }
    /// <summary>

    private static Quaternion ConvertRotation(Quaternion q)
    {
        return new Quaternion(q.x, q.y, -q.z, -q.w);
    }

    private Quaternion GetRotFix()
    {
#if UNITY_3_5
        if (Screen.orientation == ScreenOrientation.Portrait)
            return Quaternion.identity;
        if (Screen.orientation == ScreenOrientation.LandscapeLeft || Screen.orientation == ScreenOrientation.Landscape)
            return landscapeLeft;     
        if (Screen.orientation == ScreenOrientation.LandscapeRight)
            return landscapeRight;
        if (Screen.orientation == ScreenOrientation.PortraitUpsideDown)
            return upsideDown;
        return Quaternion.identity;
#else
        return Quaternion.identity;
#endif
    }

    private void ResetBaseOrientation()
    {
        baseOrientationRotationFix = GetRotFix();
        baseOrientation = baseOrientationRotationFix * baseIdentity;
    }

    private void RecalculateReferenceRotation()
    {
        referanceRotation = Quaternion.Inverse(baseOrientation) * Quaternion.Inverse(calibration);
    }
    #endregion
}
