using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarSelect : MonoBehaviour
{
    public GameObject MorgaineAvatar;
    public GameObject BenAvatar;
    public GameObject JacobAvatar;
    public GameObject MattAvatar;

/*    public GameObject BigRedButton;
    public bool pushed = false;*/
    private int u = 0;
    public void SwitchAvatar()
    {
        //if big red button is pushed switch avatars
        /*if (this.Avatar == Avatar1 && BigRedButton != pushed) //did i put this in wrong? //instatiate all avatars (set active or not in game)
        {
            Avatar = Avatar2;
        }
        if (this.Avatar == Avatar2 && BigRedButton != pushed)
        {
            Avatar = Avatar3;
        }
        if (this.Avatar == Avatar3 && BigRedButton != pushed)
        {
            Avatar = Avatar4;
        }
        if (this.Avatar == Avatar4 && BigRedButton != pushed)
        {
            Avatar = Avatar1;
        }*/
        u = u + 1;

        if (u == 1)
        {
            JacobAvatar.SetActive(false);
            BenAvatar.SetActive(false);
            MorgaineAvatar.SetActive(true);
            MattAvatar.SetActive(false);
        }
        if (u == 2)
        {
            JacobAvatar.SetActive(false);
            BenAvatar.SetActive(true);
            MorgaineAvatar.SetActive(false);
            MattAvatar.SetActive(false);
        }
        if (u == 3)
        {
            JacobAvatar.SetActive(true);
            BenAvatar.SetActive(false);
            MorgaineAvatar.SetActive(false);
            MattAvatar.SetActive(false);
        }
        if (u == 4)
        {
            JacobAvatar.SetActive(false);
            BenAvatar.SetActive(false);
            MorgaineAvatar.SetActive(false);
            MattAvatar.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
