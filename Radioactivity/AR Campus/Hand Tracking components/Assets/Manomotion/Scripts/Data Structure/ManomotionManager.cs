using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using System;

#if UNITY_IOS
using UnityEngine.iOS;
#endif

/// <summary>
/// The ManomotionManager handles the communication with the SDK.
/// </summary>
[AddComponentMenu("ManoMotion/ManoMotion Manager")]
[RequireComponent(typeof(ManoEvents))]
public class ManomotionManager : ManomotionBase
{
    #region Events

    ///Sends information after each frame is processed by the SDK.
    public static Action OnManoMotionFrameProcessed;
    ///Sends information after the license is checked by the SDK.
    public static Action OnManoMotionLicenseInitialized;
    ///Sends information when changing between 2D and 3D joints
    public static Action<int, int> OnSkeleton3dActive;

    #endregion

    #region Singleton
    protected static ManomotionManager instance;
    #endregion

    #region variables
    /// The information about the hand
    protected HandInfoUnity[] hand_infos;
    protected VisualizationInfo visualization_info;
    /// The information about the Session values, the SDK settings
    protected Session manomotion_session;

    /// the width of the images processed
    protected int _width;
    /// the height of the images processed
    protected int _height;
    protected int _fps;
    protected int _processing_time;

    private bool _initialized;
    private float fpsCooldown = 0;
    private int frameCount = 0;
    /// Stores the processing time values
    private List<int> processing_time_list = new List<int>();

    /// Frame pixels
    protected Color32[] framePixelColors;
    /// Frame pixels
    protected Color32[] MRframePixelColors;
    protected ManoLicense _manoLicense;

    protected ManoSettings _manoSettings;
    protected ImageFormat currentImageFormat;

    #endregion

    #region imports

#if UNITY_IOS
	const string library = "__Internal";
#elif UNITY_ANDROID
    const string library = "manomotion";
#else
	const string library = "manomotion";
#endif


    [DllImport(library)]
    private static extern void processFrame(ref HandInfo hand_info0, ref Session manomotion_session);

    [DllImport(library)]
    private static extern void setFrameArray(Color32[] frame);

    [DllImport(library)]
    private static extern void setMRFrameArray(Color32[] frame);

    [DllImport(library)]
    private static extern void setResolution(int width, int height);

    [DllImport(library)]
    private static extern void stop();

    [DllImport(library)]
    private static extern void init(ManoSettings settings, ref ManoLicense mano_license);

    #endregion

    #region init_wrappers

    /// Stops the SDK from processing.
    public void StopProcessing()
    {
#if !UNITY_EDITOR
		stop();
#endif
    }

    /// Sends the resolution values to the SDK.
    protected void SetResolution(int width, int height)
    {
        Debug.Log("Set resolution " + width + "," + height);
#if !UNITY_EDITOR

        setResolution(width, height);
#endif
    }

    /// Gives instruction where frame pixels are stored.
    protected void SetFrameArray(Color32[] pixels)
    {
        //Debug.Log("Called setFrameArray with " + pixels.Length);
#if !UNITY_EDITOR
        setFrameArray(pixels);

#endif
    }

    /// Gives instruction where frame pixels are stored.
    protected void SetMRFrameArray(Color32[] pixels)
    {
        Debug.Log("Called setMRFrameArray with " + pixels.Length);
#if !UNITY_EDITOR
        setMRFrameArray(pixels);

#endif
    }

    #endregion

    #region Propperties
    internal int Processing_time
    {
        get
        {
            return _processing_time;
        }
    }

    internal int Fps
    {
        get
        {
            return _fps;
        }
    }

    internal int Height
    {
        get
        {
            return _height;
        }
    }

    internal int Width
    {
        get
        {
            return _width;
        }
    }

    internal VisualizationInfo Visualization_info
    {
        get
        {
            return visualization_info;
        }
    }

    internal HandInfoUnity[] Hand_infos
    {
        get
        {
            return hand_infos;
        }
    }

