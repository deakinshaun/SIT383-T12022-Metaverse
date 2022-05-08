using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

/// <summary>
/// The button that open and close the Main Menu.
/// </summary>
public class MenuButton : MonoBehaviour
{
    [SerializeField]
    GameObject iconsCanvas, manomotionCanvas;

    [SerializeField]
    Sprite menuOpenImage, menuClosedImage;

    public Image buttonImage;

    private bool _menuIsOpen;
    public bool MenuIsOpen
    {
        get
        {
            return _menuIsOpen;
        }

        set
        {
            _menuIsOpen = value;
        }
    }


    void Start()
    {
        buttonImage = this.transform.GetChild(0).gameObject.GetComponent<Image>();

        buttonImage.sprite = menuClosedImage;
        _menuIsOpen = false;
    }

    /// <summary>
    /// Toggles the boolean value of the menu being open and handles the illustration of it.
    /// </summary>
    public void ToggleIconsMenu()
    {
        _menuIsOpen = !_menuIsOpen;
        if (_menuIsOpen)
        {
            buttonImage.sprite = menuOpenImage;
        }

        else
        {
            buttonImage.sprite = menuClosedImage;
        }

        iconsCanvas.SetActive(_menuIsOpen);
        manomotionCanvas.SetActive(!_menuIsOpen);
    }

    /// <summary>
    /// Closes the menu and shows the manoMotion canvas
    /// </summary>
    public void CloseMenuAndShowManoMotionCanvas()
    {
        _menuIsOpen = false;
        buttonImage.sprite = menuClosedImage;
        iconsCanvas.SetActive(_menuIsOpen);
        manomotionCanvas.SetActive(!_menuIsOpen);
    }

    /// <summary>
    /// Closes the menu.
    /// </summary>
    public void CloseMenu()
    {
        _menuIsOpen = false;
        buttonImage.sprite = menuClosedImage;
        iconsCanvas.SetActive(_menuIsOpen);
    }
}
