using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Profiling;

namespace Oculus.Skinning.GpuSkinning
{

    public class OvrAvatarGpuSkinningController
    {
        private readonly HashSet<OvrGpuMorphTargetsCombiner> _activeCombinerList = new HashSet<OvrGpuMorphTargetsCombiner>();
        private readonly HashSet<IOvrGpuSkinner> _activeSkinnerList = new HashSet<IOvrGpuSkinner>();

        internal void AddActiveCombiner(OvrGpuMorphTargetsCombiner combiner)
        {
            Debug.Assert(combiner != null);
            _activeCombinerList.Add(combiner);
        }

        internal void AddActiveSkinner(IOvrGpuSkinner skinner)
        {
            Debug.Assert(skinner != null);
            _activeSkinnerList.Add(skinner);
        }

        // This behaviour is manually updated at a specific time during OvrAvatarManager::Update()
        // to prevent issues with Unity script update ordering
        public void UpdateInternal()
        {
            Profiler.BeginSample("OvrAvatarGpuSkinningController::UpdateInternal");

            Profiler.BeginSample("OvrAvatarGpuSkinningController.CombinerCalls");
            foreach (var combiner in _activeCombinerList)
            {
                combiner.CombineMorphTargetWithCurrentWeights();
            }
            _activeCombinerList.Clear();
            Profiler.EndSample(); // "OvrAvatarGpuSkinningController.CombinerCalls"

            Profiler.BeginSample("OvrAvatarGpuSkinningController.SkinnerCalls");
            foreach (var skinner in _activeSkinnerList)
            {
                skinner.UpdateOutputTexture();
            }
            _activeSkinnerList.Clear();
            Profiler.EndSample(); // "OvrAvatarGpuSkinningController.SkinnerCalls"


            Profiler.EndSample();
        }
    }
}