    public Session Manomotion_Session
    {
        get
        {
            return manomotion_session;
        }
        set
        {
            manomotion_session = value;
        }
    }

    public static ManomotionManager Instance
    {
        get
        {
            return instance;
        }
    }

    public string LicenseKey
    {
        get
        {
            return _licenseKey;
        }

        set
        {
            _licenseKey = value;
        }
    }

    public ManoLicense Mano_License
    {
        get
        {
            return _manoLicense;
        }
        set
        {
            _manoLicense = value;
        }
    }

    public ManoSettings ManoSettings
    {
        get
        {
            return _manoSettings;
        }
        set
        {
            _manoSettings = value;
        }
    }

    #endregion

    #region Awake/Start

    protected virtual void Awake()
    {
        if (instance == null)
        {
            instance = this;
            ManoUtils.OnOrientationChanged += HandleOrientationChanged;
            InputManagerBaseClass.OnAddonSet += HandleAddOnSet;
            InputManagerPhoneCamera.OnFrameInitialized += HandleManoMotionFrameInitialized;
            InputManagerPhoneCamera.OnFrameUpdated += HandleNewFrame;
            InputManagerPhoneCamera.OnFrameResized += HandleManoMotionFrameResized;
        }
        else
        {
            this.gameObject.SetActive(false);
            Debug.LogWarning("More than 1 Manomotionmanager in scene");
        }
    }

    /// <summary>
    /// Respond to the event of a ManoMotionFrame resized.
    /// </summary>
    /// <param name="newFrame">The new frame to process</param>
    void HandleManoMotionFrameResized(ManoMotionFrame newFrame)
    {
        SetResolutionValues(newFrame.width, newFrame.height);
    }

    /// <summary>
    /// Respond to the event of a ManoMotionFrame being initialized.
    /// </summary>
    /// <param name="newFrame">The new frame to process</param>
    void HandleManoMotionFrameInitialized(ManoMotionFrame newFrame)
    {
        SetResolutionValues(newFrame.width, newFrame.height);
        InstantiateVisualisationInfo();
    }

    /// <summary>
    /// Respond to the event of a ManoMotionFrame being sent for processing.
    /// </summary>
    /// <param name="newFrame">The new frame to process</param>
    void HandleNewFrame(ManoMotionFrame newFrame)
    {
        GetCameraFramePixelColors(newFrame);
        UpdateTexturesWithNewInfo();
    }

    protected void Start()
    {
        SetManoMotionSettings(ImageFormat.BGRA_FORMAT, _licenseKey);
        InstantiateSession();
        InstantiateHandInfos();
        InitiateLibrary();
        SetUnityConditions();
    }

    /// <summary>
    /// Fills in the information needed in the manosettings Struct in order to initialize ManoMotion Tech.
    /// </summary>
    /// <param name="newPlatform">Requires the platform the app is going to be used in.</param>
    /// <param name="newImageFormat">Requires the image format that ManoMotion tech is going to process</param>
    /// <param name="newLicenseKey">Requires a Serial Key that is valid for ManoMotion tech and it linked with the current boundle ID used in the application.</param>
    public void SetManoMotionSettings(ImageFormat newImageFormat, string newLicenseKey)
    {
#if UNITY_IOS
		_manoSettings.platform = Platform.UNITY_IOS;
#endif

#if UNITY_ANDROID
        _manoSettings.platform = Platform.UNITY_ANDROID;
#endif
        _manoSettings.image_format = newImageFormat;
        _manoSettings.serial_key = newLicenseKey;
    }

