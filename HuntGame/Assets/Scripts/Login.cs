using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Login : MonoBehaviour
{
    public Shop shop;
    private bool LogedIn;
    public UIController UI;
    public Text usernametxt, balancetxt;
    public string username, balance;
    public userSelect user;
    public InputField email, password;
    void Start()
    {
        Debug.Log(PlayerPrefs.GetString("Username"));
        Debug.Log(PlayerPrefs.GetInt("LoggedIn"));
        LogedIn = false;

    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerPrefs.GetInt("LoggedIn") == 1 & user.userData.Length>0 & LogedIn == false)
        {
            AutoLogIn();

        }
    }
    public void AutoLogIn()
    {
        
        for (int i = 1; i < user.userData.Length;)
        {
            if (PlayerPrefs.GetString("Username") == user.userData[i])
            {
                username = user.userData[i];
                balance = user.userData[i + 3];
                usernametxt.text = username;
                balancetxt.text = balance;
                UI.LoginSuccess = true;
                UI.Login();
                LogedIn = true;
                shop.Parse();
                break;
            }
            else
            {
                i += 4;
            }
        }
        
    }
    public void LoginFunc()
    {
        if (PlayerPrefs.GetInt("LoggedIn") == 0)
        {
            for (int i = 2; i < user.userData.Length;)
            {
                if (email.text == user.userData[i] & password.text == user.userData[i + 1])
                {
                    username = user.userData[i - 1];
                    balance = user.userData[i + 2];
                    usernametxt.text = username;
                    balancetxt.text = balance;
                    UI.LoginSuccess = true;
                    PlayerPrefs.SetInt("LoggedIn", 1);
                    PlayerPrefs.SetString("Username", username);
                    LogedIn = true;
                    shop.Parse();
                    break;
                }
                else
                {
                    i += 4;
                }
            }

        }
        
    } 
}
