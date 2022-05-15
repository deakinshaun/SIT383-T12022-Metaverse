using System.Collections;
using System.Collections.Generic;
using UnityEngine;


using TMPro;
using Photon.Pun;

public class TextChat1 : MonoBehaviour
{
    public TextMeshProUGUI chatBox;
    public TMP_InputField inputBox;
    

    void Start()
    {
        chatBox = transform.Find("/Canvas/ChatOutPut").gameObject.GetComponent<TextMeshProUGUI>();
    }

    [PunRPC]

    void UpdateChat(string message)
    {
        Debug.Log("Message received: " + message);
        chatBox.text += message + "\n";
        while (chatBox.text.Length > 40)
        {
            chatBox.text = chatBox.text.Substring(2);
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return) && (inputBox != null)) 
        {
            //inputBox.text = "";
            // chatBox.text = inputBox.text;
            GetComponent<PhotonView>().RPC("UpdateChat", RpcTarget.All, inputBox.text);
            inputBox.text = "";
        }
    }
}
