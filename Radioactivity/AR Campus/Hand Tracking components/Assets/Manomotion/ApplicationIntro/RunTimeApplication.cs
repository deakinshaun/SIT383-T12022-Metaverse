using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using ManoMotion.UI.Buttons;
using ManoMotion.HowToUse;

namespace ManoMotion.RunTime
{
    public class RunTimeApplication : MonoBehaviour
    {
        private List<GameObject> runTimeObjects = new List<GameObject>();
        private List<UIIconBehavior.IconFunctionality> defaultFunctionality = new List<UIIconBehavior.IconFunctionality>();

        //Used to store the current values about wich features to show after the instructions.
        private bool showHandStates;
        private bool showManoClass;
        private bool showHandSide;
        private bool showContinuousGestures;
        private bool showGestureAnalysis;
        private bool showWarnings;
        private bool showPickTriggerGesture;
        private bool showDropTriggerGesture;
        private bool showSwipeHorizontalTriggerGesture;
        private bool showSwipeVerticalTriggerGesture;
        private bool showClickTriggerGesture;
        private bool showGrabTriggerGesture;
        private bool showReleaseTriggerGesture;
        private bool showSmoothingSlider;
        private bool showDepthEstimation;
        private bool showSkeleton3d;
        private bool showGestures;
        private bool runFastMode;
        private bool showFingerInfo;
        private bool showWristInfo;
        private bool showContour;
        private bool showGrabRelease;
        private bool showPickDrop;
        private bool showSwipes;

        [SerializeField]
        private ManoVisualization manoVisualization;
        [SerializeField]
        private GizmoManager gizmoManager;
        [SerializeField]
        private GameObject manoMotionCanvas;
        [SerializeField]
        private GameObject menuToggleButtonObject;
        [SerializeField]
        private GameObject featuresMenu;
        [SerializeField]
        private ManomotionManager manomotionManager;

        public void InitializeRuntimeComponents()
        {
            if (!manoVisualization)
            {
                try
                {
                    manoVisualization = GameObject.Find("ManoVisualization").GetComponent<ManoVisualization>();
                }
                catch (Exception ex)
                {
                    Debug.LogError("Cannot find the ManoVisualization");
                }
            }

            if (!gizmoManager)
            {
                try
                {
                    gizmoManager = GameObject.Find("GizmoCanvas").GetComponent<GizmoManager>();
                }
                catch (Exception ex)
                {
                    Debug.LogError("Cannot find the GizmoManager");
                }
            }

            if (!manoMotionCanvas)
            {
                try
                {
                    manoMotionCanvas = GameObject.Find("ManoMotionCanvas");
                }
                catch (Exception ex)
                {
                    Debug.Log("Cannot find the ManoMotion Canvas");
                }
            }

            if (!menuToggleButtonObject)
            {
                try
                {
                    menuToggleButtonObject = GameObject.Find("ToggleMenu");
                }
                catch (Exception ex)
                {
                    Debug.Log("Cannot find the Menu Toggle Button");
                }
            }

            if (!featuresMenu)
            {
                try
                {
                    featuresMenu = GameObject.Find("MainFeaturesMenu");
                }
                catch (Exception ex)
                {
                    Debug.Log("Cannot find the Main Features Object");
                }
            }

            if (!manomotionManager)
            {
                try
                {
                    manomotionManager = GameObject.Find("ManomotionManager").GetComponent<ManomotionManager>();
                }
                catch (Exception ex)
                {
                    Debug.Log("Cannot find the ManoMotionManager");
                }
            }

            runTimeObjects.Add(manoVisualization.gameObject);
            runTimeObjects.Add(gizmoManager.gameObject);
            runTimeObjects.Add(manoMotionCanvas);
            runTimeObjects.Add(menuToggleButtonObject);
            runTimeObjects.Add(featuresMenu);

            SaveDefalutFeaturesToDisplay();

            if (CategoryManager.Instance)
            {
                CategoryManager.Instance.SetupMenu(defaultFunctionality);
            }
            else
            {
                Debug.Log("Cant find Category Manager");
            }

            HideApplicationComponents();
        }

