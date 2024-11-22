/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.Shelf;
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
public class ShelfController implements ModelDao<Shelf, Integer>{

    Connection conn = null;    
    
    @Override
    public List<Shelf> getAll() {
        List<Shelf> shelfs = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from Product";
            
            Statement st = conn.createStatement();
            
            ResultSet rs =  st.executeQuery(sql);
            
            while(rs.next())
            {
                int id = rs.getInt("ShelfId");
                String location = rs.getString("Location");
                int warehouseId = rs.getInt("WareHouseId");
                
                Shelf s = new Shelf(id, location, warehouseId);
                shelfs.add(s);
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return shelfs;
    }

    @Override
    public boolean Insert(Shelf model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Update(Shelf model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Delete(Integer id) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
    public List<Shelf> getByWareHouseId(int id)
    {
        List<Shelf> list = new ArrayList<>();
        
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from Shelf where WareHouseId = ?";
            
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(1, id);
            
            ResultSet rs = pts.executeQuery();
            while(rs.next())
            {
                Shelf s = new Shelf();
                s.setShelfId(rs.getInt("ShelfId"));
                s.setLocation(rs.getString("location"));
                s.setWareHouseId(rs.getInt("WareHouseId"));
                list.add(s);
            }
            if(conn != null)
                conn.close();
            
            
            return list;
        } catch (SQLException ex) {
            Logger.getLogger(ShelfController.class.getName()).log(Level.SEVERE, null, ex);
        }

        return null;
    }
    
}
