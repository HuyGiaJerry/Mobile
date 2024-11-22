/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.epu.model;

import javax.swing.JFormattedTextField;

/**
 *
 * @author ASUS
 */
public class DateLabelFormatter extends JFormattedTextField.AbstractFormatter {
    @Override
    public Object stringToValue(String text) throws java.text.ParseException {
        return new java.text.SimpleDateFormat("yyyy-MM-dd").parseObject(text);
    }

    @Override
    public String valueToString(Object value) throws java.text.ParseException {
        if (value != null) {
            java.util.Calendar cal = (java.util.Calendar) value;
            return new java.text.SimpleDateFormat("yyyy-MM-dd").format(cal.getTime());
        }
        return "";
    }
}
