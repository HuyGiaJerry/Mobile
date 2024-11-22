/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import java.sql.Timestamp;
import java.util.Date;

/**
 *
 * @author ASUS
 */
public class Transaction {
    private int TransactionId;
    private int SupplierId;
    private float BatchNumber;
    private String TransactionType;
    private Date CreateDate;
    private int AccountId;
    private float Total;

    public Transaction() {
    }

    public Transaction(int TransactionId, int SupplierId, float BatchNumber, String TransactionType, Date CreateDate, int AccountId, float Total) {
        this.TransactionId = TransactionId;
        this.SupplierId = SupplierId;
        this.BatchNumber = BatchNumber;
        this.TransactionType = TransactionType;
        this.CreateDate = CreateDate;
        this.AccountId = AccountId;
        this.Total = Total;
    }

    public Transaction(int SupplierId, float BatchNumber, String TransactionType, Date CreateDate, int AccountId, float Total) {
        this.SupplierId = SupplierId;
        this.BatchNumber = BatchNumber;
        this.TransactionType = TransactionType;
        this.CreateDate = CreateDate;
        this.AccountId = AccountId;
        this.Total = Total;
    }
    
    
    

    public int getTransactionId() {
        return TransactionId;
    }

    public int getSupplierId() {
        return SupplierId;
    }

    public float getBatchNumber() {
        return BatchNumber;
    }

    public String getTransactionType() {
        return TransactionType;
    }

    public Date getCreateDate() {
        return CreateDate;
    }

    public int getAccountId() {
        return AccountId;
    }

    public float getTotal() {
        return Total;
    }

    public void setTransactionId(int TransactionId) {
        this.TransactionId = TransactionId;
    }

    public void setSupplierId(int SupplierId) {
        this.SupplierId = SupplierId;
    }

    public void setBatchNumber(float BatchNumber) {
        this.BatchNumber = BatchNumber;
    }

    public void setTransactionType(String TransactionType) {
        this.TransactionType = TransactionType;
    }

    public void setCreateDate(Date CreateDate) {
        this.CreateDate = CreateDate;
    }

    public void setAccountId(int AccountId) {
        this.AccountId = AccountId;
    }

    public void setTotal(float Total) {
        this.Total = Total;
    }
    
    
    
}
