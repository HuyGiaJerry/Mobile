/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class SessionManager {
    private static SessionManager instance;
    private int accountId;

    private SessionManager() {
    }
    
    public static synchronized SessionManager getInstance()
    {
        if(instance == null)
            instance = new SessionManager();
        return instance;
    }
    
    public int getAccountId()
    {
        return accountId;
    }
    public void setAccountId(int accId)
    {
        this.accountId = accId;
    }
    
}
