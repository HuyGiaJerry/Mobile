/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import java.util.Random;

/**
 *
 * @author ASUS
 */
public class GenerateCode {
    public static String generateCodeSendEmail()
    {
        Random rd = new Random();
        StringBuilder code = new StringBuilder();
        for(int i=0;i<6;i++)
        {
            code.append(rd.nextInt(10));
        }
        return code.toString();
        
        
    }
}