        /// <summary>
        /// Hides the application components.
        /// </summary>
        public void HideApplicationComponents()
        {
            ShouldEnableDisplayScripts(true);
            menuToggleButtonObject.SetActive(false);
            menuToggleButtonObject.transform.GetChild(0).GetComponent<MenuButton>().CloseMenu();
            DisableManoMotionGizmos();
        }

        /// <summary>
        /// Sets the menu icon visibility.
        /// </summary>
        public void SetMenuIconVisibility()
        {
            if (CategoryManager.Instance)
            {
                CategoryManager.Instance.SetupMenu(defaultFunctionality);
                Debug.Log("I executed the category manager");
            }
            else
            {
                Debug.Log("Cant find Category Manager");
            }
        }

        /// <summary>
        /// Sets the Grab Release Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowGrabRelease(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowGrabRelease = condition;
        }


        /// <summary>
        /// Sets the Pick and Drop Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowPickDrop(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowPickDrop = condition;
        }


        /// <summary>
        /// Sets the Swipes Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowSwipes(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowSwipes = condition;
        }


        /// <summary>
        /// Sets the Wrist Information Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowWristInfo(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowWristInfo = condition;
            manomotionManager.ShouldRunWristInfo(condition);
        }

        /// <summary>
        /// Sets the Finger Information Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowFingerInfo(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowFingerInfo = condition;
            manomotionManager.ShouldRunFingerInfo(condition);
        }

        /// <summary>
        /// Sets the Contour Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowContour(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowContour = condition;
            manomotionManager.ShouldRunContour(condition);
        }

        /// <summary>
        /// Sets the Pick Trigger Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowPick(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowPickTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Drop Trigger Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowDrop(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowDropTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Swipe Vertical Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowSwipeVertical(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowSwipeVerticalTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Swipe Horizontal Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowSwipeHorizontal(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowSwipeHorizontalTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Click Trigger Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowClick(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowClickTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Grab Trigger Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowGrab(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowGrabTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Release Trigger Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowRelease(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowReleaseTriggerGesture = condition;
        }

        /// <summary>
        /// Sets the Gesture Analysis Visualization condition.
        /// </summary>
        /// <param name="condition"></param>
        public void ShouldShowGestureAnalysis(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowGestureAnalysis = condition;
        }

        /// <summary>
        /// Sets the Show hand side Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowHandSide(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowHandSide = condition;
        }

        /// <summary>
        /// Sets the Show Manoclass Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowManoclass(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowManoClass = condition;
        }

        /// <summary>
        /// Sets the Show Continuous Gesture Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowContinousGesture(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowContinuousGestures = condition;
        }

        /// <summary>
        /// Sets the Show Warnings Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowWarnings(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowWarnings = condition;
        }

        /// <summary>
        /// Sets the Show hand states Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowHandStates(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowHandStates = condition;
        }

        /// <summary>
        /// Sets the Show smoothing slider Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowSmoothingSlider(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowSmoothingSlider = condition;
        }

        /// <summary>
        /// Sets the Show depth estimation Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowDepth(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            gizmoManager.ShowDepthEstimation = condition;
        }

        /// <summary>
        /// Sets the Show skeleton 3d Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowSkeleton3D(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }

            manomotionManager.ShouldCalculateSkeleton3D(condition);
            gizmoManager.ShowSkeleton3d = condition;
        }

        /// <summary>
        /// Sets the Show Gestures Visualization condition.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void ShouldShowGestures(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            manomotionManager.ShouldCalculateGestures(condition);
            gizmoManager.ShowGestures = condition;
        }

        /// <summary>
        /// Decide if to run Fast mode or not.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> condition.</param>
        public void RunFastMode(bool condition)
        {
            if (!gizmoManager.enabled)
            {
                gizmoManager.enabled = true;
            }
            manomotionManager.ShouldRunFastMode(condition);
            gizmoManager.Fastmode = condition;
        }

        /// <summary>
        /// Sets the visibility of the ManoMotion components and the Terms and conditions canvas based on the criterion of the boolean.
        /// </summary>
        /// <param name="condition">If set to <c>true</c> Boolean criterion of if the user has seen the instructions.</param>
        public void ShouldEnableDisplayScripts(bool condition)
        {
            for (int i = 0; i < runTimeObjects.Count; i++)
            {
                runTimeObjects[i].SetActive(condition);
            }
        }

        /// <summary>
        /// Starts the main application with default settings.
        /// </summary>
        public void StartMainApplicationWithDefaultSettings()
        {
            //Go through the list instead to see what should be on and what should be off
            manoMotionCanvas.SetActive(true);
            menuToggleButtonObject.SetActive(true);
            menuToggleButtonObject.transform.GetChild(0).GetComponent<MenuButton>().CloseMenuAndShowManoMotionCanvas();

            SetMenuIconVisibility();
            SetManoMotionDefaultFeaturesToDisplay();
        }

        /// <summary>
        /// Disables the mano motion gizmos.
        /// </summary>
        private void DisableManoMotionGizmos()
        {
            ShouldShowGestureAnalysis(false);
            ShouldShowHandSide(false);
            ShouldShowWarnings(false);
            ShouldShowManoclass(false);
            ShouldShowHandStates(false);
            ShouldShowContinousGesture(false);
            ShouldShowSmoothingSlider(false);
            ShouldShowDepth(false);
            ShouldShowSkeleton3D(false);
            ShouldShowGestures(true);
            ShouldShowContour(false);
            ShouldShowFingerInfo(false);
            ShouldShowWristInfo(false);
            ShouldShowGrabRelease(false);
            ShouldShowPickDrop(false);
            ShouldShowSwipes(false);
        }

        /// <summary>
        /// Saves the ManoMotion features to display.
        /// </summary>
        public void SaveDefalutFeaturesToDisplay()
        {
            showGestureAnalysis = gizmoManager.ShowGestureAnalysis;
            showHandStates = gizmoManager.ShowHandStates;
            showManoClass = gizmoManager.ShowManoClass;
            showHandSide = gizmoManager.ShowHandSide;
            showContinuousGestures = gizmoManager.ShowContinuousGestures;
            showWarnings = gizmoManager.ShowWarnings;
            showSmoothingSlider = gizmoManager.ShowSmoothingSlider;
            showDepthEstimation = gizmoManager.ShowDepthEstimation;
            showPickTriggerGesture = gizmoManager.ShowPickTriggerGesture;
            showDropTriggerGesture = gizmoManager.ShowDropTriggerGesture;
            showClickTriggerGesture = gizmoManager.ShowClickTriggerGesture;
            showSwipeVerticalTriggerGesture = gizmoManager.ShowSwipeVerticalTriggerGesture;
            showSwipeHorizontalTriggerGesture = gizmoManager.ShowSwipeHorizontalTriggerGesture;
            showGrabTriggerGesture = gizmoManager.ShowGrabTriggerGesture;         
            showReleaseTriggerGesture = gizmoManager.ShowReleaseTriggerGesture;
            showSkeleton3d = gizmoManager.ShowSkeleton3d;
            showGestures = gizmoManager.ShowGestures;
            runFastMode = gizmoManager.Fastmode;
            showWristInfo = gizmoManager.ShowWristInfo;
            showFingerInfo = gizmoManager.ShowFingerInfo;
            showContour = gizmoManager.ShowContour;
            showGrabRelease = gizmoManager.ShowGrabRelease;
            showPickDrop = gizmoManager.ShowPickDrop;
            showSwipes = gizmoManager.ShowSwipes;

            defaultFunctionality.Clear();

            if (showGestureAnalysis)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.GestureAnalysis);
            }
            if (showHandStates)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.States);
            }
            if (showManoClass)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.ManoClass);
            }
            if (showHandSide)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.HandSide);
            }
            if (showContinuousGestures)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Continuous);
            }
            if (showWarnings)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Warnings);
            }
            if (showSmoothingSlider)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Smoothing);
            }
            if (showDepthEstimation)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Depth);
            }
            if (showPickTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerPick);
            }
            if (showDropTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerDrop);
            }
            if (showClickTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerClick);
            }
            if (showSwipeHorizontalTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerSwipeHorizontal);
            }
            if (showSwipeVerticalTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerSwipeVertical);
            }
            if (showGrabTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerGrab);
            }
            if (showReleaseTriggerGesture)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerRelease);
            }
            if (showSkeleton3d)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Skeleton3d);
            }
            if (showGestures)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Gestures);
            }
            if (runFastMode)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.FastMode);
            }
            if (showWristInfo)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.WristInfo);
            }
            if (showFingerInfo)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.FingerInfo);
            }
            if (showContour)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Contour);
            }
            if (showGrabRelease)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.GrabRelease);
            }
            if (showPickDrop)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.PickDrop);
            }
            if (showSwipes)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Swipes);
            }
        }

        /// <summary>
        /// Sets the mano motion features to display.
        /// </summary>
        private void SetManoMotionDefaultFeaturesToDisplay()
        {
            ShouldShowGestureAnalysis(showGestureAnalysis);
            ShouldShowHandSide(showHandSide);
            ShouldShowWarnings(showWarnings);
            ShouldShowManoclass(showManoClass);
            ShouldShowHandStates(showHandStates);
            ShouldShowContinousGesture(showContinuousGestures);
            ShouldShowSmoothingSlider(showSmoothingSlider);
            ShouldShowDepth(showDepthEstimation);
            ShouldShowSkeleton3D(showSkeleton3d);
            ShouldShowGestures(showGestures);
            RunFastMode(runFastMode);
            ShouldShowWristInfo(showWristInfo);
            ShouldShowFingerInfo(showFingerInfo);
            ShouldShowContour(showContour);
            EnableAllTriggers();
        }

        /// <summary>
        /// Enables all triggers.
        /// </summary>
        void EnableAllTriggers()
        {
            ShouldShowPickDrop(showPickDrop);
            ShouldShowGrabRelease(showGrabRelease);
            ShouldShowSwipes(showSwipes);
            ShouldShowClick(showClickTriggerGesture);
        }

        /// <summary>
        /// Gets the default list of features.
        /// </summary>
        /// <returns>The default list of features.</returns>
        public List<UIIconBehavior.IconFunctionality> GetDefaultListOfFeatures()
        {
            if (defaultFunctionality.Count == 0)
            {
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.Background);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerDrop);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerPick);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerClick);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerGrab);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerRelease);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerSwipeHorizontal);
                defaultFunctionality.Add(UIIconBehavior.IconFunctionality.TriggerSwipeVertical);
            }
            return defaultFunctionality;
        }

        /// <summary>
        /// Disables all triggers from displaying in the screen.
        /// </summary>
        public void DisableAllTriggers()
        {
            ShouldShowGrabRelease(false);
            ShouldShowPickDrop(false);
            ShouldShowSwipes(false);
            ShouldShowClick(false);
        }

        /// <summary>
        /// Disables all trigers except.
        /// </summary>
        /// <param name="trigger">Trigger.</param>
        public void DisableAllTrigersExcept(ManoGestureTrigger trigger)
        {
            DisableAllTriggers();

            switch (trigger)
            {
                case ManoGestureTrigger.CLICK:
                    ShouldShowClick(true);
                    break;
                case ManoGestureTrigger.GRAB_GESTURE:
                    ShouldShowGrab(true);
                    break;
                case ManoGestureTrigger.RELEASE_GESTURE:
                    ShouldShowRelease(true);
                    break;
                case ManoGestureTrigger.PICK:
                    ShouldShowPick(true);
                    break;
                case ManoGestureTrigger.DROP:
                    ShouldShowDrop(true);
                    break;
                case ManoGestureTrigger.SWIPE_DOWN:
                    ShouldShowSwipeVertical(true);
                    break;
                case ManoGestureTrigger.SWIPE_UP:
                    ShouldShowSwipeVertical(true);
                    break;
                case ManoGestureTrigger.SWIPE_LEFT:
                    ShouldShowSwipeHorizontal(true);
                    break;
                case ManoGestureTrigger.SWIPE_RIGHT:
                    ShouldShowSwipeHorizontal(true);
                    break;
            }
        }
    }
}