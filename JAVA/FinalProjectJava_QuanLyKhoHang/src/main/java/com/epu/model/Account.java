/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class Account {
    private int AccountId;
    private String AccountName;
    private String Username;
    private String Password;
    private String Role;
    private String Email;
    private String Phone;

    public Account() {
    }

    public Account(int AccountId, String AccountName, String Username, String Password, String Role, String Email, String Phone) {
        this.AccountId = AccountId;
        this.AccountName = AccountName;
        this.Username = Username;
        this.Password = Password;
        this.Role = Role;
        this.Email = Email;
        this.Phone = Phone;
    }

    public Account(int AccountId, String AccountName, String Username, String Role, String Email, String Phone) {
        this.AccountId = AccountId;
        this.AccountName = AccountName;
        this.Username = Username;
        this.Role = Role;
        this.Email = Email;
        this.Phone = Phone;
    }
    
    

    public int getAccountId() {
        return AccountId;
    }

    public String getAccountName() {
        return AccountName;
    }

    public String getUsername() {
        return Username;
    }
    
    public String getRole() {
        return Role;
    }

    public String getEmail() {
        return Email;
    }

    public String getPhone() {
        return Phone;
    }

    public void setAccountId(int AccountId) {
        this.AccountId = AccountId;
    }

    public void setAccountName(String AccountName) {
        this.AccountName = AccountName;
    }

    public void setUsername(String Username) {
        this.Username = Username;
    }

    public void setPassword(String Password) {
        this.Password = Password;
    }

    public void setRole(String Role) {
        this.Role = Role;
    }

    public void setEmail(String Email) {
        this.Email = Email;
    }

    public void setPhone(String Phone) {
        this.Phone = Phone;
    }
    
    
    
}
