/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class TransactionDetail {
    private int TransactionDetailId;
    private int TransactionId;
    private int WareHouseId;
    private int ShelfId;
    private int ProductId;
    private int Quantity;
    private float Total;
    private boolean Status;

    public TransactionDetail() {
    }

    public TransactionDetail(int TransactionDetailId, int TransactionId, int WareHouseId, int ShelfId, int ProductId, int Quantity, float Total, boolean Status) {
        this.TransactionDetailId = TransactionDetailId;
        this.TransactionId = TransactionId;
        this.WareHouseId = WareHouseId;
        this.ShelfId = ShelfId;
        this.ProductId = ProductId;
        this.Quantity = Quantity;
        this.Total = Total;
        this.Status = Status;
    }

    public TransactionDetail(int TransactionId, int WareHouseId, int ShelfId, int ProductId, int Quantity, float Total, boolean Status) {
        this.TransactionId = TransactionId;
        this.WareHouseId = WareHouseId;
        this.ShelfId = ShelfId;
        this.ProductId = ProductId;
        this.Quantity = Quantity;
        this.Total = Total;
        this.Status = Status;
    }
    
    
    
    

    public int getTransactionDetailId() {
        return TransactionDetailId;
    }

    public int getTransactionId() {
        return TransactionId;
    }

    public int getWareHouseId() {
        return WareHouseId;
    }

    public int getShelfId() {
        return ShelfId;
    }

    public int getProductId() {
        return ProductId;
    }

    public int getQuantity() {
        return Quantity;
    }

    public float getTotal() {
        return Total;
    }

    public boolean isStatus() {
        return Status;
    }

    public void setTransactionDetailId(int TransactionDetailId) {
        this.TransactionDetailId = TransactionDetailId;
    }

    public void setTransactionId(int TransactionId) {
        this.TransactionId = TransactionId;
    }

    public void setWareHouseId(int WareHouseId) {
        this.WareHouseId = WareHouseId;
    }

    public void setShelfId(int ShelfId) {
        this.ShelfId = ShelfId;
    }

    public void setProductId(int ProductId) {
        this.ProductId = ProductId;
    }

    public void setQuantity(int Quantity) {
        this.Quantity = Quantity;
    }

    public void setTotal(float Total) {
        this.Total = Total;
    }

    public void setStatus(boolean Status) {
        this.Status = Status;
    }
    
    
}
