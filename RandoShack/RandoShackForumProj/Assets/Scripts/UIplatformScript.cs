using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIplatformScript : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private RuntimePlatform runtimePlatform;

    void OnEnable()
    {
        // windows player / editor use same ui
        if (Application.platform == RuntimePlatform.WindowsEditor && runtimePlatform == RuntimePlatform.WindowsPlayer)
            return;

        //disabling the canvas when ui for wrong platform is up
        if (Application.platform != runtimePlatform)
            gameObject.SetActive(false);


    }
}
