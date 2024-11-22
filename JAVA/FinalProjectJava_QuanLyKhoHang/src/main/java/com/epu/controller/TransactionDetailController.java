/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.TransactionDetail;
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
public class TransactionDetailController implements ModelDao<TransactionDetail, Integer>{

    Connection conn = null;
    
    @Override
    public List<TransactionDetail> getAll() {
        List<TransactionDetail> tranDTs = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from TransactionDetail";
            
            Statement st = conn.createStatement();
            
            ResultSet rs =  st.executeQuery(sql);
            
            while(rs.next())
            {
                int tranDetailId = rs.getInt("TransactionDetailId");
                int tranId = rs.getInt("TransactionId");
                int wareHouseId = rs.getInt("WareHouseId");
                int shelfId = rs.getInt("ShelfId");
                int proId = rs.getInt("ProductId");
                int quantity = rs.getInt("Quantity");
                float total = rs.getFloat("Total");
                boolean status = rs.getBoolean("Status");
                TransactionDetail td = new TransactionDetail(tranDetailId, tranDetailId, wareHouseId, shelfId, proId, quantity, total, status);
                tranDTs.add(td);
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return tranDTs;
    }

    @Override
    public boolean Insert(TransactionDetail model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Insert into TransactionDetail(TransactionId,WareHouseId,ShelfId,ProductId,Quantity,Total,Status) VALUES (?,?,?,?,?,?,?)";
            PreparedStatement pts = conn.prepareStatement(sql);    
            pts.setInt(1, model.getTransactionId());
            pts.setInt(2, model.getWareHouseId());
            pts.setInt(3, model.getShelfId());
            pts.setInt(4, model.getProductId());
            pts.setInt(5, model.getQuantity());
            pts.setFloat(6, model.getTotal());
            pts.setBoolean(7, model.isStatus());
            
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
    public boolean Update(TransactionDetail model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Update TransactionDetail Set TransactionId = ? , WareHouseId = ? , ShelfId = ?,ProductId = ? , Quantity = ?,Total = ?,Status = ? where TransactionDetailId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(8, model.getTransactionDetailId());
            pts.setInt(1, model.getTransactionId());
            pts.setInt(2, model.getWareHouseId());
            pts.setInt(3, model.getShelfId());
            pts.setInt(4, model.getProductId());
            pts.setInt(5, model.getQuantity());
            pts.setFloat(6, model.getTotal());
            pts.setBoolean(7, model.isStatus());
            
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
            String sql = "Delete TransactionDetail Where TransactionDetailId = ?";
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
    
    public List<TransactionDetail> getByTransactionId(int id)
    {
        List<TransactionDetail> tdt = new ArrayList<>();
        
        try {
            conn  = new ConnectDb().getConnect();
            
            String sql = "Select * from TransactionDetail where TransactionId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, id);
            
            ResultSet rs = pts.executeQuery();
            
            while(rs.next())
            {
                int tranDetailId = rs.getInt("TransactionDetailId");
                int tranId = rs.getInt("TransactionId");
                int wareHouseId = rs.getInt("WareHouseId");
                int shelfId = rs.getInt("ShelfId");
                int proId = rs.getInt("ProductId");
                int quantity = rs.getInt("Quantity");
                float total = rs.getFloat("Total");
                boolean status = rs.getBoolean("Status");
                TransactionDetail td = new TransactionDetail(tranDetailId, tranId, wareHouseId, shelfId, proId, quantity, total, status);
                tdt.add(td);
            }

            if(conn != null)
                conn.close();
        } catch (SQLException ex) {
            Logger.getLogger(TransactionDetailController.class.getName()).log(Level.SEVERE, null, ex);
        }
         
        return tdt;
    }
    
    public TransactionDetail getById(int tranDetailId)
    {
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from TransactionDetail where TransactionDetailId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, tranDetailId);

            ResultSet rs = pts.executeQuery();
            if (rs.next()) {
                int tranId = rs.getInt("TransactionId");
                int whId = rs.getInt("WareHouseId");
                int sId = rs.getInt("ShelfId");
                int proId = rs.getInt("ProductId");
                int quantity = rs.getInt("Quantity");
                float total = rs.getFloat("Total");
                boolean status = rs.getBoolean("Status");
                TransactionDetail t = new TransactionDetail(tranDetailId, tranId, proId, sId, proId, quantity, total, status);
                return t;
            }

            if (conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(TransactionDetailController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        return null;
    }
    
    
}
