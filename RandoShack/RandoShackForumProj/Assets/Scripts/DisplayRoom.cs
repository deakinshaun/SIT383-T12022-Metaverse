using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayRoom : MonoBehaviour
{
    private string roomName;

    public string getName()
    {
        return roomName;
    }

    public void setName(string name)
    {
        roomName = name;
    }

    public void display(string message)
    {
        GetComponentInChildren<Text>().text = message;
    }

}
