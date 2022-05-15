using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ManoMotion.UI.Buttons
{
    public class UIIconBehavior : MonoBehaviour
    {
        /// <summary>
        /// All the functions from the menu.
        /// </summary>
        public enum IconFunctionality
        {
            Unknown,
            States,
            ManoClass,
            HandSide,
            Continuous,
            GestureAnalysis,
            Warnings,
            Depth,
            TriggerPick,
            TriggerSwipeVertical,
            TriggerSwipeHorizontal,
            TriggerDrop,
            TriggerClick,
            TriggerGrab,
            TriggerRelease,
            Background,
            LicenseInfo,
            Smoothing,
            Instructions,
            Skeleton3d,
            Gestures,
            FastMode,
            Contour,
            FingerInfo,
            WristInfo,
            PickDrop,
            GrabRelease,
            Swipes
        }

        public IconFunctionality myIconFunctionality;

        [SerializeField]
        Sprite activeFrame, inactiveFrame;

        public bool isActive;

        private Button thisButton;
        private Image buttonFrame, buttonIcon;

        private Color activeColor;

        void OnEnable()
        {
            activeColor = new Color32(61, 87, 127, 255);
            thisButton = this.GetComponent<Button>();
            buttonFrame = transform.Find("Frame").GetComponent<Image>();
            buttonIcon = transform.Find("Icon").GetComponent<Image>();
        }

        private void Start()
        {
            UpdateIconAndFrame(isActive);
        }

        /// <summary>
        /// Updates the icon according to its state (on/off)
        /// </summary>
        /// <param name="state">Requires the state of the icon</param>
        private void UpdateIconAndFrame(bool state)
        {
            if (!buttonFrame)
            {
                buttonFrame = transform.Find("Frame").GetComponent<Image>();
            }

            if (!buttonIcon)
            {
                buttonIcon = transform.Find("Icon").GetComponent<Image>();
            }

            if (state)
            {
                buttonFrame.sprite = activeFrame;
                buttonIcon.color = activeColor;
            }

            else
            {
                buttonFrame.sprite = inactiveFrame;
                buttonIcon.color = Color.white;
            }
        }

        /// <summary>
        /// Toggles the state of the icon.
        /// </summary>
        public void ToggleActive()
        {
            isActive = !isActive;
            UpdateIconAndFrame(isActive);
        }

        public void SetIsActive(bool state)
        {
            isActive = state;
            UpdateIconAndFrame(state);
        }

        /// <summary>
        /// Sets the icon functionality.
        /// </summary>
        /// <param name="functionality">Functionality.</param>
        public void SetIconFunctionality(IconFunctionality functionality)
        {
            this.myIconFunctionality = functionality;
        }
    }
}
