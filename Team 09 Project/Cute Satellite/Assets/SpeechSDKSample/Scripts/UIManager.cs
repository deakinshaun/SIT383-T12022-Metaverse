//

//
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.CognitiveServices.Speech;


public class UIManager : MonoBehaviour {

    public Dropdown LanguageList1;
    public Dropdown LanguageList2;
    public Dropdown LanguageList3;


    void Start () {

        List<string> languages = new List<string>();
        foreach (TranslationLanguages language in Enum.GetValues(typeof(TranslationLanguages)))
        {
            languages.Add(language.ToString());
        }
        LanguageList1.AddOptions(languages);
        LanguageList2.AddOptions(languages);
        LanguageList3.AddOptions(languages);
        // Pick some default languages for translation, users can change this
        LanguageList1.value = (int)TranslationLanguages.fr_French;
        LanguageList2.value = (int)TranslationLanguages.es_Spanish;
        LanguageList3.value = (int)TranslationLanguages.de_German;
    }

  
    // https://docs.microsoft.com/azure/cognitive-services/speech-service/language-support
    public enum TranslationLanguages
    {
        ar_Arabic,
        zh_Chinese_Mandarin,
        nl_Dutch,
        en_English,
        fr_French,
        de_German,
        it_Italian,
        ja_Japanese,
        ko_Korean,
        pt_Portuguese_Brazilian,
        ru_Russian,
        es_Spanish,
        sv_Swedish,
        tlh_Klingon   
    }
}
