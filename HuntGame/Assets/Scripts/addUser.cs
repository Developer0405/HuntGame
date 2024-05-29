using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class addUser : MonoBehaviour
{
    public Shop shop;
    public UIController UI;
    private string URL = "http://localhost/mydb/userInsert.php";
    public Text UserName, Money;
    public InputField Username, Email, Password;
    public void AddUser()
    {
        if (Username.text != "" & Email.text != "" & Password.text != "")
        {
            UserName.text = Username.text;
            Money.text = "100";
            UI.LoginSuccess = true;
            UpdateMoneyValue();
        }

    }
    public void UpdateMoneyValue()
    {
        
        WWWForm form = new WWWForm();
        form.AddField("addUsername", Username.text);
        form.AddField("addEmail", Email.text);
        form.AddField("addPassword", Password.text);
        form.AddField("addMoney", 100);


        WWW www = new WWW(URL, form);
        if(Username.text != null & Email.text != null & Password.text != null)
        {
        UserName.text = Username.text;
        Money.text = "100";
            UI.LoginSuccess = true;
            shop.Parse();
        }

        Debug.Log("Sent");
    }

}

