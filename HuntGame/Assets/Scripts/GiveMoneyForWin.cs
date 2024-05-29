using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;

public class GiveMoneyForWin : MonoBehaviour
{

    private string balance;
    private string URL = "http://localhost/mydb/userUpdate.php";
    private string URLGetUser = "http://localhost/mydb/userSelect.php";
    public string[] userData;

    //[System.Obsolete]
    IEnumerator Start()
    {

        UnityWebRequest user = UnityWebRequest.Get(URLGetUser);
        yield return user.SendWebRequest();
        if (user.isNetworkError)
            Debug.Log("Error:" + user.error);
        else
        {
            string userDataString = user.downloadHandler.text;
            userData = userDataString.Split('|');
        }
    }
    public IEnumerator UpdateMoneyValue(string username)
    {
        
        for (int i = 1; i < userData.Length;)
        {
            if (username == userData[i])
            { 
                balance = userData[i + 3];

                int newBalance = Int32.Parse(balance) + 20;
                WWWForm form = new WWWForm();
                form.AddField("editMoney", newBalance.ToString());
                form.AddField("Username", username);
                WWW www = new WWW(URL, form);
                yield return www;
                break;
            }
            else
            {
                i += 4;
            }
        }

    }
}