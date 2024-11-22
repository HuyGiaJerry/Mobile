/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class Category {
    private int CategoyId;
    private String CategoryName;

    public Category() {
    }

    public Category(int CategoyId, String CategoryName) {
        this.CategoyId = CategoyId;
        this.CategoryName = CategoryName;
    }

    public void setCategoyId(int CategoyId) {
        this.CategoyId = CategoyId;
    }

    public void setCategoryName(String CategoryName) {
        this.CategoryName = CategoryName;
    }

    public int getCategoyId() {
        return CategoyId;
    }

    public String getCategoryName() {
        return CategoryName;
    }
    
    
    
    
}
