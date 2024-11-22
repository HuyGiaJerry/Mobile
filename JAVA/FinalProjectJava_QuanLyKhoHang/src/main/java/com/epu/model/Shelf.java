/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class Shelf {
    private int ShelfId;
    private String Location;
    private int WareHouseId;

    public Shelf() {
    }

    public Shelf(int ShelfId, String Location, int WareHouseId) {
        this.ShelfId = ShelfId;
        this.Location = Location;
        this.WareHouseId = WareHouseId;
    }

    public int getShelfId() {
        return ShelfId;
    }

    public String getLocation() {
        return Location;
    }

    public int getWareHouseId() {
        return WareHouseId;
    }

    public void setShelfId(int ShelfId) {
        this.ShelfId = ShelfId;
    }

    public void setLocation(String Location) {
        this.Location = Location;
    }

    public void setWareHouseId(int WareHouseId) {
        this.WareHouseId = WareHouseId;
    }
    
    
    
}
