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
 * @author ASUS
 */
public class ExcelInventory implements ExcelDao<Inventory, String>{

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
            Logger.getLogger(ExcelInventory.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(ExcelInventory.class.getName()).log(Level.SEVERE, null, ex);
        }
        try {
            wb.close();
        } catch (IOException ex) {
            Logger.getLogger(ExcelInventory.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    @Override
    public List<Inventory> importToExcel(String filePath) {
        List<Inventory> inventoryList = new ArrayList<>();

        try (FileInputStream fin = new FileInputStream(filePath)) {
            Workbook wb = new XSSFWorkbook(fin);
            Sheet sheet = wb.getSheetAt(0);

            for (Row row : sheet) {
                if (row.getRowNum() == 0) {
                    continue; // Bỏ qua dòng tiêu đề
                }
                Inventory inventory = new Inventory();

                // Lấy dữ liệu từ cột 1 (A) đến cột 4 (D)
                Cell cellProductId = row.getCell(0); // Cột A
                Cell cellWareHouseId = row.getCell(1); // Cột B
                Cell cellShelfId = row.getCell(2); // Cột C
                Cell cellQuantity = row.getCell(3); // Cột D

                // Kiểm tra từng ô có null không trước khi xử lý
                if (cellProductId != null && cellProductId.getCellType() == CellType.NUMERIC) {
                    inventory.setProductId((int) cellProductId.getNumericCellValue());
                } else {
                    inventory.setProductId(0); // Giá trị mặc định nếu ô bị trống
                }

                if (cellWareHouseId != null && cellWareHouseId.getCellType() == CellType.NUMERIC) {
                    inventory.setWareHouseId((int) cellWareHouseId.getNumericCellValue());
                } else {
                    inventory.setWareHouseId(0);
                }

                if (cellShelfId != null && cellShelfId.getCellType() == CellType.NUMERIC) {
                    inventory.setShelfId((int) cellShelfId.getNumericCellValue());
                } else {
                    inventory.setShelfId(0);
                }

                if (cellQuantity != null && cellQuantity.getCellType() == CellType.NUMERIC) {
                    inventory.setQuantity((int) cellQuantity.getNumericCellValue());
                } else {
                    inventory.setQuantity(0);
                }

                inventoryList.add(inventory);
            }

        } catch (IOException ex) {
            ex.printStackTrace();
        }

        return inventoryList;
    }



    
}
