/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.Transaction;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.apache.xmlbeans.impl.regex.REUtil;

/**
 *
 * @author ASUS
 */
public class TransactionController implements ModelDao<Transaction, Integer>{
    
    Connection conn = null;
    
    @Override
    public List<Transaction> getAll() {
        List<Transaction> trans = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from [Transaction]";
            
            Statement st = conn.createStatement();
            
            ResultSet rs =  st.executeQuery(sql);
            
            while(rs.next())
            {
                int tranId = rs.getInt("TransactionId");
                int supplierId = rs.getInt("SupplierId");
                float batchNum = rs.getFloat("BatchNumber");
                String tranType = rs.getString("TransactionType");
                Date createDate = rs.getDate("CreateDate");
                int accId = rs.getInt("AccountId");
                float total = rs.getFloat("Total");
                Transaction t = new Transaction(tranId, supplierId, batchNum, tranType, createDate, accId, total);
                trans.add(t);
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return trans;
    }

    @Override
    public boolean Insert(Transaction model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Insert into [Transaction](SupplierId,BatchNumber,TransactionType,CreateDate,AccountId,Total) VALUES (?,?,?,?,?,?)";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, model.getSupplierId());
            pts.setInt(2, (int) model.getBatchNumber());
            pts.setString(3, model.getTransactionType());
            pts.setDate(4, new java.sql.Date(model.getCreateDate().getTime()));
            pts.setInt(5, model.getAccountId());
            pts.setFloat(6, model.getTotal());
            
            if(pts.executeUpdate() > 0)
                ck = true;
            
            if(conn != null)
                conn.close();
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
            
        return ck;
    }

    @Override
    public boolean Update(Transaction model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Update [Transaction] Set SupplierId = ? , BatchNumber = ?, TransactionType = ?,CreateDate = ?,AccountId = ? , Total = ? where TransactionId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(7, model.getTransactionId());
            pts.setInt(1, model.getSupplierId());
            pts.setInt(2, (int) model.getBatchNumber());
            pts.setString(3, model.getTransactionType());
            pts.setDate(4, new java.sql.Date(model.getCreateDate().getTime()));
            pts.setInt(5, model.getAccountId());
            pts.setFloat(6, model.getTotal());
            
            if(pts.executeUpdate() > 0)
                ck = true;
            
            if(conn != null)
                conn.close();
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
            
        return ck;
    }

    @Override
    public boolean Delete(Integer id) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Delete Transaction Where TransactionId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, id);
            if(pts.executeUpdate() > 0)
                ck = true;
            if(conn != null)
                conn.close();
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        } 
        return ck;
    }
    
    
    public int getTransactionJustInsert(int suppId,float batchNum,String tranType,int accId)
    {
        int tranId = 0;
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select TransactionId from [Transaction] where SupplierId = ? and BatchNumber = ? and TransactionType = ? and AccountId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, suppId);
            pts.setFloat(2, batchNum);
            pts.setString(3, tranType);
            pts.setInt(4, accId);
            
            ResultSet rs = pts.executeQuery();
            
            if(rs.next())
            {
                tranId = rs.getInt("TransacionId");
                return tranId;
            }
            if(conn != null)
                conn.close();
        } catch (SQLException ex) {
            Logger.getLogger(TransactionController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        
        
        return tranId;
    }
    
    public Transaction getById(int tranId)
    {
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from [Transaction] where TransactionId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, tranId);
            ResultSet rs = pts.executeQuery();
            
            if(rs.next())
            {
                Transaction t = new Transaction();
                t.setTransactionId(tranId);
                t.setSupplierId(rs.getInt("SupplierId"));
                t.setBatchNumber(rs.getFloat("BatchNumber"));
                t.setTransactionType(rs.getString("TransactionType"));
                t.setCreateDate(rs.getDate("CreateDate"));
                t.setAccountId(rs.getInt("AccountId"));
                t.setTotal(rs.getFloat("Total"));
                return t;
            }
            
            
        } catch (SQLException ex) {
            Logger.getLogger(TransactionController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return null;
    }
    
    
}
