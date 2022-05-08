using System;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Handles the UI, FPS, version, licence etc.
/// </summary>
public class ManomotionUIManagment : MonoBehaviour
{
    private bool _showLicenseInfo;

    [SerializeField]
    private Text FPSValueText;
    [SerializeField]
    private Text processingTimeValueText;
    [SerializeField]
    private Text versionText;
    [SerializeField]
    private Text credits;
    [SerializeField]
    private Text daysLeft;
    [SerializeField]
    private Text licenseEnd;

    [SerializeField]
    private GameObject licenseInfoGizmo;

    private void Awake()
    {
        if (!licenseInfoGizmo)
        {
            licenseInfoGizmo = transform.Find("LicenseInfoGizmo").gameObject;
        }
        ManomotionManager.OnManoMotionFrameProcessed += DisplayInformationAfterManoMotionProcessFrame;
        ManomotionManager.OnManoMotionLicenseInitialized += HandleManoMotionManagerInitialized;
    }

    /// <summary>
    /// Displays information from the ManoMotion Manager after the frame has been processed.
    /// </summary>
    void DisplayInformationAfterManoMotionProcessFrame()
    {
        UpdateFPSText();
        UpdateProcessingTime();
    }

    /// <summary>
    /// Toggles the visibility of a Gameobject.
    /// </summary>
    /// <param name="givenObject">Requires a Gameobject</param>
    public void ToggleUIElement(GameObject givenObject)
    {
        givenObject.SetActive(!givenObject.activeInHierarchy);
    }

    /// <summary>
    /// Updates the text field with the calculated Frames Per Second value.
    /// </summary>
    public void UpdateFPSText()
    {
        FPSValueText.text = ManomotionManager.Instance.Fps.ToString();
    }

    /// <summary>
    /// Updates the text field with the calculated processing time value.
    /// </summary>
    public void UpdateProcessingTime()
    {
        processingTimeValueText.text = ManomotionManager.Instance.Processing_time.ToString() + " ms";
    }

    /// <summary>
    /// Toggles the visibility of Showing the licenseInformation
    /// </summary>
    public void ToggleShowLicenseInfo()
    {
        _showLicenseInfo = !_showLicenseInfo;
        licenseInfoGizmo.SetActive(_showLicenseInfo);
        if (_showLicenseInfo)
        {
            credits.text = "Credits Remaining: " + ManomotionManager.Instance.Mano_License.machines_left.ToString();
            double current = (double)ManomotionManager.Instance.Mano_License.days_left;

            DateTime expiration = DateTime.Now.AddDays(ManomotionManager.Instance.Mano_License.days_left);
            daysLeft.text = "License Expires: " + expiration.ToString("MM/dd/yyyy");

            string lastDigits = "";

            for (int i = 0; i < ManomotionManager.Instance.LicenseKey.Length; i++)
            {
                if (i > ManomotionManager.Instance.LicenseKey.Length - 6)
                {
                    lastDigits += ManomotionManager.Instance.LicenseKey[i];
                }
            }

            licenseEnd.text = "License: " + lastDigits;
        }
    }

    /// <summary>
    /// Shows the current version of the SDK.
    /// </summary>
    public void HandleManoMotionManagerInitialized()
    {
        versionText.text = "Version PRO ";
        float versionFull = ManomotionManager.Instance.Mano_License.version;
        string prefix = "Version PRO ";

        string versionString = versionFull.ToString();

        if (versionString.Length == 4)
        {
            versionString = versionString.Insert(versionString.Length - 1, ".");
        }

        else if (versionString.Length == 5)
        {
            versionString = versionString.Insert(versionString.Length - 2, ".");
            versionString = versionString.Insert(versionString.Length - 1, ".");
        }

        int versionLength = versionFull.ToString().Length;

        versionText.text = prefix += versionString;
    }
}
