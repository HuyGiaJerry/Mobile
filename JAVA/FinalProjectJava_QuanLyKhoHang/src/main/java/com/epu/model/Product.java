/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import java.util.Date;


/**
 *
 * @author JerryNguyen
 */
public class Product {
    private int ProductId;
    private String ProductName;
    private String Unit;
    private float Price;
    private String Description;
    private Date CreateAt;
    private int CategoryId;

    public Product() {
    }

    public Product(int ProductId, String ProductName, String Unit, float Price, String Description, Date CreateAt, int CategoryId) {
        this.ProductId = ProductId;
        this.ProductName = ProductName;
        this.Unit = Unit;
        this.Price = Price;
        this.Description = Description;
        this.CreateAt = CreateAt;
        this.CategoryId = CategoryId;
    }

    
    
    public Product(String ProductName, String Unit, float Price, String Description, Date CreateAt, int CategoryId) {
        this.ProductName = ProductName;
        this.Unit = Unit;
        this.Price = Price;
        this.Description = Description;
        this.CreateAt = CreateAt;
        this.CategoryId = CategoryId;
    }

    public int getProductId() {
        return ProductId;
    }

    public String getProductName() {
        return ProductName;
    }

    public String getUnit() {
        return Unit;
    }

    public float getPrice() {
        return Price;
    }

    public String getDescription() {
        return Description;
    }

    public Date getCreateAt() {
        return CreateAt;
    }

    public int getCategoryId() {
        return CategoryId;
    }

    public void setProductId(int ProductId) {
        this.ProductId = ProductId;
    }

    public void setProductName(String ProductName) {
        this.ProductName = ProductName;
    }

    public void setUnit(String Unit) {
        this.Unit = Unit;
    }

    public void setPrice(float Price) {
        this.Price = Price;
    }

    public void setDescription(String Description) {
        this.Description = Description;
    }

    public void setCreateAt(Date CreateAt) {
        this.CreateAt = CreateAt;
    }

    public void setCategoryId(int CategoryId) {
        this.CategoryId = CategoryId;
    }

    
}
