using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class RoomManager : MonoBehaviourPunCallbacks
{
    public static RoomManager Instance { get; private set; }
    //public GameObject roomPrefab;
    //List<GameObject> displayRooms = new List<GameObject>();

    //private bool canJoin = false;

    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        Instance = this;
    }

    public static string getName(GameObject o)
    {
        if (o.GetComponent<PhotonView>() != null)
        {
            if ((o.GetComponent<PhotonView>().Owner.NickName != null) && !(o.GetComponent<PhotonView>().Owner.NickName.Equals("")))
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

        StartCoroutine(RoomJoining());

        //if (!PhotonNetwork.InRoom)
        //{
        //    PhotonNetwork.JoinRoom(roomName);
        //}

        IEnumerator RoomJoining() 
        {
            while (!(PhotonNetwork.InLobby && PhotonNetwork.IsConnected))
                yield return null;

            PhotonNetwork.JoinOrCreateRoom(roomName, ro, null);

            switch (roomName)
            {
                case "Green": PhotonNetwork.LoadLevel("GreenLevel"); break;

                case "Blue": PhotonNetwork.LoadLevel("BlueLevel"); break;

                case "Purple": PhotonNetwork.LoadLevel("PurpleLevel"); break;
            }
        }
    }

    public override void OnJoinedRoom()
    {
        // Leave a lobby message with details of who joined
        Room r = PhotonNetwork.CurrentRoom;
        ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
        p["notices"] = $"{getName(gameObject)} : {Time.time} :joined\n";
        r.SetCustomProperties(p);
        // Since this is part of the create room process,leave if just creating.

        //  if(!canJoin)
        // {
        //     PhotonNetwork.LeaveRoom(this.gameObject);
        //     PhotonNetwork.JoinRoom(r.Name, null);
        // }

    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to master.");
        PhotonNetwork.JoinLobby();
    }



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