using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Photon.Pun;
public class MoveAvatar : MonoBehaviour
{
    public float moveSpeed = 2.0f;
    public float turnSpeed = 30.0f;
    public float playerJumpHeight = 2.0f;
    void Start()
    {
        transform.position = new Vector3(0, 2.6f, 0);
    }
    void Update()
    {
        if ((GetComponent <PhotonView> ().IsMine) ||
            (!PhotonNetwork.IsConnected))
        {
            float move = Input.GetAxis("Vertical");
            float turn = Input.GetAxis("Horizontal");

            transform.rotation *= Quaternion.AngleAxis(
                turn * turnSpeed * Time.deltaTime,
                transform.up);
            transform.position += move * moveSpeed * Time.deltaTime
                * transform.forward;
        }
    }
}
