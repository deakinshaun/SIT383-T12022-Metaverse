using UniLang;
using UnityEngine;

namespace UniLang {
    public class Example : MonoBehaviour {
	    void Start () {
            var myText = "Weather is great here";
            Translator translator = Translator.Create(Language.Auto, Language.German);
            translator.Run(myText, results => {
                foreach (var result in results)
                    Debug.Log(result.original + " => " + result.translated);
            });
	    }
    }
}
