/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ASUS
 */
public class ConnectDb {
    private Connection conn = null;
    
    public Connection getConnect() throws SQLException
    {
        try {
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            
            String urlSql = "jdbc:sqlserver://localhost:"+1433+";databaseName=QuanLyKhoHang;encrypt=false;";
            
            conn = DriverManager.getConnection(urlSql,"sa","1234$");
            
            System.out.println("Connect Db Success !");
            
            
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(ConnectDb.class.getName()).log(Level.SEVERE, null, ex);
        }
        return conn;
    }
    
}
