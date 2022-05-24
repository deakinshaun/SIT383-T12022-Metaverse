using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

public class ButtonPress : MonoBehaviour
{
   public void ButtonPressed()
    {
        Debug.Log("Button has been pressed");
        GameObject []a = GameObject.FindGameObjectsWithTag("Player");
        Debug.Log("Avatar found: " + a);
        foreach (GameObject b in a)
        {
            if (b.GetComponentInChildren<PhotonView>() != null && b.GetComponentInChildren<PhotonView>().IsMine)
            {
                Debug.Log("Find my Avatar");
                b.GetComponentInChildren<AvatarSelect>().SwitchAvatar();

            }
        }
    }
}
