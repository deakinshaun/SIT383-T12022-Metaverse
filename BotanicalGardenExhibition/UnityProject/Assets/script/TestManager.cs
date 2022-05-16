using System.Timers;
using UnityEngine;
using Vuforia;

public class TestManager : MonoBehaviour
{
    #region PUBLIC_MEMBERS
    public static bool GroundPlaneHitReceived { get; private set; }
    #endregion // PUBLIC_MEMBERS


    #region PRIVATE_MEMBERS
    [SerializeField] PlaneFinderBehaviour planeFinder = null;

    [Header("Placement Augmentations（Ground Plane Stage 下的子物体）")]
    [SerializeField] GameObject placementAugmentation = null;

    const string UnsupportedDeviceTitle = "Unsupported Device";
    const string UnsupportedDeviceBody =
        "This device has failed to start the Positional Device Tracker. " +
        "Please check the list of supported Ground Plane devices on our site: " +
        "\n\nhttps://library.vuforia.com/articles/Solution/ground-plane-supported-devices.html";

    StateManager stateManager;
    SmartTerrain smartTerrain;
    PositionalDeviceTracker positionalDeviceTracker;
    ContentPositioningBehaviour contentPositioningBehaviour;
    AnchorBehaviour placementAnchor;
    int automaticHitTestFrameCount;
    static TrackableBehaviour.Status StatusCached = TrackableBehaviour.Status.NO_POSE;
    static TrackableBehaviour.StatusInfo StatusInfoCached = TrackableBehaviour.StatusInfo.UNKNOWN;

    Timer timer;
    bool timerFinished;
    #endregion // PRIVATE_MEMBERS


    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        VuforiaARController.Instance.RegisterOnPauseCallback(OnVuforiaPaused);
        DeviceTrackerARController.Instance.RegisterTrackerStartedCallback(OnTrackerStarted);
        DeviceTrackerARController.Instance.RegisterDevicePoseStatusChangedCallback(OnDevicePoseStatusChanged);

        this.planeFinder.HitTestMode = HitTestMode.AUTOMATIC;


        this.placementAnchor = this.placementAugmentation.GetComponentInParent<AnchorBehaviour>();

      

        // Setup a timer to restart the DeviceTracker if tracking does not receive
        // status change from StatusInfo.RELOCALIZATION after 10 seconds.

