using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Scripting;
using System.Runtime.InteropServices;

/// <summary>
/// Contains information about position and tracking of the hand
/// </summary> 
[StructLayout(LayoutKind.Sequential)]
public struct TrackingInfo
{
	/// <summary>
	/// Provides tracking information regarding the bounding box that contains the hand.
	/// it yields normalized values between 0..1
	/// </summary>
	public BoundingBox bounding_box;

	///\deprecated
	public Vector3 poi;

	/// ### Example
	/// @code
	///private Vector3 trackedPosition;
	///float screenRightSideXValue = 0.5f;
	///
	///// <summary>
	///// Runs every frame, gets the position of the palm_center.
	///// </summary>
	///void Update()
	///{
	///	trackedPosition = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.palm_center;
	///	TrackedHandPosition(trackedPosition);
	///}
	///
	///// <summary>
	///// When the tracked hand position is on the right side of the screen, and x is greater than
	///// 0.5f the code will be executed. In this case the phone will vibrate.
	///// </summary>
	///// <param name="trackedPosition">the Vector3 from the palm center of the hand that's being
	///// tracked</param>
	///void TrackedHandPosition(Vector3 trackedPosition)
	///{
	///	if (trackedPosition.x > screenRightSideXValue)
	///	{
	///		// Your code here.
	///		Handheld.Vibrate();
	///	}
	///}
	/// @endcode
	/// <summary>
	/// Provides tracking information regarding the bounding box center that contains the hand, this information is primarily used in the cursor gizmo.
	/// it yields a normalized Vector3 information with the depth being 0 at the moment.
	/// a temporary solution would be to combine it with the depth estimation value (see below).
	/// </summary>
	public Vector3 palm_center;

	/// <summary>
	/// Information about wrist points.
	/// </summary>
	public WristInfo wristInfo;

	/// ### Example
	/// @code
	///private float depthValue;
	///private float maxDepth = 0.8f;
	///
	///// <summary>
	///// Runs every frame, gets the float value of the depth_estimation.
	///// </summary>
	///void Update()
	///{
	///	depthValue = ManomotionManager.Instance.Hand_infos[0].hand_info.tracking_info.depth_estimation;
	///	CheckDepth(depthValue);
	///}
	///
	///// <summary>
	///// Checks if current depth is greater than our maxDepth value, if so the phone will vibrate
	///// </summary>
	///// <param name="depth">the current depthValue from depth_estimation</param>
	///void CheckDepth(float depth)
	///{
	///	if (depth > maxDepth)
	///	{
	///		// Your code here
	///		Handheld.Vibrate();
	///	}
	///}
	/// 
	/// @endcode
	/// 
	/// <summary>
	/// Provides tracking information regarding an estimation  of the hand depth. 
	/// it yields a 0-1 float value depending based on the distance of the hand from the camera.
	/// </summary>
	public float depth_estimation;

	///\deprecated
	public float rotation;

	///\deprecated
	public int amount_of_contour_points;

	///\deprecated
	[MarshalAs(UnmanagedType.ByValArray, SizeConst = 5)]
	public Vector3[] finger_tips;

	/// <summary>
	/// 200 normalized contour points to get the contour of the hand. 
	/// </summary>
	[MarshalAs(UnmanagedType.ByValArray, SizeConst = 200)]
	public Vector3[] contour_points;

	/// <summary>
	/// Contains the positions of the 21 joints
	/// </summary>
	public SkeletonInfo skeleton;

	/// <summary>
	/// Information about winger width
	/// </summary>
	public FingerInfo fingerInfo;
}

