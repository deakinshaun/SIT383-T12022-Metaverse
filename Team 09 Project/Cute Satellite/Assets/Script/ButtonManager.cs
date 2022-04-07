using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;
public class ButtonManager : MonoBehaviour
{
    public GameObject VoiceManager;

    private VoiceConnection vc;
    // Start is called before the first frame update
    void Start()
    {
        vc = VoiceManager.GetComponent<VoiceConnection>();
    }

    //OnClick Events

    public void ClickMuteButton() //OnClickEvent using in MuteButton
    {
        vc.PrimaryRecorder.TransmitEnabled = !vc.PrimaryRecorder.TransmitEnabled;
    }

}
