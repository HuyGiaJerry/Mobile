/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import com.epu.dao.ExcelDao;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JTable;
import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.ss.usermodel.CellType;
import org.apache.poi.ss.usermodel.Row;
import org.apache.poi.ss.usermodel.Sheet;
import org.apache.poi.ss.usermodel.Workbook;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

/**
 *
 * @author JerryNguyen
 */
public class ExcelProduct implements ExcelDao<Product, String> {

    @Override
    public void exportToExcel(String filePath, JTable table, String nameSheet) {
        Workbook wb = new XSSFWorkbook();
        Sheet sheet = wb.createSheet(nameSheet);
        Row headerRow = sheet.createRow(0);
        for (int i = 0; i < table.getColumnCount(); i++) {
            Cell cell = headerRow.createCell(i);
            cell.setCellValue(table.getColumnName(i));
        }
        // Điền dữ liệu vào sheet
        for (int i = 0; i < table.getRowCount(); i++) {
            Row row = sheet.createRow(i + 1);
            for (int j = 0; j < table.getColumnCount(); j++) {
                Cell cell = row.createCell(j);
                cell.setCellValue(table.getValueAt(i, j).toString());
            }
        }
        try (FileOutputStream fileOut = new FileOutputStream(filePath)) {
            wb.write(fileOut);
        } catch (FileNotFoundException ex) {
            Logger.getLogger(ExcelProduct.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(ExcelProduct.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            wb.close();
        } catch (IOException ex) {
            Logger.getLogger(ExcelProduct.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    @Override
    public List<Product> importToExcel(String filePath) {
        List<Product> prs = new ArrayList<>();

        try (FileInputStream fin = new FileInputStream(filePath)) {
            Workbook wb = new XSSFWorkbook(fin);
            Sheet sheet = wb.getSheetAt(0);

            for (Row row : sheet) {
                if (row.getRowNum() == 0) {
                    continue; // Bỏ qua dòng tiêu đề
                }
                Product p = new Product();

                // Lấy các trường từ cột 0 trở đi
                p.setProductName(row.getCell(0).getStringCellValue()); // Cột A
                p.setUnit(row.getCell(1).getStringCellValue());         // Cột B
                p.setPrice((float) row.getCell(2).getNumericCellValue()); // Cột C
                p.setDescription(row.getCell(3).getStringCellValue());  // Cột D
                p.setCreateAt(row.getCell(4).getDateCellValue());       // Cột E
                p.setCategoryId((int) row.getCell(5).getNumericCellValue()); // Cột F

                prs.add(p);
            }

        } catch (IOException ex) {
            ex.printStackTrace();
        }

        return prs;
    }

}