    /// <summary>
    /// Sets the resolution values used throughout the initialization methods of the arrays and textures.
    /// </summary>
    /// <param name="width">Requires a width value.</param>
    /// <param name="height">Requires a height value.</param>
    protected override void SetResolutionValues(int width, int height)
    {
        _width = width;
        _height = height;
        SetResolution(width, height);

        visualization_info.rgb_image = new Texture2D(_width, _height);
        framePixelColors = new Color32[_width * height];
        SetFrameArray(framePixelColors);

        visualization_info.occlussion_rgb = new Texture2D(_width, _height);
        MRframePixelColors = new Color32[_width * height];
        SetMRFrameArray(MRframePixelColors);
    }

    /// <summary>
    /// Instantiates the SDK Settings information.
    /// </summary>
    protected override void InstantiateSession()
    {
        manomotion_session = new Session();
        manomotion_session.orientation = ManoUtils.Instance.currentOrientation;
        manomotion_session.add_on = AddOn.ARFoundation;
        manomotion_session.smoothing_controller = 0.15f;
        manomotion_session.gesture_smoothing_controller = 0.65f;
        manomotion_session.enabled_features.gestures = 0;
        manomotion_session.enabled_features.skeleton_3d = 0;
        manomotion_session.enabled_features.fast_mode = 0;
        manomotion_session.enabled_features.wrist_info = 0;
        manomotion_session.enabled_features.finger_info = 0;
        manomotion_session.enabled_features.contour = 0;
    }

    /// <summary>
    /// Gets the correct manomotion_session addon from the inputManager
    /// </summary>
    /// <param name="addon">The addon used with the inputManager</param>
    private void HandleAddOnSet(AddOn addon)
    {
        manomotion_session.add_on = addon;
    }

    /// <summary>
    /// Initializes the values for the hand information.
    /// </summary>
    private void InstantiateHandInfos()
    {
        hand_infos = new HandInfoUnity[1];
        for (int i = 0; i < hand_infos.Length; i++)
        {
            hand_infos[i].hand_info = new HandInfo();
            hand_infos[i].hand_info.gesture_info = new GestureInfo();
            hand_infos[i].hand_info.gesture_info.mano_class = ManoClass.NO_HAND;
            hand_infos[i].hand_info.gesture_info.hand_side = HandSide.None;
            hand_infos[i].hand_info.tracking_info = new TrackingInfo();
            hand_infos[i].hand_info.tracking_info.bounding_box = new BoundingBox();
            hand_infos[i].hand_info.tracking_info.bounding_box.top_left = new Vector3();
        }
    }

    /// <summary>
    /// Instantiates the visualisation info.
    /// </summary>
    private void InstantiateVisualisationInfo()
    {
        visualization_info = new VisualizationInfo();
        visualization_info.rgb_image = new Texture2D(_width, _height);
        visualization_info.occlussion_rgb = new Texture2D(_width, _height);
    }

    /// <summary>
    /// Initiates the library.
    /// </summary>
    protected void InitiateLibrary()
    {
        _manoLicense = new ManoLicense();
        string originalKey = _licenseKey;
        int maxSerialKeyCharacters = 23;
        List<string> allCharacters = new List<string>();

        if (LicenseKey.Length > maxSerialKeyCharacters)
        {
            string removeExtraCharactersAndSpaceString = _licenseKey.Substring(0, maxSerialKeyCharacters);
            LicenseKey = removeExtraCharactersAndSpaceString;
        }

        Init(LicenseKey);
    }