        //如果跟踪在10秒后没有从StatusInfo.RELOCALIZATION接收状态更改，请设置计时器以重新启动DeviceTracker。
        this.timer = new Timer(10000);
        this.timer.Elapsed += TimerFinished;
        this.timer.AutoReset = false;
    }

    void Update()
    {
        // The timer runs on a separate thread and we need to ResetTrackers on the main thread.
        if (this.timerFinished)
        {
            ResetTrackers();
            this.timerFinished = false;
        }
    }

    void LateUpdate()
    {
        // The AutomaticHitTestFrameCount is assigned the Time.frameCount in the
        // HandleAutomaticHitTest() callback method. When the LateUpdate() method
        // is then called later in the same frame, it sets GroundPlaneHitReceived
        // to true if the frame number matches. For any code that needs to check
        // the current frame value of GroundPlaneHitReceived, it should do so
        // in a LateUpdate() method.
        GroundPlaneHitReceived = (this.automaticHitTestFrameCount == Time.frameCount);

        // Surface Indicator visibility conditions rely upon GroundPlaneHitReceived,
        // so we will move this method into LateUpdate() to ensure that it is called
        // after GroundPlaneHitReceived has been updated in Update().
        //  SetSurfaceIndicatorVisible(SurfaceIndicatorVisibilityConditionsMet);
    }

    void OnDestroy()
    {
        Debug.Log("OnDestroy() called.");

        VuforiaARController.Instance.UnregisterVuforiaStartedCallback(OnVuforiaStarted);
        VuforiaARController.Instance.UnregisterOnPauseCallback(OnVuforiaPaused);
        DeviceTrackerARController.Instance.UnregisterTrackerStartedCallback(OnTrackerStarted);
        DeviceTrackerARController.Instance.UnregisterDevicePoseStatusChangedCallback(OnDevicePoseStatusChanged);
    }


    /// <summary>
    /// This method resets the augmentations and scene elements.
    /// It is called by the UI Reset Button and also by OnVuforiaPaused() callback.
    /// 
    /// 此方法重置增强和场景元素。
    /// 它由UI Reset按钮调用，也由OnVuforiaPaused（）回调调用。
    /// </summary>
    public void ResetScene()
    {
        Debug.Log("ResetScene() called.");

        // reset augmentations

     

    }

    /// <summary>
    /// This method stops and restarts the PositionalDeviceTracker.
    /// It is called by the UI Reset Button and when RELOCALIZATION status has
    /// not changed for 10 seconds.
    /// 
    /// 此方法停止并重新启动PositionalDeviceTracker。
    ///它由UI重置按钮调用，并且RELOCALIZATION状态在10秒内没有改变。
    /// </summary>
    public void ResetTrackers()
    {
        Debug.Log("ResetTrackers() called.");

        this.smartTerrain = TrackerManager.Instance.GetTracker<SmartTerrain>();
        this.positionalDeviceTracker = TrackerManager.Instance.GetTracker<PositionalDeviceTracker>();

        // Stop and restart trackers
        this.smartTerrain.Stop(); // stop SmartTerrain tracker before PositionalDeviceTracker
        this.positionalDeviceTracker.Reset();
        this.smartTerrain.Start(); // start SmartTerrain tracker after PositionalDeviceTracker
    }

    #endregion // PUBLIC_BUTTON_METHODS


    #region PRIVATE_METHODS

    /// <summary>
    /// This is a C# delegate method for the Timer:
    /// ElapsedEventHandler(object sender, ElapsedEventArgs e)
    /// </summary>
    /// <param name="source">System.Object</param>
    /// <param name="e">ElapsedEventArgs</param>
    void TimerFinished(System.Object source, ElapsedEventArgs e)
    {
        this.timerFinished = true;
    }
    #endregion // PRIVATE_METHODS


    #region VUFORIA_CALLBACKS

    void OnVuforiaStarted()
    {
        Debug.Log("OnVuforiaStarted() called.");

        stateManager = TrackerManager.Instance.GetStateManager();

        // Check trackers to see if started and start if necessary
        this.positionalDeviceTracker = TrackerManager.Instance.GetTracker<PositionalDeviceTracker>();
        this.smartTerrain = TrackerManager.Instance.GetTracker<SmartTerrain>();

        if (this.positionalDeviceTracker != null && this.smartTerrain != null)
        {
            if (!this.positionalDeviceTracker.IsActive)
                this.positionalDeviceTracker.Start();
            if (this.positionalDeviceTracker.IsActive && !this.smartTerrain.IsActive)
                this.smartTerrain.Start();
        }
        else
        {
            if (this.positionalDeviceTracker == null)
                Debug.Log("PositionalDeviceTracker returned null. GroundPlane not supported on this device.");
            if (this.smartTerrain == null)
                Debug.Log("SmartTerrain returned null. GroundPlane not supported on this device.");

         
        }
    }

    void OnVuforiaPaused(bool paused)
    {
        Debug.Log("OnVuforiaPaused(" + paused.ToString() + ") called.");

        if (paused)
            ResetScene();
    }

    #endregion // VUFORIA_CALLBACKS


    #region DEVICE_TRACKER_CALLBACKS

    void OnTrackerStarted()
    {
        Debug.Log("PlaneManager.OnTrackerStarted() called.");

        this.positionalDeviceTracker = TrackerManager.Instance.GetTracker<PositionalDeviceTracker>();
        this.smartTerrain = TrackerManager.Instance.GetTracker<SmartTerrain>();

        if (this.positionalDeviceTracker != null && this.smartTerrain != null)
        {
            if (!this.positionalDeviceTracker.IsActive)
                this.positionalDeviceTracker.Start();

            if (!this.smartTerrain.IsActive)
                this.smartTerrain.Start();

            Debug.Log("PositionalDeviceTracker is Active?: " + this.positionalDeviceTracker.IsActive +
                      "\nSmartTerrain Tracker is Active?: " + this.smartTerrain.IsActive);
        }
    }

    void OnDevicePoseStatusChanged(TrackableBehaviour.Status status, TrackableBehaviour.StatusInfo statusInfo)
    {
        Debug.Log("PlaneManager.OnDevicePoseStatusChanged(" + status + ", " + statusInfo + ")");

        StatusCached = status;
        StatusInfoCached = statusInfo;

        // If the timer is running and the status is no longer Relocalizing, then stop the timer
        if (statusInfo != TrackableBehaviour.StatusInfo.RELOCALIZING && this.timer.Enabled)
        {
            this.timer.Stop();
        }

        switch (statusInfo)
        {
            case TrackableBehaviour.StatusInfo.NORMAL:
                break;
            case TrackableBehaviour.StatusInfo.UNKNOWN:
                break;
            case TrackableBehaviour.StatusInfo.INITIALIZING:
                break;
            case TrackableBehaviour.StatusInfo.EXCESSIVE_MOTION:
                break;
            case TrackableBehaviour.StatusInfo.INSUFFICIENT_FEATURES:
                break;
            case TrackableBehaviour.StatusInfo.INSUFFICIENT_LIGHT:
                break;
            case TrackableBehaviour.StatusInfo.RELOCALIZING:
                // Start a 10 second timer to Reset Device Tracker
                if (!this.timer.Enabled)
                {
                    this.timer.Start();
                }
                break;
            default:
                break;
        }
    }

    #endregion // DEVICE_TRACKER_CALLBACK_METHODS
}