/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

/**
 *
 * @author ASUS
 */
public class WareHouse {
    private int WareHouseId;
    private String WareHouseName;
    private String Location;

    public WareHouse() {
    }

    public WareHouse(int WareHouseId, String WareHouseName, String Location) {
        this.WareHouseId = WareHouseId;
        this.WareHouseName = WareHouseName;
        this.Location = Location;
    }

    public int getWareHouseId() {
        return WareHouseId;
    }

    public String getWareHouseName() {
        return WareHouseName;
    }

    public String getLocation() {
        return Location;
    }

    public void setWareHouseId(int WareHouseId) {
        this.WareHouseId = WareHouseId;
    }

    public void setWareHouseName(String WareHouseName) {
        this.WareHouseName = WareHouseName;
    }

    public void setLocation(String Location) {
        this.Location = Location;
    }
    
    
}
