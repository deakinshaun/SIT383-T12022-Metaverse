using Honeti;
using Photon.Chat;
using Photon.Chat.Demo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CustomChatGUI : ChatGui
{
    private I18N translator;
    Text[] channelTextToJoin;
    public override void Start()
    {
        base.Start();
        translator = I18N.instance;
    }

    public override void OnConnected()
    {
        
        this.UserIdText.text = "Connected as " + this.UserName;

        if (this.channelTextToJoin != null && this.channelTextToJoin.Length > 0)
        {
            string[] channelNames = new string[channelTextToJoin.Length];
            for(int i = 0; i < channelTextToJoin.Length; i++)
            {
                channelNames[i] = channelTextToJoin[i].text;
            }

            this.chatClient.Subscribe(channelNames, this.HistoryLengthToFetch);
            
        }


        this.ConnectingLabel.SetActive(false);


        this.ChatPanel.gameObject.SetActive(true);

        if (this.FriendsList != null && this.FriendsList.Length > 0)
        {
            this.chatClient.AddFriends(this.FriendsList); // Add some users to the server-list to get their status updates

            // add to the UI as well
            foreach (string _friend in this.FriendsList)
            {
                if (this.FriendListUiItemtoInstantiate != null && _friend != this.UserName)
                {
                    this.InstantiateFriendButton(_friend);
                }

            }
        }

        if (this.FriendListUiItemtoInstantiate != null)
        {
            this.FriendListUiItemtoInstantiate.SetActive(false);
        }

        this.chatClient.SetOnlineStatus(ChatUserStatus.Online); // You can set your online state (without a mesage).
        translator.setLanguage("EN");

    }
}
