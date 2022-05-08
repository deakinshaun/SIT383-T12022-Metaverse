using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Manoclass is the core block of the Gesture Classification. This value will be continuously updated based on the hand detection on a give frame.
/// </summary>
public enum ManoClass
{
    NO_HAND = -1,
    GRAB_GESTURE = 0,
    PINCH_GESTURE = 1,
    POINTER_GESTURE = 2
}
;

/// <summary>
/// The HandSide gives the information of which side of the hand is being detected with respect to the camera.
/// </summary>
public enum HandSide
{
    None = -1,
    Backside = 0,
    Palmside = 1
}
;

/// <summary>
/// Trigger Gestures are a type of Gesture Information retrieved for a given frame when the user perfoms the correct sequence of hand movements that matches to their action.
/// </summary>
public enum ManoGestureTrigger
{
    NO_GESTURE = -1,
    CLICK = 1,
    GRAB_GESTURE = 4,
    DROP = 8,
    PICK = 7,
    SWIPE_LEFT = 1001,
    SWIPE_RIGHT = 1000,
    SWIPE_DOWN = 1003,
    SWIPE_UP = 1002,
    RELEASE_GESTURE = 3
}
;

/// <summary>
/// Similar to Manoclass Continuous Gestures are Gesture Information that is being updated on every frame according to the detection of the hand pose.
/// </summary>
public enum ManoGestureContinuous
{
    NO_GESTURE = -1,
    HOLD_GESTURE = 1,
    OPEN_HAND_GESTURE = 2,
    OPEN_PINCH_GESTURE = 3,
    CLOSED_HAND_GESTURE = 4,
    POINTER_GESTURE = 5,
}
;

/// <summary>
///  Information about the gesture performed by the user.
/// </summary>
public struct GestureInfo
{
    /// ### Example
    /// @code
    /// 
    ///private GestureInfo gesture;
    ///
    ///void Update()
    ///{
    ///    gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
    ///    DetectManoClass(gesture);
    ///}
    ///
    ///// <summary>
    ///// Checks if the current visable hand performs a gesture from pinch family
    ///// if so, then the code will be executed in this case the phone will vibrate.
    ///// </summary>
    ///// <param name="gesture">The current gesture being made</param>
    ///void DetectManoClass(GestureInfo gesture)
    ///{
    ///    if (gesture.mano_class == ManoClass.PINCH_GESTURE_FAMILY)
    ///    {
    ///        // Your code here
    ///        Handheld.Vibrate();
    ///    }
    ///}
    ///
    /// @endcode
    /// 
    /// <summary>
    /// Class or gesture family.
    /// </summary>
    public ManoClass mano_class;


    /// ### Example
    /// @code
    /// 
    ///// select trigger gesture in the Unity Editor.
    ///public ManoGestureContinuous continuousGesture;
    ///private GestureInfo gesture;
    ///
    ///void Update()
    ///{
    ///    gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
    ///    UseContinuousGesture(gesture);
    ///}
    ///
    ///// <summary>
    ///// Method that will run while the selected ManoGestureContinuous is performed.
    ///// </summary>
    ///// <param name="gesture">The current gesture that's being performed</param>
    ///private void UseContinuousGesture(GestureInfo gesture)
    ///{
    ///    if (gesture.mano_gesture_continuous == continuousGesture)
    ///    {
    ///        // Code that will execute while continuous gesture is performed
    ///    }
    ///}
    ///
    ///@endcode
    ///
    /// <summary>
    /// Continuous gestures are those that are mantained throug multiple frames.
    /// </summary>
    public ManoGestureContinuous mano_gesture_continuous;

    /// ### Example
    /// @code
    /// 
    ///// Select the trigger gesture to use in the Unity Editor.
    ///public ManoGestureTrigger triggerGesture;
    ///private GestureInfo gesture;
    ///
    ///void Update()
    ///{
    ///    gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
    ///    UseTriggerGesture(gesture);
    ///}
    ///
    ///// <summary>
    ///// Method that will run once when the selected ManoGestureTrigger is performed.
    ///// </summary>
    ///// <param name="gesture">The current gesture that's being performed</param>
    ///private void UseTriggerGesture(GestureInfo gesture)
    ///{
    ///    if (gesture.mano_gesture_trigger == triggerGesture)
    ///    {
    ///        // Code that will execute when trigger gesture is performed
    ///    }
    ///}
    ///
    ///@endcode
    ///
    /// <summary>
    /// Trigger gestures are those that happen in one frame.
    /// </summary>
    public ManoGestureTrigger mano_gesture_trigger;

    /// ### Example
    /// @code
    /// 
    ///private GestureInfo gesture;
    ///int closedHandState = 13;
    ///
    ///// <summary>
    ///// Runs every frame to print out the current state of the hand to the UI text.
    ///// Open hand/pose = 0, partly closed = 6 and fully closed = 13.
    ///// When no hand is detected the state value is -1.
    ///// </summary>
    ///void Update()
    ///{
    ///    gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
    ///    OpenHandState(gesture);
    ///}
    ///
    ///void OpenHandState(GestureInfo gesture)
    ///{
    ///    if (gesture.state == closedHandState)
    ///    {
    ///        // Your code when the hand/pose is fully closeed
    ///    }
    ///}
    ///
    /// @endcode
    ///
    /// <summary>
    /// State is the information of the pose of the hand depending on each class
    /// The values go from 0 (most open) to 13 (most closed)
    /// </summary>
    public int state;

    /// ### Example
    /// @code
    /// 
    ///private GestureInfo gesture;
    ///
    ///// Update is called once per frame
    ///void Update()
    ///{
    ///    gesture = ManomotionManager.Instance.Hand_infos[0].hand_info.gesture_info;
    ///    DetectHandSide(gesture);
    ///}
    ///
    ///// <summary>
    ///// Checks if the current visible hand has the palm side facing the camera
    ///// if so, then the code will be executed in this case the phone will vibrate.
    ///// </summary>
    ///// <param name="gesture">The current gesture being made</param>
    ///void DetectHandSide(GestureInfo gesture)
    ///{
    ///    if (gesture.hand_side == HandSide.Palmside)
    ///    {
    ///        //Your code here
    ///        Handheld.Vibrate();
    ///    }
    ///}
    ///
    /// @endcode
    /// 
    /// <summary>
    /// Represents which side of the hand is seen by the camera.
    /// </summary>
    public HandSide hand_side;

    /// <summary>
    /// Information if the hand visiable by the camera is right or left hand.
    /// </summary>
    public int is_right;
}