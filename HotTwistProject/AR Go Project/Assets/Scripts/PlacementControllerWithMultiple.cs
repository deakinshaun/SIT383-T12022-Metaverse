using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARRaycastManager))]
public class PlacementControllerWithMultiple : MonoBehaviour
{
    [SerializeField]
    private Button BPieceButton;

    [SerializeField]
    private Button WPieceButton;

    [SerializeField]
    private Button BoardButton;

    [SerializeField]
    private Button dismissButton;

    [SerializeField]
    private GameObject welcomePanel;

    [SerializeField]
    private Text selectionText;

    private GameObject placedPrefab;

    private ARRaycastManager arRaycastManager;

    void Awake()
    {
        arRaycastManager = GetComponent<ARRaycastManager>();

        // set initial prefab
        ChangePrefabTo("board");

        BPieceButton.onClick.AddListener(() => ChangePrefabTo("stoneBlack"));
        BoardButton.onClick.AddListener(() => ChangePrefabTo("board"));
        WPieceButton.onClick.AddListener(() => ChangePrefabTo("stoneWhite"));
        dismissButton.onClick.AddListener(Dismiss);
    }

    private void Dismiss() => welcomePanel.SetActive(false);

    void ChangePrefabTo(string prefabName)
    {
        placedPrefab = Resources.Load<GameObject>($"Prefabs/{prefabName}");

        if (placedPrefab == null)
        {
            Debug.LogError($"Prefab with name {prefabName} could not be loaded, make sure you check the naming of your prefabs...");
        }

        switch (prefabName)
        {
            case "board":
                selectionText.text = $"Selected: <color='blue'>{prefabName}</color>";
                break;
            case "stoneWhite":
                selectionText.text = $"Selected: <color='red'>{prefabName}</color>";
                break;
            case "stoneBlack":
                selectionText.text = $"Selected: <color='green'>{prefabName}</color>";
                break;
        }
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }

        touchPosition = default;

        return false;
    }

    void Update()
    {
        if (placedPrefab == null || welcomePanel.gameObject.activeSelf)
        {
            return;
        }

        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;

        if (arRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;
            Instantiate(placedPrefab, hitPose.position, hitPose.rotation);
        }
    }


    static List<ARRaycastHit> hits = new List<ARRaycastHit>();
}