    /// <summary>
    /// Sets the Application to not go to sleep mode as well as the requested framerate.
    /// </summary>
    protected override void SetUnityConditions()
    {
        Application.targetFrameRate = 60;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    #endregion

    #region update_methods

    protected void Update()
    {
        if (_initialized)
        {
            CalculateFPSAndProcessingTime();
        }
    }

    /// <summary>
    /// Updates the orientation information as captured from the device to the Session
    /// </summary>
    protected void HandleOrientationChanged()
    {
        Debug.Log("orientation changed");
        manomotion_session.orientation = ManoUtils.Instance.currentOrientation;
    }

    /// <summary>
    /// Updates the RGB Frame of Visualization Info with the pixels captured from the camera.
    /// </summary>
    protected override void UpdateTexturesWithNewInfo()
    {
        if (framePixelColors.Length > 255)
        {
            if (visualization_info.rgb_image.width * visualization_info.rgb_image.height == framePixelColors.Length)
            {
                visualization_info.rgb_image.SetPixels32(framePixelColors);
                visualization_info.rgb_image.Apply();
                ProcessManomotion();

                if (OnManoMotionFrameProcessed != null)
                {
                    OnManoMotionFrameProcessed();
                }
            }
            else
            {
                Debug.LogErrorFormat("UpdateTexturesWithNewInfo error rgb_image width {0} height{1} framepixelcolors length {2}", visualization_info.rgb_image.width, visualization_info.rgb_image.height, framePixelColors.Length);
            }

            if (visualization_info.occlussion_rgb.width * visualization_info.occlussion_rgb.height == MRframePixelColors.Length)
            {
                visualization_info.occlussion_rgb.SetPixels32(MRframePixelColors);
                visualization_info.occlussion_rgb.Apply();
            }
            else
            {
                Debug.LogErrorFormat("UpdateTexturesWithNewInfo error MRFrame width {0} height{1} MRframepixelcolors length {2}", visualization_info.rgb_image.width, visualization_info.rgb_image.height, framePixelColors.Length);
            }
        }
        else
        {
            Debug.LogError("Frame Pixel colors error");
        }
    }

    /// <summary>
    /// Gets the camera frame pixel colors.
    /// </summary>
    protected void GetCameraFramePixelColors(ManoMotionFrame newFrame)
    {
        if (framePixelColors.Length != newFrame.pixels.Length ||
            visualization_info.rgb_image.width != newFrame.texture.width ||
            visualization_info.rgb_image.height != newFrame.texture.height)
        {
            Debug.LogError("GetCameraFramePixelColors lengths were not matching, called resize");
            SetResolutionValues(newFrame.width, newFrame.height);
        }
        try
        {
            framePixelColors = newFrame.pixels;
        }
        catch (System.Exception ex)
        {
            Debug.LogError(ex);
        }
    }

    /// <summary>
    /// Evaluates the dimension of the pixel color array and if it matches the dimensions proceeds with Processing the Frame.
    /// And adds the processing time to the processing_time_list.
    /// </summary>
    protected override void ProcessManomotion()
    {
        if (framePixelColors.Length == Width * Height)
        {
            SetFrameArray(framePixelColors);
            long start = System.DateTime.UtcNow.Millisecond + System.DateTime.UtcNow.Second * 1000 + System.DateTime.UtcNow.Minute * 60000;
            ProcessFrame();
            long end = System.DateTime.UtcNow.Millisecond + System.DateTime.UtcNow.Second * 1000 + System.DateTime.UtcNow.Minute * 60000;
            if (start < end)
                processing_time_list.Add((int)(end - start));
        }
        else
        {
            Debug.Log("camera size doesent match: " + framePixelColors.Length + " != " + Width * Height);
        }
    }

    /// <summary>
    /// Calculates the Frames Per Second in the application and retrieves the estimated Processing time.
    /// </summary>
    protected override void CalculateFPSAndProcessingTime()
    {
        fpsCooldown += Time.deltaTime;
        frameCount++;
        if (fpsCooldown >= 1)
        {
            _fps = frameCount;
            frameCount = 0;
            fpsCooldown -= 1;
            CalculateProcessingTime();
        }
    }

    /// <summary>
    /// Calculates the elapses time needed for processing the frame.
    /// </summary>
    protected void CalculateProcessingTime()
    {
        if (processing_time_list.Count > 0)
        {
            int sum = 0;
            for (int i = 0; i < processing_time_list.Count; i++)
            {
                sum += processing_time_list[i];
            }
            sum /= processing_time_list.Count;
            _processing_time = sum;
            processing_time_list.Clear();
        }
    }

    /// <summary>
    /// Sets the ManoMotion tracking smoothing value throught the gizmo slider, the bigger the value the stronger the smoothing.
    /// </summary>
    /// <param name="slider">Slider.</param>
    public void SetManoMotionSmoothingValue(Slider slider)
    {
        manomotion_session.smoothing_controller = slider.value;
    }

    /// <summary>
    /// Lets the SDK know if it should calculate the Skeleton in 3D or 2D.
    /// And gives information to SkeletonManager which skeleton model to display.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldCalculateSkeleton3D(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.skeleton_3d = 1;

            if (OnSkeleton3dActive != null)
            {
                OnSkeleton3dActive(1, 0);
            }
        }
        else
        {
            manomotion_session.enabled_features.skeleton_3d = 0;

            if (OnSkeleton3dActive != null)
            {
                OnSkeleton3dActive(0, 1);
            }
        }
    }

    /// <summary>
    /// Lets the SDK know that it needs to calculate the Gestures.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldCalculateGestures(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.gestures = 1;
        }
        else
        {
            manomotion_session.enabled_features.gestures = 0;
        }
    }

    /// <summary>
    /// Lets the SDK know if it should run fast mode or not.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldRunFastMode(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.fast_mode = 1;
        }
        else
        {
            manomotion_session.enabled_features.fast_mode = 0;
        }
    }

    /// <summary>
    /// Lets the SDK know if it should calculate wrist information.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldRunWristInfo(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.wrist_info = 1;
        }
        else
        {
            manomotion_session.enabled_features.wrist_info = 0;
        }
    }

    /// <summary>
    /// Lets the SDK know if it should calculate finger information.
    /// 4 will run the finger_info for the ring finger, 0 is off.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldRunFingerInfo(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.finger_info = 4;
        }
        else
        {
            manomotion_session.enabled_features.finger_info = 0;
        }
    }

    private int minIndex = 0;
    private int maxIndex = 5;

    /// <summary>
    /// Toggle wich finger do use for the finger information.
    /// 0 = off
    /// 1 = Thumb
    /// 2 = Index
    /// 3 = Middle
    /// 4 = Ring
    /// 5 = Pinky
    /// </summary>
    /// <param name="index">int between 0 and 5, 0 is off and 1-5 is the different fingers</param>
    public void ToggleFingerInfoFinger(int index)
    {
        if (index <= maxIndex && index >= minIndex)
        {
            manomotion_session.enabled_features.finger_info = index;
        }
        else
        {
            Debug.Log("index needs to between 0 and 5, current index = " + index);
        }
    }

    /// <summary>
    /// Lets the SDK know if it should calculate hand contour.
    /// </summary>
    /// <param name="condition">run or not</param>
    public void ShouldRunContour(bool condition)
    {
        if (condition)
        {
            manomotion_session.enabled_features.contour = 2;
        }
        else
        {
            manomotion_session.enabled_features.contour = 0;
        }
    }

    #endregion

    #region update_wrappers

    /// <summary>
    /// Wrapper method that calls the ManoMotion core tech to process the frame in order to perform hand tracking and gesture analysis
    /// </summary>
    protected void ProcessFrame()
    {
#if !UNITY_EDITOR
		processFrame(ref hand_infos[0].hand_info, ref manomotion_session);
#else

#endif

    }

    #endregion

    protected override void Init(string serial_key)
    {
#if !UNITY_EDITOR
		//_manoLicense = 
        //ManoLicense test_license= new ManoLicense();
        init(_manoSettings,ref _manoLicense);
        //_manoLicense.days_left = test_license.days_left;
		// init(_manoSettings);
		_initialized = true;
#else
        Debug.LogError("Dont run in editor, SDK needs to be deployed to phone");
        Debug.LogWarning("Dont run in editor, SDK needs to be deployed to phone");
#endif
        if (OnManoMotionLicenseInitialized != null)
        {
            OnManoMotionLicenseInitialized();
        }
    }

}