using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Voice.Unity;
using Photon.Realtime;

public class VoiceManager : MonoBehaviourPunCallbacks
{
    public TextMesh status;
    private VoiceConnection vc;
    void Start()
    {
        status.text = "Application starting";

        PhotonNetwork.ConnectUsingSettings();
        vc = GetComponent<VoiceConnection>();
        vc.Client.AddCallbackTarget(this);
        vc.ConnectUsingSettings();
    }

    public override void OnConnectedToMaster()
    {
        status.text = "Connected to master";
        RoomOptions roomopt = new RoomOptions();
        TypedLobby lobby = new TypedLobby("ApplicationLobby", LobbyType.Default);
        vc.Client.OpJoinOrCreateRoom(new EnterRoomParams { RoomName = "ApplicationRoom", RoomOptions = roomopt, Lobby = lobby});

    }

    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.CurrentRoom != null)
        {
            status.text = "Joined Room with " + PhotonNetwork.CurrentRoom.PlayerCount + " participants";
        }
        else
        {
            status.text = "Joined but no room";
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        status.text = "Disconnected" + cause;
    }

    void Update()
    {
        string others = "";
        if (vc.Client.InRoom)
        {
            Dictionary<int, Player>.ValueCollection pts = vc.Client.CurrentRoom.Players.Values;
            status.text = "In Room with" + pts.Count;
            foreach (Player p in pts)
            {
                others += p.ToStringFull();
            }
            status.text = "Room inhabitants: " + others;
        }

        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    vc.PrimaryRecorder.TransmitEnabled = !vc.PrimaryRecorder.TransmitEnabled;
        //}

    }
}
