using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class SubRoomScript : MonoBehaviour
{
    [SerializeField]
    public string subRoomName;

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log(collision.rigidbody.tag);
        if (collision.rigidbody.tag == "Player")
        {
            collision.gameObject.SetActive(false);
            StartCoroutine(ReRouteRoom(subRoomName));
        }

        IEnumerator ReRouteRoom(string roomName)
        {

            PhotonNetwork.LeaveRoom();

            Debug.Log($"Adding new room: {subRoomName}");

            RoomOptions ro = new RoomOptions();
            ro.EmptyRoomTtl = 100000; // 100 * 1000 ms

            // Export the notices property to the lobby.
            string[] roomPropsInLobby = { "notices" };
            ro.CustomRoomPropertiesForLobby = roomPropsInLobby;
            ExitGames.Client.Photon.Hashtable
            customRoomProperties = new ExitGames.Client.Photon.Hashtable() { { "notices", "Room Start\n" } };
            ro.CustomRoomProperties = customRoomProperties;

            yield return new WaitForSeconds(2);

            PhotonNetwork.JoinOrCreateRoom(roomName, ro, null);

            switch (roomName.Substring(0, roomName.IndexOf('_')))
            {
                case "GreenSub": PhotonNetwork.LoadLevel("BlueSubLevel"); break;

                case "BlueSub": PhotonNetwork.LoadLevel("BlueSubLevel"); break;

                case "PurpleSub": PhotonNetwork.LoadLevel("BlueSubLevel"); break;

                case "Green": PhotonNetwork.LoadLevel("GreenLevel"); break;

                case "Blue": PhotonNetwork.LoadLevel("BlueLevel"); break;

                case "Purple": PhotonNetwork.LoadLevel("PurpleLevel"); break;
            }
        }
    }
}
