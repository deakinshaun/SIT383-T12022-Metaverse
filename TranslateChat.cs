using System.Collections;
using System.Collections.Generic;
using UniLang;
using UnityEngine;
using UnityEngine.UI;

public class TranslateChat : MonoBehaviour
{
    public InputField chatBox;

    private string selectedLanguage = Language.English;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Translate()
    {
        string chatText = chatBox.text;
        Translator translator = Translator.Create(Language.English, selectedLanguage);
        translator.Run(chatText, results =>
        {
            foreach(var result in results)
            {
                string translatedText = result.translated;
                chatBox.text = translatedText;
            }
        });
    }

    public void ToGerman()
    {
        selectedLanguage = Language.German;
    }

    public void ToJapanese()
    {
        selectedLanguage = Language.Japanese;
    }

    public void ToKorean()
    {
        selectedLanguage = Language.Korean;
    }
    public void ToHindi()
    {
        selectedLanguage = Language.Hindi;
    }
    public void ToItalian()
    {
        selectedLanguage = Language.Italian;
    }
}
