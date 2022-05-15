using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Handles the visualization of the finger width and position.
/// </summary>
public class FingerInfoGizmo : MonoBehaviour
{
    /// <summary>
    /// Finger info, gets the information from ManoMotionManager.
    /// </summary>
    private FingerInfo fingerInfo;

    /// <summary>
    /// The distance between the two finger points.
    /// </summary>
    private float _widthBetweenFingerPoints;
    
    [SerializeField]
    private GameObject fingerInforamtionPrefab;

    /// <summary>
    /// The left finger point gameobject.
    /// </summary>
    private GameObject leftFingerPoint3D;

    /// <summary>
    /// The right finger point gameobject.
    /// </summary>
    private GameObject rightFingerPoint3D;

    /// <summary>
    /// The getter for the width between the finger points.
    /// </summary>
    public float WidthBetweenFingerPoints
    {
        get
        {
            return _widthBetweenFingerPoints;
        }
    }

    /// <summary>
    /// The getter for the left finger point.
    /// </summary>
    public Vector3 LeftFingerPoint3DPosition
    {
        get
        {
            return leftFingerPoint3D.transform.position;
        }
    }

    /// <summary>
    /// The getter for the right finger point.
    /// </summary>
    public Vector3 RightFingerPoint3DPosition
    {
        get
        {
            return rightFingerPoint3D.transform.position;
        }
    }

    /// <summary>
    /// If left or right point is not set from inspector, it will find the LeftFingerSphere and RightFingerSphere game objects.
    /// </summary>
    private void Awake()
    {
        fingerInforamtionPrefab = Instantiate(fingerInforamtionPrefab);
        fingerInforamtionPrefab.name = "Finger";

        if (leftFingerPoint3D == null || rightFingerPoint3D == null)
        {
            leftFingerPoint3D = GameObject.Find("LeftFingerSphere");
            rightFingerPoint3D = GameObject.Find("RightFingerSphere");
        }
    }

    /// <summary>
    /// If SDK should run finger information ShowFingerInformation will calculate the normalized values to fit the hands position.
    /// if no hand is detected the left and right sphere will be set to position (-1,-1,-1)
    /// </summary>
    public void ShowFingerInformation()
    {
        fingerInfo = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.fingerInfo;

        _widthBetweenFingerPoints = Vector3.Distance(fingerInfo.left_point, fingerInfo.right_point);

        leftFingerPoint3D.transform.position = ManoUtils.Instance.CalculateNewPositionDepth(new Vector3(fingerInfo.left_point.x, fingerInfo.left_point.y, 0), ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation);
        rightFingerPoint3D.transform.position = ManoUtils.Instance.CalculateNewPositionDepth(new Vector3(fingerInfo.right_point.x, fingerInfo.right_point.y, 0), ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation);

        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.mano_class == ManoClass.NO_HAND)
        {
            rightFingerPoint3D.SetActive(false);
            leftFingerPoint3D.SetActive(false);
        }

        else
        {
            rightFingerPoint3D.SetActive(true);
            leftFingerPoint3D.SetActive(true);
        }
    }
}
