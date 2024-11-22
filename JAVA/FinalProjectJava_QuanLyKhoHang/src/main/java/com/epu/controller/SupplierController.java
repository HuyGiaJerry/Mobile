/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.Supplier;
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
public class SupplierController implements ModelDao<Supplier, Integer>{
    Connection conn = null;
    @Override
    public List<Supplier> getAll() {
        List<Supplier> list = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Select * from Supplier";
            Statement st = conn.createStatement();
            ResultSet rs = st.executeQuery(sql);
            
            while(rs.next())
            {
                Supplier spp = new Supplier();
                spp.setSupplierId(rs.getInt("SupplierId"));
                spp.setSupplierName(rs.getString("SupplierName"));
                spp.setPhoneNumber(rs.getString("PhoneNumber"));
                spp.setAddress(rs.getString("Address"));
                list.add(spp);
            }
            
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(SupplierController.class.getName()).log(Level.SEVERE, null, ex);
        }
      
        
        
        return list;
    }

    @Override
    public boolean Insert(Supplier model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Update(Supplier model) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public boolean Delete(Integer id) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    
}
