using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class MoveAvatar : MonoBehaviourPun
{
    public float speed = 10.0f;
    public float rotatespeed = 10.0f;
    public GameObject cam;
    // Start is called before the first frame update
    void Start()
    {
        cam = GameObject.Find("Main Camera");
    }

    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine || !PhotonNetwork.IsConnected)
        {
            float h = Input.GetAxis("Horizontal");
            float v = Input.GetAxis("Vertical");
            transform.position += v * speed * Time.deltaTime * transform.forward;
            transform.rotation *= Quaternion.AngleAxis(h * rotatespeed * Time.deltaTime, transform.up);
            cam.transform.SetParent(transform);
            cam.transform.localPosition = new Vector3(0, 2.0f, -2.0f);
        }
    }
}
