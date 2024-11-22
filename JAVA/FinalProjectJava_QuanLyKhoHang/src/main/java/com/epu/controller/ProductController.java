/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.controller;

import com.epu.dao.ModelDao;
import com.epu.model.ConnectDb;
import com.epu.model.Product;
import java.sql.Connection;
import java.util.Date;
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
public class ProductController implements ModelDao<Product, Integer>{

    private Connection conn = null;
    
    @Override
    public List<Product> getAll() {
        List<Product> products = new ArrayList<>();
        try {
            conn = new ConnectDb().getConnect();
            
            String sql = "Select * from Product";
            
            Statement st = conn.createStatement();
            
            ResultSet rs =  st.executeQuery(sql);
            
            while(rs.next())
            {
                int id = rs.getInt("ProductId");
                String productName = rs.getString("ProductName");
                String Unit = rs.getString("Unit");
                float Price = rs.getFloat("Price");
                String Descrip = rs.getString("Description");
                Date createDate = rs.getDate("CreateAt");
                int cateId = rs.getInt("CategoryId");
                Product p = new Product( id,productName, Unit, Price, Descrip, createDate, cateId);
                products.add(p);
            }
            if(conn != null)
                conn.close();
            
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        }
        return products;
    }

    @Override
    public boolean Insert(Product model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Insert into Product(ProductName,Unit,Price,Description,CreateAt,CategoryId) VALUES (?,?,?,?,?,?)";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setString(1, model.getProductName());
            pts.setString(2, model.getUnit());
            pts.setFloat(3, model.getPrice());
            pts.setString(4, model.getDescription());
            pts.setDate(5, new java.sql.Date(model.getCreateAt().getTime()));
            pts.setInt(6, model.getCategoryId());
            
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
    public boolean Update(Product model) {
        boolean ck = false;
        try {
            conn = new ConnectDb().getConnect();
            String sql = "Update Product set ProductName = ? , Unit = ?, Price = ?, Description = ?, CreateAt = ?,CategoryId = ? where ProductId = ?";
            PreparedStatement pts = conn.prepareStatement(sql);
            pts.setInt(7, model.getProductId());
            pts.setString(1, model.getProductName());
            pts.setString(2, model.getUnit());
            pts.setFloat(3, model.getPrice());
            pts.setString(4, model.getDescription());
            pts.setDate(5, new java.sql.Date(model.getCreateAt().getTime()));
            pts.setInt(6, model.getCategoryId());
            
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
            String sql = "Delete Product Where ProductId = ?";
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

   
    public List<Product> searchNamePrice(String name, float fromPrice, float toPrice) {
        List<Product> products = new ArrayList<>();
        PreparedStatement stmt = null;

        try {
            conn = new ConnectDb().getConnect();
            StringBuilder query = new StringBuilder("SELECT * FROM Product WHERE 1=1");
            List<Object> params = new ArrayList<>();
            if (name != null && !name.isEmpty()) {
                query.append(" AND ProductName LIKE ?");
                params.add("%" + name + "%");
            }
           
            if (fromPrice > 0) {
                query.append(" AND Price >= ?");
                params.add(fromPrice);
            }

            if (toPrice > 0) {
                query.append(" AND Price <= ?");
                params.add(toPrice);
            }
            stmt = conn.prepareStatement(query.toString());
            for (int i = 0; i < params.size(); i++) {
                stmt.setObject(i + 1, params.get(i));
            }
            ResultSet rs = stmt.executeQuery();
            while (rs.next()) {
                Product product = new Product();
                product.setProductId(rs.getInt("ProductId"));
                product.setProductName(rs.getString("ProductName"));
                product.setPrice(rs.getFloat("Price"));
                product.setUnit(rs.getString("Unit"));
                product.setCategoryId(rs.getInt("CategoryId"));
                product.setCreateAt(  rs.getDate("CreateAt"));
                product.setDescription(rs.getString("Description"));
                products.add(product);
            }
        } catch (SQLException ex) {
            Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                if (stmt != null)
                    stmt.close();
                if (conn != null) 
                    conn.close();
            } catch (SQLException ex) {
                Logger.getLogger(ProductController.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        return products;
    }
    
    public Product getById(int id) throws SQLException
    {
        conn = new ConnectDb().getConnect();
        String sql = "Select * from Product where ProductId = ?";
        PreparedStatement pts = conn.prepareStatement(sql);
        pts.setInt(1, id);
        
        ResultSet rs = pts.executeQuery();
        if(rs.next())
        {
            String name = rs.getString("ProductName");
            String unit = rs.getString("Unit");
            float price = rs.getFloat("Price");
            String des = rs.getString("Description");
            Date createAt = rs.getDate("CreateAt");
            int cateId = rs.getInt("CategoryId");
            Product p = new Product(id, name, unit, price, des, createAt, cateId);
            return p;
        }
        
        if(conn != null)
            conn.close();
        
        return null;
        
    }
    
    
}

    

