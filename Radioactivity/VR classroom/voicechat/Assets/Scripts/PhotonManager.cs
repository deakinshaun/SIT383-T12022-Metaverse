using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
using Photon.Realtime;


public class PhotonManager : MonoBehaviourPunCallbacks

   
{
    public GameObject avartarPrefab;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Starting-connected status = " + PhotonNetwork.IsConnected);
        PhotonNetwork.ConnectUsingSettings();
    }
    // Connect to the server

    public override void OnConnectedToMaster ()
    {
        Debug.Log("Connect to Master");
        RoomOptions roomopt = new RoomOptions();
        PhotonNetwork.JoinOrCreateRoom("ApplicationRoom", roomopt, new TypedLobby ("ApplicationLobby", LobbyType.Default));
    }
    //Create a room 
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Jpomed room with" + PhotonNetwork.CurrentRoom.PlayerCount + "Particpants");
        //Show how many players has join

        PhotonNetwork.Instantiate(avartarPrefab.name, new Vector3(), Quaternion.identity, 0);
    }
    
    void Update()
    {
        
    }
}
