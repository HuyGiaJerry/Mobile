/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class Supplier {
    private int SupplierId;
    private String SupplierName;
    private String PhoneNumber;
    private String Address;

    public Supplier() {
    }

    public Supplier(int SupplierId, String SupplierName, String PhoneNumber, String Address) {
        this.SupplierId = SupplierId;
        this.SupplierName = SupplierName;
        this.PhoneNumber = PhoneNumber;
        this.Address = Address;
    }

    public int getSupplierId() {
        return SupplierId;
    }

    public String getSupplierName() {
        return SupplierName;
    }

    public String getPhoneNumber() {
        return PhoneNumber;
    }

    public String getAddress() {
        return Address;
    }

    public void setSupplierId(int SupplierId) {
        this.SupplierId = SupplierId;
    }

    public void setSupplierName(String SupplierName) {
        this.SupplierName = SupplierName;
    }

    public void setPhoneNumber(String PhoneNumber) {
        this.PhoneNumber = PhoneNumber;
    }

    public void setAddress(String Address) {
        this.Address = Address;
    }
    
    
    
}
