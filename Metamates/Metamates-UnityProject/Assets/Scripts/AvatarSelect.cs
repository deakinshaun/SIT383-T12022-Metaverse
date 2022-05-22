using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarSelect : MonoBehaviour
{
    public GameObject Avatar;
    public GameObject Avatar1;
    public GameObject Avatar2;
    public GameObject Avatar3;
    public GameObject Avatar4;
    public GameObject BigRedButton;
    public bool pushed = false;

    void SwitchAvatar()
    {
        //if big red button is pushed switch avatars
        if (this.Avatar == Avatar1 && BigRedButton != pushed) //did i put this in wrong?
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
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
