/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.model.Account;
import com.epu.model.ConnectDb;
import com.epu.model.Cypher;
import java.io.UnsupportedEncodingException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ASUS
 */
public class AccountController {
    public boolean checkExistUsername(String username) throws SQLException
    {
        boolean ck = false;
        
        Connection conn = null;
        
        conn = new ConnectDb().getConnect();
        
        String sql = "Select COUNT(*) FROM Account Where Username = ?";
        
        PreparedStatement pts = conn.prepareStatement(sql);
        
        pts.setString(1, username);
        
        ResultSet rs = pts.executeQuery();
        
        if(rs.next())
        {
            if(rs.getInt(1) > 0)
                ck = true;
        }
        if(conn != null)
            conn.close();
        
        return ck;
    }
    
    public boolean checkPassword(String username,String pass) throws SQLException, UnsupportedEncodingException
    {
        boolean ck = false;
        
        Connection conn = null;
        
        conn = new ConnectDb().getConnect();
        
        String sql = "Select Password From Account where Username = ?";
        PreparedStatement pts = conn.prepareStatement(sql);
        pts.setString(1, username);
        
        ResultSet rs = pts.executeQuery();
        
        if(rs.next())
        {
            if(rs.getString("Password").equals(new Cypher().Encrypt(pass)))
                ck = true;
        }
        if(conn != null)
            conn.close();          
        return ck;        
    }
    
    public Account getAccount(String userName,String pass) throws SQLException, UnsupportedEncodingException
    {
        Account acc = new Account();
        Connection conn = null;
        
        conn = new ConnectDb().getConnect();
        String sql = "Select * from Account where Username = ? and Password = ?";
        PreparedStatement pts = conn.prepareStatement(sql);
        pts.setString(1, userName);
        pts.setString(2, new Cypher().Encrypt(pass));
        
        ResultSet rs = pts.executeQuery();
        if(rs.next())
        {
            acc.setAccountId(rs.getInt("AccountId"));
            acc.setAccountName(rs.getString("AccountName"));
            acc.setUsername(userName);
            acc.setPassword(pass);
            acc.setRole(rs.getString("Role"));
            acc.setEmail(rs.getString("Email"));
            acc.setPhone(rs.getString("Phone"));            
        }
        if(conn != null)
            conn.close();
        return acc;
    }
    
    
    public Account getAccountById(int id)
    {
        Connection conn = null;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from Account where AccountId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1,id);
            
            
            ResultSet rs = pts.executeQuery();
            if(rs.next())
            {
                int accId = (rs.getInt("AccountId"));
                String accName = (rs.getString("AccountName"));
                String userName = rs.getString("Username");
                String role = (rs.getString("Role"));
                String email = (rs.getString("Email"));            
                String phone = (rs.getString("Phone"));
                Account acc = new Account(accId, accName, userName, role, email, phone);
                return acc;
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            
            Logger.getLogger(AccountController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return null;
        
    }
    
    public boolean isAcceiptUser(String userName, String email) {
        Connection conn = null;
        PreparedStatement pts = null;
        ResultSet rs = null;

        try {
            conn = new ConnectDb().getConnect(); 
            String sql = "SELECT * FROM Account WHERE Username = ? AND Email = ?";
            pts = conn.prepareStatement(sql); 
            pts.setString(1, userName);
            pts.setString(2, email);

            rs = pts.executeQuery(); 

            return rs.next();
        } catch (SQLException ex) {
            Logger.getLogger(AccountController.class.getName()).log(Level.SEVERE, null, ex);
            return false;
        } finally {
            try {
                if (rs != null) {
                    rs.close();
                }
                if (pts != null) {
                    pts.close();
                }
                if (conn != null) {
                    conn.close();
                }
            } catch (SQLException ex) {
                Logger.getLogger(AccountController.class.getName()).log(Level.SEVERE, "Error closing resources", ex);
            }
        }
    }

    public boolean updatePassword(String username,String newPass)
    {
        Connection conn = null;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Update Account set Password = ? where Username = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            try {
                pts.setString(1, new Cypher().Encrypt(newPass));
            } catch (UnsupportedEncodingException ex) {
                Logger.getLogger(AccountController.class.getName()).log(Level.SEVERE, null, ex);
            }
            pts.setString(2, username);
            if(pts.executeUpdate() > 0)
                return true;
            if(conn != null)
                conn.close();

        } catch (SQLException ex) {
            Logger.getLogger(AccountController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return false;
    }
    
}
