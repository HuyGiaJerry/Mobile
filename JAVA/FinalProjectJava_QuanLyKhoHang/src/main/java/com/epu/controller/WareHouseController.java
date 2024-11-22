/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.WareHouse;
import java.sql.Connection;
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
public class WareHouseController implements ModelDao<WareHouse, Integer>{

    Connection conn = null;
    
    @Override
    public List<WareHouse> getAll() {
        List<WareHouse> whs = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from WareHouse";
            
            Statement st = conn.createStatement();
            
            ResultSet rs = st.executeQuery(sql);
            while(rs.next())
            {
                WareHouse w = new WareHouse();
                w.setWareHouseId(rs.getInt("WareHouseId"));
                w.setWareHouseName(rs.getString("WareHouseName"));
                w.setLocation(rs.getString("Location"));
                whs.add(w);
            }
            
            if(conn != null)
                conn.close();
        
            
        } catch (SQLException ex) {
            Logger.getLogger(WareHouseController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        return whs;
    }

    @Override
    public boolean Insert(WareHouse model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Update(WareHouse model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Delete(Integer id) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    
    
    
}
