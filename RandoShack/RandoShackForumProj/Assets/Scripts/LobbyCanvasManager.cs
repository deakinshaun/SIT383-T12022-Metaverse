using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbyCanvasManager : MonoBehaviour
{
    private bool NickNameBarActive = false;
    public void ToggleNicknameBar()
    {
        if(NickNameBarActive)
        {
            GameObject.Find("Canvas/ChatInterface").transform.localPosition += new Vector3(-280f,0f,0f);
            GameObject.Find("Canvas/ToggleNickname").transform.localPosition += new Vector3(-280f, 0f, 0f);
            NickNameBarActive = false;
        }
        else
        {
            GameObject.Find("Canvas/ChatInterface").transform.localPosition += new Vector3(280f, 0f, 0f);
            GameObject.Find("Canvas/ToggleNickname").transform.localPosition += new Vector3(280f, 0f, 0f);
            NickNameBarActive = true;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
