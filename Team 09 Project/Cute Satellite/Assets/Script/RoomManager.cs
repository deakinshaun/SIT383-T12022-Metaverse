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
    public Canvas roomCanvas;

    private bool allowingJoining = false;

    List<GameObject> displayRooms = new List<GameObject>();

    void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    public static string getName(GameObject o)
    {
        if (o.GetComponent<PhotonView>() != null)
        {
            if ((o.GetComponent<PhotonView>().Owner.NickName != null)
                && !(o.GetComponent<PhotonView>().Owner.NickName.Equals("")))
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
            return "X" + PhotonNetwork.AuthValues.UserId;
        }
    }

   /*GameObject getRoomObject(string name)
    {
        foreach (GameObject g in displayRooms)
        {
            DisplayRoom dr = g.GetComponent<DisplayRoom>();
            if (dr.getName().Equals(name))
            {
                return g;
            }
        }
        GameObject room = Instantiate(roomPrefab);
        room.transform.SetParent(roomCanvas.transform);
        room.GetComponent<DisplayRoom>().setName(name);
        room.GetComponent<LocalRoomBehaviour>().setManager(this);
        displayRooms.Add(room);
        return room;
    }*/

    void removeRoomObejct(GameObject room)
    {
        displayRooms.Remove(room);
        Destroy(room);
    }

    void updateRooms()
    {
        int row = 0;
        int col = 0;
        int columnLimit = 2;
        foreach (GameObject room in displayRooms)
        {
            room.transform.localPosition = new Vector3(col * 300 - 100, row * 100, 0);
            col += 1;
            if (col >= columnLimit)
            {
                col = 0;
                row -= 1;
            }
        }
    }

    public void JoinRoom(string roomName)
    {
        allowingJoining = true;
        PhotonNetwork.JoinRoom(roomName);
        PhotonNetwork.LoadLevel("Campfire");
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connecnted to master.");
        PhotonNetwork.JoinLobby();
    }

    /*public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        foreach (RoomInfo ri in roomList)
        {
            GameObject room = getRoomObject(ri.Name);

            if (ri.RemovedFromList)
            {
                removeRoomObejct(room);
            }
            else
            {
                room.GetComponent<DisplayRoom>().display(ri.Name + "\n\nwith"
                    + ri.PlayerCount + "players\n" + ri.CustomProperties["notices"]);
            }
        }
        updateRooms();
    }*/

    public override void OnJoinedLobby()
    {
        Debug.Log("Joined lobby");
    }

    public override void OnJoinedRoom()
    {
        Room r = PhotonNetwork.CurrentRoom;
        ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
        p["notices"] = RoomManager.getName(this.gameObject) + ":" + Time.time + ":joined\n";
        r.SetCustomProperties(p);

        if (!allowingJoining)
        {
            PhotonNetwork.LeaveRoom();
        }
    }

    public override void OnCreatedRoom()
    {
        Debug.Log("Room Create");
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log("Failed to create room" + returnCode + " " + message);
    }

    public void addRoom(Text name)
    {
        Debug.Log("Adding new room: " + name.text);
        RoomOptions ro = new RoomOptions();
        ro.EmptyRoomTtl = 100000;

        string[] roomPropsInLobby = { "notices" };
        ro.CustomRoomPropertiesForLobby = roomPropsInLobby;
        ExitGames.Client.Photon.Hashtable
            customRoomProperties = new ExitGames.Client.Photon.Hashtable()
            { { "notices","Room Start\n"} };
        ro.CustomRoomProperties = customRoomProperties;
        PhotonNetwork.JoinOrCreateRoom(name.text, ro, null);
    }

    void Update()
    {

    }
}
