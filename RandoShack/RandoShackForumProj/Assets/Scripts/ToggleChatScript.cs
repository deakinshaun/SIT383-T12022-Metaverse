using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleChatScript : MonoBehaviour
{
    // Start is called before the first frame update
    private bool ActiveChat = false;

    [SerializeField]
    private Transform ToggleArea;

    public void ToggleChat()
    {
        if (ActiveChat)
            ToggleArea.transform.localPosition -= new Vector3(1050f,0,0);
        else
            ToggleArea.transform.localPosition += new Vector3(1050f, 0, 0);

        ActiveChat = !ActiveChat;
    }
}
