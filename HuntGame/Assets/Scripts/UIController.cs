using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour
{
    public bool LoginSuccess;
    public GameObject LoginMenu, StartGameMenu,SettingsMenu,ShopMenu;
    void Start()
    {
        LoginSuccess = false;
        StartGameMenu.SetActive(false);
        LoginMenu.SetActive(true);
        SettingsMenu.SetActive(false);
        ShopMenu.SetActive(false);
    }

   public void Login()
    {
        if(LoginSuccess == true)
        {
        StartGameMenu.SetActive(true);
        LoginMenu.SetActive(false);
        SettingsMenu.SetActive(false);
        ShopMenu.SetActive(false);
        }

    }
    public void Settings()
    {
            StartGameMenu.SetActive(false);
            LoginMenu.SetActive(false);
            SettingsMenu.SetActive(true);
            ShopMenu.SetActive(false);
    }
    public void CloseSettings()
    {
        ShopMenu.SetActive(false);
        StartGameMenu.SetActive(true);
        LoginMenu.SetActive(false);
        SettingsMenu.SetActive(false);
    }
    public void Shop()
    {
        StartGameMenu.SetActive(false);
        LoginMenu.SetActive(false);
        SettingsMenu.SetActive(false);
        ShopMenu.SetActive(true);
    }
}
