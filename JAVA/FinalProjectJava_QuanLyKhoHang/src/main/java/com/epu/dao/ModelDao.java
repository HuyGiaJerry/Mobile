/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.epu.dao;
import java.util.List;

/**
 *
 * @author ASUS
 */

// T là Type Model , K là Type khóa chính vd: Id;
public interface ModelDao <T,K>{
    public List<T> getAll();
    public boolean Insert(T model);
    public boolean Update(T model);
    public boolean Delete(K id);
    
}
