/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/**
 *
 * @author ASUS
 */
public class Cypher {
    public String Encrypt(String pass) throws UnsupportedEncodingException
    {
         try {
            // Tạo đối tượng MessageDigest cho SHA-1
             MessageDigest messageDigest = MessageDigest.getInstance("SHA-1");
            byte[] hashedBytes = messageDigest.digest(pass.getBytes("UTF-8"));

            // Chuyển đổi byte array thành chuỗi Hexadecimal (40 ký tự)
            StringBuilder hexString = new StringBuilder();
            for (byte b : hashedBytes) {
                String hex = Integer.toHexString(0xff & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }

            return hexString.toString().toUpperCase();

        } catch (NoSuchAlgorithmException e) {
            // Nếu không hỗ trợ thuật toán SHA-1, in thông báo lỗi
            System.out.println("Lỗi mã hóa SHA-1: " + e.getMessage());
            return null;
        }
    }
}
