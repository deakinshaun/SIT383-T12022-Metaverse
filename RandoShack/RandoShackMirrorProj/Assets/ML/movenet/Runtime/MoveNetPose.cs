/*
*   MoveNet
*   Copyright (c) 2022 NatML Inc. All Rights Reserved.
*/

namespace NatSuite.ML.Vision {

    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

    public sealed partial class MoveNetPredictor {

        /// <summary>
        /// Detected body pose.
        /// The xy coordinates are the normalized position of the keypoint, in range [0, 1].
        /// The z coordinate is the confidence score of the keypoint, in range [0, 1].
        /// </summary>
        public sealed class Pose : IReadOnlyList<Vector3> {

            #region --Client API--
            public Vector3 this [int idx]  => new Vector3(data[3 * idx + 1], 1f - data[3 * idx + 0], data[3 * idx + 2]);
            public Vector3 nose            => this[0];
            public Vector3 leftEye         => this[1];
            public Vector3 rightEye        => this[2];
            public Vector3 leftEar         => this[3];
            public Vector3 rightEar        => this[4];
            public Vector3 leftShoulder    => this[5];
            public Vector3 rightShoulder   => this[6];
            public Vector3 leftElbow       => this[7];
            public Vector3 rightElbow      => this[8];
            public Vector3 leftWrist       => this[9];
            public Vector3 rightWrist      => this[10];
            public Vector3 leftHip         => this[11];
            public Vector3 rightHip        => this[12];
            public Vector3 leftKnee        => this[13];
            public Vector3 rightKnee       => this[14];
            public Vector3 leftAnkle       => this[15];
            public Vector3 rightAnkle      => this[16];
            #endregion


            #region --Operations--
            private readonly float[] data;

            internal Pose (float[] data) => this.data = data;

            int IReadOnlyCollection<Vector3>.Count => data.Length / 3;

            IEnumerator<Vector3> IEnumerable<Vector3>.GetEnumerator () {
                var count = (this as IReadOnlyCollection<Vector3>).Count;
                for (var i = 0; i < count; ++i)
                    yield return this[i];
            }

            IEnumerator IEnumerable.GetEnumerator() => (this as IEnumerable<Vector3>).GetEnumerator();
            #endregion
        }
    }
}