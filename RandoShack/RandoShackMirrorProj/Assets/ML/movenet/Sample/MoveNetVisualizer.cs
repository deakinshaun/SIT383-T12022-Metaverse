/*
*   MoveNet
*   Copyright (c) 2022 NatML Inc. All Rights Reserved.
*/

namespace NatSuite.ML.Visualizers {

    using System.Collections.Generic;
    using UnityEngine;
    using UnityEngine.UI;
    using Vision;

    /// <summary>
    /// MoveNet body pose visualizer.
    /// This visualizer uses visualizes the pose keypoints using a UI image.
    /// </summary>
    [RequireComponent(typeof(RawImage), typeof(AspectRatioFitter))]
    public sealed class MoveNetVisualizer : MonoBehaviour {

        #region --Client API--
        /// <summary>
        /// Render a body pose.
        /// </summary>
        /// <param name="image">Image which body pose is generated from.</param>
        /// <param name="pose">Body pose to render.</param>
        /// <param name="confidenceThreshold">Keypoints with confidence lower than this value are not rendered.</param>
        public void Render (Texture image, MoveNetPredictor.Pose pose, float confidenceThreshold = 0f) {
            // Delete current
            foreach (var point in currentPoints)
                GameObject.Destroy(point.gameObject);
            currentPoints.Clear();
            // Display image
            var imageTransform = transform as RectTransform;
            var rawImage = GetComponent<RawImage>();
            var aspectFitter = GetComponent<AspectRatioFitter>();
            rawImage.texture = image;
            aspectFitter.aspectRatio = (float)image.width / image.height;
            // Check
            if (pose == null)
                return;
            // Render keypoints
            foreach (var point in pose) {
                // Check confidence
                if (point.z < confidenceThreshold)
                    continue;
                // Instantiate
                var anchor = Instantiate(keypoint, transform);
                anchor.gameObject.SetActive(true);
                // Position
                anchor.anchorMin = 0.5f * Vector2.one;
                anchor.anchorMax = 0.5f * Vector2.one;
                anchor.pivot = 0.5f * Vector2.one;
                anchor.anchoredPosition = Rect.NormalizedToPoint(imageTransform.rect, point);
                // Add
                currentPoints.Add(anchor);
            }
        }
        #endregion


        #region --Operations--
        [SerializeField] RectTransform keypoint;
        List<RectTransform> currentPoints = new List<RectTransform>();
        #endregion
    }
}