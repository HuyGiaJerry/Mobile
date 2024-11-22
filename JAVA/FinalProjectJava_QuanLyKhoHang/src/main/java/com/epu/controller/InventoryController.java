/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.Inventory;
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
public class InventoryController implements ModelDao<Inventory, Integer>{

    Connection conn = null;
    
    @Override
    public List<Inventory> getAll() {
        List<Inventory> is = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from Inventory";
            
            Statement st = conn.createStatement();
            ResultSet rs = st.executeQuery(sql);
            
            while(rs.next())
            {
                Inventory i = new Inventory();
                i.setInventyId(rs.getInt("InventoryId"));
                i.setProductId(rs.getInt("ProductId"));
                i.setWareHouseId(rs.getInt("WareHouseId"));
                i.setShelfId(rs.getInt("ShelfId"));
                i.setQuantity(rs.getInt("Quantity"));
                is.add(i);
            }
            
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(InventoryController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        return is;
    }

    @Override
    public boolean Insert(Inventory model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Insert into Inventory(ProductId,WareHouseId,ShelfId,Quantity) VALUES (?,?,?,?)";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, model.getProductId());
            pts.setInt(2, model.getWareHouseId());
            pts.setInt(3, model.getShelfId());
            pts.setInt(4, model.getQuantity());
            
            
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
    public boolean Update(Inventory model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Update Inventory set ProductId = ?, WareHouseId = ?, ShelfId = ?, Quantity = ? where InventoryId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(5, model.getInventyId());
            pts.setInt(1, model.getProductId());
            pts.setInt(2, model.getWareHouseId());
            pts.setInt(3, model.getShelfId());
            pts.setInt(4, model.getQuantity());
            
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
            String sql = "Delete Inventory Where InventoryId = ?";
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
    
    
    public Inventory getById(int id)
    {
        Inventory i = new Inventory();
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from Inventory where InventoryId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, id);
            
            ResultSet rs = pts.executeQuery();
            if(rs.next())
            {
                i.setInventyId(rs.getInt("InventoryId"));
                i.setProductId(rs.getInt("ProductId"));
                i.setWareHouseId(rs.getInt("WareHouseId"));
                i.setShelfId(rs.getInt("ShelfId"));
                i.setQuantity(rs.getInt("Quantity"));
                return i;
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(InventoryController.class.getName()).log(Level.SEVERE, null, ex);
        }
         
        return null;
    }
    
    public List<Inventory> getByWareHouseId(int id)
    {
        List<Inventory> lis = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from Inventory where WareHouseId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            
            pts.setInt(1, id);
            ResultSet rs = pts.executeQuery();
            
            while(rs.next())
            {
                Inventory i = new Inventory();
                i.setInventyId(rs.getInt("InventoryId"));
                i.setProductId(rs.getInt("ProductId"));
                i.setWareHouseId(rs.getInt("WareHouseId"));
                i.setShelfId(rs.getInt("ShelfId"));
                i.setQuantity(rs.getInt("Quantity"));
                lis.add(i);
            }
            if(conn != null)
                conn.close();
            
            return lis;
            
        } catch (SQLException ex) {
            Logger.getLogger(InventoryController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        return null;
    }
    
   
}
