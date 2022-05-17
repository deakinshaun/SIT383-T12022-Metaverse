using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
public class PlaneEvent : MonoBehaviour
{
 
    void Start()
    {
        DeviceTrackerARController.Instance.RegisterDevicePoseStatusChangedCallback(OnDevicePoseStatusChanged);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void onfindplane(bool bl)
    {
        if(bl)
        {
            Mgr.Inst.ads.Play();
        }
        else
        {
            Mgr.Inst.ads.Stop();
        }
        Debug.LogWarning("onfindplane " + bl);
        botanyDlg.Inst.showmodel(bl);
    }
    void OnDevicePoseStatusChanged(TrackableBehaviour.Status status, TrackableBehaviour.StatusInfo statusInfo)
    {
        Debug.Log("PlaneManager.OnDevicePoseStatusChanged(" + status + ", " + statusInfo + ")");
        switch (statusInfo)
        {
            case TrackableBehaviour.StatusInfo.NORMAL:
                if (status == TrackableBehaviour.Status.TRACKED)
                {
                    onfindplane(true);
                }
                break;
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
                if (status == TrackableBehaviour.Status.NO_POSE)
                {
                    onfindplane(false);
                }
                break;
            default:
                break;
        }
    }
}
