
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Voice.Unity;
using Photon.Realtime;
using Photon.Pun;

public class VoiceManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public TextMesh status;
    private VoiceConnection vc;
    void Start()
    {
        status.text = "";
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
        vc.Client.OpJoinOrCreateRoom(new EnterRoomParams
        {
            RoomName = "ApplicationRoom",
            RoomOptions = roomopt,
            Lobby = lobby
        });

    }

    public override void OnJoinedRoom()
    {
        if(PhotonNetwork.CurrentRoom != null) 
        {
            status.text = "Joined room with" + PhotonNetwork.CurrentRoom.PlayerCount + " participants";

        }
        else
        {
            status.text = "Join but no room";
        }
        
    }

    public override void OnDisconnected (DisconnectCause cause)
    {
        status.text = "Disconnected: " + cause;
    }

    // Update is called once per frame
    void Update()
    {
        string others = "";
        if (vc.Client.InRoom)
        {
            Dictionary<int, Player>.ValueCollection pts = vc.Client.CurrentRoom.Players.Values;
            status.text = "In room with " + pts.Count;
            foreach (Player p in pts)
            {
                others += p.ToStringFull() + "\n";
            }
            status.text = "Member: " + others;
        }
        if (Input.GetKeyDown(KeyCode.X))
        {
            vc.PrimaryRecorder.TransmitEnabled =  !vc.PrimaryRecorder.TransmitEnabled;
        }
    }
}
