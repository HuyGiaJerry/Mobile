/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class Inventory {
    private int InventyId;
    private int ProductId;
    private int WareHouseId;
    private int ShelfId;
    private int Quantity;

    public Inventory() {
    }

    public Inventory(int InventyId, int ProductId, int WareHouseId, int ShelfId, int Quantity) {
        this.InventyId = InventyId;
        this.ProductId = ProductId;
        this.WareHouseId = WareHouseId;
        this.ShelfId = ShelfId;
        this.Quantity = Quantity;
    }

    public Inventory(int ProductId, int WareHouseId, int ShelfId, int Quantity) {
        this.ProductId = ProductId;
        this.WareHouseId = WareHouseId;
        this.ShelfId = ShelfId;
        this.Quantity = Quantity;
    }
    
    
    

    public int getInventyId() {
        return InventyId;
    }

    public int getProductId() {
        return ProductId;
    }

    public int getWareHouseId() {
        return WareHouseId;
    }

    public int getShelfId() {
        return ShelfId;
    }

    public int getQuantity() {
        return Quantity;
    }

    public void setInventyId(int InventyId) {
        this.InventyId = InventyId;
    }

    public void setProductId(int ProductId) {
        this.ProductId = ProductId;
    }

    public void setWareHouseId(int WareHouseId) {
        this.WareHouseId = WareHouseId;
    }

    public void setShelfId(int ShelfId) {
        this.ShelfId = ShelfId;
    }

    public void setQuantity(int Quantity) {
        this.Quantity = Quantity;
    }
    
    
    
}
