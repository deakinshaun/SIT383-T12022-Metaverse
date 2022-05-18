using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using Photon.Realtime;



public class PhotonManager : MonoBehaviourPunCallbacks

{
    public GameObject VRJacobAvatar;
    public GameObject VRMorgaineAvatar;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Start - Connected status: " + PhotonNetwork.IsConnected);
        PhotonNetwork.ConnectUsingSettings();

    }

    public override void OnConnectedToMaster ()
    {
        Debug.Log("Connected to Master.");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt, new TypedLobby("ApplicationLobby", LobbyType.Default));
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Joined room with " + PhotonNetwork.CurrentRoom.PlayerCount + " participants.");

        PhotonNetwork.Instantiate(VRJacobAvatar.name, new Vector3(), Quaternion.identity, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
