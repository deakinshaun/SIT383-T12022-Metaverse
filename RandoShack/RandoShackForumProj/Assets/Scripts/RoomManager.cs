using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class RoomManager : MonoBehaviourPunCallbacks
{
    public GameObject roomPrefab;


    //List<GameObject> displayRooms = new List<GameObject>();

    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }
    public static string getName(GameObject o)
    {
        if (o.GetComponent<PhotonView>() != null)
        {
            if ((o.GetComponent<PhotonView>().Owner.
           NickName != null) && !(o.GetComponent<PhotonView>().Owner.NickName.Equals("")))
            {
                return o.GetComponent<PhotonView>().Owner.NickName;
            }
            else
            {
                return o.GetComponent<PhotonView>().Owner.UserId;
            }
        }
        else
        {
            // Not a networked object. Just return the current player's id
            return $"X {PhotonNetwork.AuthValues.UserId}";
        }
    }
    // Find the display version of the room, creating one
    // if none exists.

    // not using this list so removing


    //GameObject getRoomObject(string name)
    //{
    //    foreach (GameObject g in displayRooms)
    //    {
    //        DisplayRoom dr = g.GetComponent<DisplayRoom>();
    //        if (dr.getName().Equals(name))
    //        {
    //            return g;
    //        }
    //    }
    //    GameObject room = Instantiate(roomPrefab);
    //    room.transform.SetParent(roomPanel.transform,false);
    //    room.GetComponent<DisplayRoom>().setName(name);
    //  //  room.transform.localScale = Vector3.one;
    //    room.GetComponent<LocalRoomBehaviour>().setManager(this);
    //    displayRooms.Add(room);
    //    return room;
    //}

    //void removeRoomObject(GameObject room)
    //{
    //    displayRooms.Remove(room);
    //    Destroy(room);
    //}

    // Lay the room controls out in a grid. maybe be uneccisarry
    //void updateRooms()
    //{
    //    //int row = 0;
    //    //int col = 0;
    //    //int columnLimit = 2;
    //    foreach (GameObject room in displayRooms)
    //    {
    //        room.transform.localPosition = new Vector3(0,0,0);

    //        //col += 1;
    //        //if (col >= columnLimit)
    //        //{
    //        //    col = 0;
    //        //    row -= 1;
    //        //}
    //    }
    //}
    public void JoinRoom(string roomName)
    {
        // create and / or join the room
        Debug.Log($"Adding new room: {roomName}");
        RoomOptions ro = new RoomOptions();
        ro.EmptyRoomTtl = 100000; // 100 * 1000 ms

        // Export the notices property to the lobby.
        string[] roomPropsInLobby = { "notices" };
        ro.CustomRoomPropertiesForLobby = roomPropsInLobby;
        ExitGames.Client.Photon.Hashtable
        customRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "notices", "Room Start\n" } };
        ro.CustomRoomProperties = customRoomProperties;
        PhotonNetwork.JoinOrCreateRoom(roomName, ro, null);

       // allowingJoining = true;
       // PhotonNetwork.JoinRoom(roomName);

        switch (roomName)
        {
            case "Green": PhotonNetwork.LoadLevel("GreenLevel"); break;

            case "Blue": PhotonNetwork.LoadLevel("BlueLevel"); break;

            case "Purple": PhotonNetwork.LoadLevel("PurpleLevel"); break;
        }

    }

    public override void OnJoinedRoom()
    {
        // Leave a lobby message with details of who joined
        Room r = PhotonNetwork.CurrentRoom;
        ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
        p["notices"] = $"{RoomManager.getName(this.gameObject)} : {Time.time} :joined\n";
        r.SetCustomProperties(p);
        // Since this is part of the create room process,leave if just creating.

        //if (!allowingJoining)
        //{
        //    PhotonNetwork.LeaveRoom();
        //}
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to master.");
        PhotonNetwork.JoinLobby();
    }

    //removing as not using list

    //public override void OnRoomListUpdate(List<RoomInfo> roomList)
    //{
    //    foreach (RoomInfo ri in roomList)
    //    {
    //        GameObject room = getRoomObject(ri.Name);

    //        if (ri.RemovedFromList)
    //        {
    //            removeRoomObject(room);
    //        }
    //        else
    //        {
    //            room.GetComponent<DisplayRoom>().display(ri.Name + "\n\nwith " + ri.PlayerCount + "players\n" + ri.CustomProperties["notices"]);
    //        }
    //    }
    //   // updateRooms();
    //}

    public override void OnJoinedLobby()
    {
        Debug.Log("Joined lobby");
    }



    public override void OnCreatedRoom()
    { Debug.Log("Room created"); }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log($"Failed to create room {returnCode} { message}");
    }

    //public void addRoom(Text name)
    //{
    //    Debug.Log($"Adding new room: {name.text}");
    //    RoomOptions ro = new RoomOptions();
    //    ro.EmptyRoomTtl = 100000; // 100 * 1000 ms

    //    // Export the notices property to the lobby.
    //    string[] roomPropsInLobby = { "notices" };
    //    ro.CustomRoomPropertiesForLobby = roomPropsInLobby;
    //    ExitGames.Client.Photon.Hashtable
    //    customRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "notices", "Room Start\n" } };
    //    ro.CustomRoomProperties = customRoomProperties;
    //    PhotonNetwork.JoinOrCreateRoom(name.text, ro, null);
    //}
}