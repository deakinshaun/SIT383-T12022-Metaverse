using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

using Photon.Voice;
using Photon.Voice.PUN;
using Photon.Voice.Unity;

public class MoveAvatar : MonoBehaviourPun, IPunInstantiateMagicCallback
{
    public float moveSpeed = 0.5f;
    public float turnSpeed = 10.0f;
    [SerializeField]
    protected GameObject speakingFeedback;
    [SerializeField]
    protected PhotonVoiceView voiceView;
    public void OnPhotonInstantiate(PhotonMessageInfo info)
    {
        voiceView = GetComponent<PhotonVoiceView>();
        if (!photonView.IsMine)
        {
            return;
        }
    }
 

    void Update()
    {
        speakingFeedback.SetActive(voiceView != null && !photonView.IsMine && voiceView.SpeakerInUse.IsPlaying);
        if (GetComponent<PhotonView>().IsMine|| (!PhotonNetwork.IsConnected))
    {

            float move = Input.GetAxis("Vertical");
            float turn = Input.GetAxis("Horizontal");

            transform.rotation *= Quaternion.AngleAxis(turn * turnSpeed * Time.deltaTime,
                transform.up);
            transform.position += move * moveSpeed * Time.deltaTime
                * transform.forward;

            ; }
    }      
}
