using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float speed = 5;
    public PhotonView view;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if(view.IsMine == true)
        {

            float x = Input.GetAxisRaw("Horizontal");
            float y = Input.GetAxisRaw("Vertical");
            gameObject.transform.Translate(new Vector3(x, y, 0) * speed * Time.deltaTime);
        }
    }
}
