/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.epu.dao;

import java.util.List;
import javax.swing.JTable;

/**
 *
 * @author ASUS
 */
public interface ExcelDao<T,K> {
    public void exportToExcel(K filePath,JTable table,K nameSheet);
    public List<T> importToExcel(K filePath);
}
