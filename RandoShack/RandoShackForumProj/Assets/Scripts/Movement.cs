using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class Movement : MonoBehaviourPun
{
    //raycast numbers
    [SerializeField]
    private float downRay = 100f;

    [SerializeField]
    private float downOffset = -0.5f;


    //control speeds
    [SerializeField]
    [Tooltip("Turn speed in degrees per second")]
    private float turnSpeed = 100.0f;
    [SerializeField]
    [Tooltip("Movement speed in meters per second (assumes 1 unit = 1 meter)")]
    private float moveSpeed = 10f;

    private bool lobbyAvatar = false;

    // binding events to buttons
    private void setButtonCallbacks()
    {

        GameObject.Find("Canvas/ChatInterface/TalkButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Talk(); });
        GameObject.Find("Canvas/ChatInterface/LobbyButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Lobby(); });

        GameObject.Find("Canvas/ChatInterface/NickNameButton").GetComponent<EventTrigger>().triggers[0].callback.AddListener((data) => { Nickname(); });
    }

    public void Talk()
    {
        GameObject t = GameObject.Find("Canvas/ChatInterface/TalkMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["talk"] += RoomManager.getName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }

    // Write a message into the "notices" custom property
    // which is shared with the lobby.
    public void Lobby()
    {
        GameObject t = GameObject.Find("Canvas/ChatInterface/LobbyMessage/Text");
        if (t != null)
        {
            Room r = PhotonNetwork.CurrentRoom;
            ExitGames.Client.Photon.Hashtable p = r.CustomProperties;
            p["notices"] = RoomManager.getName(this.gameObject) + ":" + Time.time + ":" + t.GetComponent<Text>().text + "\n";
            r.SetCustomProperties(p);
        }
    }

    [PunRPC]
    void showNickname(string name)
    {
        transform.Find("NameText").gameObject.GetComponent<TextMesh>().text = name;
    }

    public void Nickname()
    {
        GameObject t = GameObject.Find("Canvas/ChatInterface/NickNameName/Text");
        if (t != null)
        {
            GetComponent<PhotonView>().Owner.NickName = t.GetComponent<Text>().text;
            photonView.RPC("showNickname", RpcTarget.All, RoomManager.getName(this.gameObject));
        }
    }


    void Start()
    {
        Color randCol = Random.ColorHSV();
        // charMat.color = randCol;

        if (photonView.IsMine || !PhotonNetwork.IsConnected)
        {
            lobbyAvatar = !PhotonNetwork.InRoom;
            setButtonCallbacks();
            transform.Find("HeadCam").gameObject.SetActive(true);
        }
        photonView.RPC("showNickname", RpcTarget.All, RoomManager.getName(this.gameObject));
    }


    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine || !PhotonNetwork.IsConnected)
        {
            float move = Input.GetAxis("Vertical");
            float turn = Input.GetAxis("Horizontal");

            //mutliply when dealing with rotation
            transform.rotation *= Quaternion.AngleAxis(turn * turnSpeed * Time.deltaTime, transform.up);

            // moving forward / back
            transform.position += move * moveSpeed * Time.deltaTime * transform.forward;

            //placing PLayer on ground
            RaycastHit hit;
            if (Physics.Raycast(transform.position, Vector3.down, out hit, downRay))
            {
                /*
                 * Set the target location to the location of the hit.
                 */
                Vector3 targetLocation = hit.point;
                /*
                 * Modify the target location so that the object is being perfectly aligned with the ground (if it's flat).
                 */
                targetLocation += new Vector3(0, (transform.localScale.y / 2) + downOffset, 0);
                /*
                 * Move the object to the target location.
                 */
                transform.position = targetLocation;



            }
        }
        else
        {
            transform.Find("HeadCam").gameObject.SetActive(false);
        }
    }
}
