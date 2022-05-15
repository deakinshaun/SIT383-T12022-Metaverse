using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Handles the visualization of the skeleton joints.
/// </summary>
public class SkeletonManager : MonoBehaviour
{
    
    #region Singleton
    /// <summary>
    /// Creates instance of SkeletonManager
    /// </summary>
    public static SkeletonManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            this.gameObject.SetActive(false);
            Debug.LogWarning("More than 1 SkeletonManager in scene");
        }
    }
    #endregion

    private TrackingInfo trackingInfo;

    [HideInInspector]
    ///The list of joints used for visualization
    public List<GameObject> _listOfJoints = new List<GameObject>();

    ///The prefab that will be used for visualization of the joints 
    [SerializeField]
    private GameObject[] jointPrefab;

    ///The linerenderes used on the joints in the jointPrefabs
    private LineRenderer[] lineRenderers = new LineRenderer[6];

    ///used to clamp the depth value
    private float clampMinDepth = 0.4f;

    ///Skeleton confidence
    private bool hasConfidence;
    private float skeletonConfidenceThreshold = 0.0001f;

    ///The materials used on the joints / Line renderers
    [SerializeField]
    private Material[] jointsMaterial;

    ///Use this to make the depth values smaler to fit the depth of the hand. 
    private int depthDivider = 10;

    /// The number of Joints the skeleton is made of.
    private int jointsLength = 21;

    /// <summary>
    /// Used to set the current hand detected by the camera.
    /// </summary>
    bool isRightHand = false;

    private GameObject skeletonParent;

    private void Start()
    {
        Inititialize();
    }

    void Inititialize()
    {
        CreateSkeletonParent();

        SkeletonModel(0, 1);

        ManomotionManager.OnSkeleton3dActive += SkeletonModel;

        for (int i = 0; i < jointsMaterial.Length; i++)
        {
            Color tempColor = jointsMaterial[i].color;
            tempColor.a = 0f;
            jointsMaterial[i].color = tempColor;
        }
    }

    /// <summary>
    /// Creates a parent object for the skeleton models. The SkeletonParent will update the rotation as the AR Camera so the joints will be correct even if the device is tilted or rotated.
    /// </summary>
    private void CreateSkeletonParent()
    {
        skeletonParent = new GameObject();
        skeletonParent.name = "SkeletonParent";

        for (int i = 0; i < jointPrefab.Length; i++)
        {
            jointPrefab[i] = Instantiate(jointPrefab[i], skeletonParent.transform);
        }
    }

    /// <summary>
    /// Create the hand model depending if you use 3D or 2D joints.
    /// The model need to have 21 joints.
    /// </summary>
    /// <param name="modelToLoad">The current model displayed</param>
    /// <param name="previousModel">The previous model used</param>
    private void SkeletonModel(int modelToLoad, int previousModel)
    {
        if (jointPrefab[modelToLoad].transform.childCount == jointsLength)
        {
            _listOfJoints.Clear();

            jointPrefab[previousModel].SetActive(false);
            jointPrefab[modelToLoad].SetActive(true);

            for (int i = 0; i < jointPrefab[modelToLoad].transform.childCount; i++)
            {
                _listOfJoints.Add(jointPrefab[modelToLoad].transform.GetChild(i).gameObject);
            }

            lineRenderers = new LineRenderer[6];
            lineRenderers = (jointPrefab[modelToLoad].GetComponentsInChildren<LineRenderer>());
            ResetLineRenderers();
        }

        else
        {
            Debug.LogFormat("Current model have {0} joints, need to have 21 joints", jointPrefab[modelToLoad].transform.childCount);
        }
    }

    /// <summary>
    /// Reset the Linerenders when changing Skeleton Model 2D/3D
    /// </summary>
    private void ResetLineRenderers()
    {
        foreach (var item in lineRenderers)
        {
            item.enabled = true;
            item.positionCount = 0;
            item.positionCount = 4;
        }

        lineRenderers[1].positionCount = 6;
    }


    void Update()
    {
        hasConfidence = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.confidence > skeletonConfidenceThreshold;
        trackingInfo = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info;
        skeletonParent.transform.rotation = Camera.main.transform.rotation;

        UpdateJointPositions();
        LeftOrRightHand();
        UpdateJointorientation();

    }

    /// <summary>
    /// Calculates the radiant value to degrees
    /// </summary>
    /// <param name="radiantValue">the radiant value</param>
    /// <returns></returns>
    private float radianToDegrees(float radiantValue)
    {
        float degreeValue;
        degreeValue = radiantValue * Mathf.Rad2Deg;
        return degreeValue;
    }

    /// <summary>
    /// Value dont update, so at this point orientation only works for one hand, default is right hand.
    /// Change 0 to 1 to run for left hand.
    /// Sets the isRightHand hand bool to true or false with inforamtion from the gesture info
    /// </summary>
    private void LeftOrRightHand()
    {      
        if (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.is_right == 1)
        {
            isRightHand = true;
        }
        else
        {
            isRightHand = false;
        }
    }

    /// <summary>
    /// Updates the orientation of the joints according to the orientation given by the SDK.
    /// </summary>
    private void UpdateJointorientation()
    {
        if (hasConfidence)
        {
            for (int i = 0; i < ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.skeleton.orientation_joints.Length; i++)
            {
                float xRotation = radianToDegrees(trackingInfo.skeleton.orientation_joints[i].x);
                float zRotation = radianToDegrees(trackingInfo.skeleton.orientation_joints[i].z);
                float yRotation = radianToDegrees(trackingInfo.skeleton.orientation_joints[i].y);

                if (!isRightHand)
                {
                    yRotation = radianToDegrees((3.14f + trackingInfo.skeleton.orientation_joints[i].y));
                }

                switch (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side)
                {
                    case HandSide.None:
                        break;
                    case HandSide.Backside:
                        break;
                    case HandSide.Palmside:
                        xRotation = -xRotation;
                        zRotation = -zRotation;
                        break;
                    default:
                        break;
                }

                Vector3 newRotation = new Vector3(xRotation, yRotation, zRotation);

                _listOfJoints[i].transform.localEulerAngles = newRotation;
            }
        }
    }

    /// <summary>
    /// Updates the position of the joints according to the positions given by the SDK.
    /// If confidence is to low, the joints will fade out.
    /// </summary>
    private void UpdateJointPositions()
    {
        if (hasConfidence)
        {

            if (jointsMaterial[jointsMaterial.Length - 1].color.a < 1)
            {
                for (int i = 0; i < jointsMaterial.Length; i++)
                {
                    Color tempColor = jointsMaterial[i].color;
                    tempColor.a += 0.1f;
                    jointsMaterial[i].color = tempColor;
                }
            }

            for (int i = 0; i < trackingInfo.skeleton.joints.Length; i++)
            {
                float depthEstimation = Mathf.Clamp(trackingInfo.depth_estimation, clampMinDepth, 1);
                float jointDepthValue = trackingInfo.skeleton.joints[i].z / depthDivider;

                switch (ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info.hand_side)
                {
                    case HandSide.None:
                        break;
                    case HandSide.Backside:
                        jointDepthValue = -trackingInfo.skeleton.joints[i].z / depthDivider;
                        break;
                    case HandSide.Palmside:
                        jointDepthValue = trackingInfo.skeleton.joints[i].z / depthDivider;
                        break;
                    default:
                        break;
                }

                Vector3 newPosition3d = ManoUtils.Instance.CalculateNewPositionSkeletonJointDepth(new Vector3(trackingInfo.skeleton.joints[i].x, trackingInfo.skeleton.joints[i].y, trackingInfo.skeleton.joints[i].z), depthEstimation);

                _listOfJoints[i].transform.position = newPosition3d;       
            }
        }

        else
        {
            if (jointsMaterial[0].color.a > 0)
            {
                for (int i = 0; i < jointsMaterial.Length; i++)
                {
                    Color tempColor = jointsMaterial[i].color;
                    tempColor.a -= 0.1f;
                    jointsMaterial[i].color = tempColor;
                }
            }
        }
    }
}