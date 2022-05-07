using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomPage : MonoBehaviour
{
    private CanvasGroup canvasGroup;
    void Start()
    {
        canvasGroup = GetComponent<CanvasGroup>();
        canvasGroup.alpha = 0;
    }

    public void OnClickRoomButton()
    {
        if (canvasGroup.alpha == 0)
        {
            canvasGroup.alpha = 1;
        }
        else
        {
            canvasGroup.alpha = 0;
        }
    }
}
