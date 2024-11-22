/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package com.epu.view;

import com.epu.controller.AccountController;
import com.epu.model.EmailSender;
import com.epu.model.GenerateCode;
import java.awt.CardLayout;
import javax.swing.JOptionPane;

/**
 *
 * @author ASUS
 */
public class FrmForgotPassword extends javax.swing.JFrame {
    private String sendCode;
    
    public FrmForgotPassword() {
        initComponents();
            
    }

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        MainFPanel = new javax.swing.JPanel();
        panelNhapThongTinXacNhan = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        panelNhapThongTinXN_txtUsername = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        panelNhapThongTinXN_txtEmail = new javax.swing.JTextField();
        panelNhapThongTinXN_btnThoat = new javax.swing.JButton();
        panelNhapThongTinXN_btnGuiMa = new javax.swing.JButton();
        panelNhapMaXacNhan = new javax.swing.JPanel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        panelNhapMaXacNhan_txtMaXacNhan = new javax.swing.JTextField();
        panelNhapMaXacNhan_btnThoat = new javax.swing.JButton();
        panelNhapMaXacNhan_btnXacNhanMa = new javax.swing.JButton();
        panelDoiMatKhau = new javax.swing.JPanel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        panelDoiMatKhau_txtMatKhauMoi = new javax.swing.JTextField();
        panelDoiMatKhau_btnThoat = new javax.swing.JButton();
        panelDoiMatKhau_btnLuuMKmoi = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("FrmForgotPassword");

        MainFPanel.setBackground(new java.awt.Color(51, 51, 255));
        MainFPanel.setLayout(new java.awt.CardLayout());

        panelNhapThongTinXacNhan.setBackground(new java.awt.Color(255, 255, 255));

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        jLabel1.setText("Nhập Thông Tin Xác Nhận");

        jLabel2.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        jLabel2.setText("Email :");

        panelNhapThongTinXN_txtUsername.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N

        jLabel3.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        jLabel3.setText("Tài Khoản :");

        panelNhapThongTinXN_txtEmail.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N

        panelNhapThongTinXN_btnThoat.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        panelNhapThongTinXN_btnThoat.setText("Thoát");
        panelNhapThongTinXN_btnThoat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelNhapThongTinXN_btnThoatActionPerformed(evt);
            }
        });

        panelNhapThongTinXN_btnGuiMa.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        panelNhapThongTinXN_btnGuiMa.setText("Gửi mã ");
        panelNhapThongTinXN_btnGuiMa.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelNhapThongTinXN_btnGuiMaActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout panelNhapThongTinXacNhanLayout = new javax.swing.GroupLayout(panelNhapThongTinXacNhan);
        panelNhapThongTinXacNhan.setLayout(panelNhapThongTinXacNhanLayout);
        panelNhapThongTinXacNhanLayout.setHorizontalGroup(
            panelNhapThongTinXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelNhapThongTinXacNhanLayout.createSequentialGroup()
                .addGap(93, 93, 93)
                .addGroup(panelNhapThongTinXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(panelNhapThongTinXN_txtUsername, javax.swing.GroupLayout.PREFERRED_SIZE, 386, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel3)
                    .addComponent(jLabel2)
                    .addGroup(panelNhapThongTinXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addGroup(panelNhapThongTinXacNhanLayout.createSequentialGroup()
                            .addComponent(panelNhapThongTinXN_btnThoat, javax.swing.GroupLayout.PREFERRED_SIZE, 90, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(panelNhapThongTinXN_btnGuiMa, javax.swing.GroupLayout.PREFERRED_SIZE, 90, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addComponent(panelNhapThongTinXN_txtEmail, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 386, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(97, Short.MAX_VALUE))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, panelNhapThongTinXacNhanLayout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel1)
                .addGap(173, 173, 173))
        );
        panelNhapThongTinXacNhanLayout.setVerticalGroup(
            panelNhapThongTinXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelNhapThongTinXacNhanLayout.createSequentialGroup()
                .addGap(23, 23, 23)
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 32, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(37, 37, 37)
                .addComponent(jLabel3)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(panelNhapThongTinXN_txtUsername, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(49, 49, 49)
                .addComponent(jLabel2)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(panelNhapThongTinXN_txtEmail, javax.swing.GroupLayout.PREFERRED_SIZE, 35, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 61, Short.MAX_VALUE)
                .addGroup(panelNhapThongTinXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(panelNhapThongTinXN_btnThoat, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(panelNhapThongTinXN_btnGuiMa, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(87, 87, 87))
        );

        MainFPanel.add(panelNhapThongTinXacNhan, "panelNhapThongTinXacNhan");

        panelNhapMaXacNhan.setBackground(new java.awt.Color(255, 255, 255));

        jLabel4.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        jLabel4.setText("Nhập mã xác nhận");

        jLabel5.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        jLabel5.setText("Mã Xác Nhận :");

        panelNhapMaXacNhan_txtMaXacNhan.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N

        panelNhapMaXacNhan_btnThoat.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        panelNhapMaXacNhan_btnThoat.setText("Thoát");
        panelNhapMaXacNhan_btnThoat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelNhapMaXacNhan_btnThoatActionPerformed(evt);
            }
        });

        panelNhapMaXacNhan_btnXacNhanMa.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        panelNhapMaXacNhan_btnXacNhanMa.setText("Xác nhận");
        panelNhapMaXacNhan_btnXacNhanMa.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelNhapMaXacNhan_btnXacNhanMaActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout panelNhapMaXacNhanLayout = new javax.swing.GroupLayout(panelNhapMaXacNhan);
        panelNhapMaXacNhan.setLayout(panelNhapMaXacNhanLayout);
        panelNhapMaXacNhanLayout.setHorizontalGroup(
            panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelNhapMaXacNhanLayout.createSequentialGroup()
                .addGroup(panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(panelNhapMaXacNhanLayout.createSequentialGroup()
                        .addGap(194, 194, 194)
                        .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 168, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(panelNhapMaXacNhanLayout.createSequentialGroup()
                        .addGap(135, 135, 135)
                        .addGroup(panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel5)
                            .addGroup(panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                .addGroup(panelNhapMaXacNhanLayout.createSequentialGroup()
                                    .addComponent(panelNhapMaXacNhan_btnThoat)
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(panelNhapMaXacNhan_btnXacNhanMa))
                                .addComponent(panelNhapMaXacNhan_txtMaXacNhan, javax.swing.GroupLayout.PREFERRED_SIZE, 292, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                .addContainerGap(149, Short.MAX_VALUE))
        );
        panelNhapMaXacNhanLayout.setVerticalGroup(
            panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelNhapMaXacNhanLayout.createSequentialGroup()
                .addGap(39, 39, 39)
                .addComponent(jLabel4)
                .addGap(60, 60, 60)
                .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 24, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(31, 31, 31)
                .addComponent(panelNhapMaXacNhan_txtMaXacNhan, javax.swing.GroupLayout.PREFERRED_SIZE, 34, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(74, 74, 74)
                .addGroup(panelNhapMaXacNhanLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(panelNhapMaXacNhan_btnThoat, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(panelNhapMaXacNhan_btnXacNhanMa, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(122, Short.MAX_VALUE))
        );

        MainFPanel.add(panelNhapMaXacNhan, "panelNhapMaXacNhan");

        panelDoiMatKhau.setBackground(new java.awt.Color(255, 255, 255));

        jLabel6.setFont(new java.awt.Font("Segoe UI", 1, 18)); // NOI18N
        jLabel6.setText("Đổi mật khẩu mới ");

        jLabel7.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        jLabel7.setText("Mật khẩu mới :");

        panelDoiMatKhau_btnThoat.setFont(new java.awt.Font("Segoe UI", 0, 14)); // NOI18N
        panelDoiMatKhau_btnThoat.setText("Thoát");
        panelDoiMatKhau_btnThoat.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelDoiMatKhau_btnThoatActionPerformed(evt);
            }
        });

        panelDoiMatKhau_btnLuuMKmoi.setText("Lưu");
        panelDoiMatKhau_btnLuuMKmoi.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                panelDoiMatKhau_btnLuuMKmoiActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout panelDoiMatKhauLayout = new javax.swing.GroupLayout(panelDoiMatKhau);
        panelDoiMatKhau.setLayout(panelDoiMatKhauLayout);
        panelDoiMatKhauLayout.setHorizontalGroup(
            panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelDoiMatKhauLayout.createSequentialGroup()
                .addGroup(panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(panelDoiMatKhauLayout.createSequentialGroup()
                        .addGap(215, 215, 215)
                        .addComponent(jLabel6))
                    .addGroup(panelDoiMatKhauLayout.createSequentialGroup()
                        .addGap(124, 124, 124)
                        .addGroup(panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel7)
                            .addGroup(panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                .addGroup(panelDoiMatKhauLayout.createSequentialGroup()
                                    .addComponent(panelDoiMatKhau_btnThoat)
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(panelDoiMatKhau_btnLuuMKmoi))
                                .addComponent(panelDoiMatKhau_txtMatKhauMoi, javax.swing.GroupLayout.PREFERRED_SIZE, 336, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                .addContainerGap(116, Short.MAX_VALUE))
        );
        panelDoiMatKhauLayout.setVerticalGroup(
            panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(panelDoiMatKhauLayout.createSequentialGroup()
                .addGap(56, 56, 56)
                .addComponent(jLabel6)
                .addGap(52, 52, 52)
                .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 26, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(33, 33, 33)
                .addComponent(panelDoiMatKhau_txtMatKhauMoi, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(51, 51, 51)
                .addGroup(panelDoiMatKhauLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(panelDoiMatKhau_btnLuuMKmoi, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(panelDoiMatKhau_btnThoat, javax.swing.GroupLayout.DEFAULT_SIZE, 33, Short.MAX_VALUE))
                .addContainerGap(129, Short.MAX_VALUE))
        );

        MainFPanel.add(panelDoiMatKhau, "panelDoiMatKhau");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(2, 2, 2)
                .addComponent(MainFPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(MainFPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    
   
    
    private void panelNhapThongTinXN_btnGuiMaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelNhapThongTinXN_btnGuiMaActionPerformed
       
       String userName = panelNhapThongTinXN_txtUsername.getText();
       String email = panelNhapThongTinXN_txtEmail.getText();
       
       if( new AccountController().isAcceiptUser(userName, email))
       {
            CardLayout cardLayout = (CardLayout) MainFPanel.getLayout();
            cardLayout.show(MainFPanel, "panelNhapMaXacNhan");
            
            
            sendCode = GenerateCode.generateCodeSendEmail();
            EmailSender.sendEmail(email, sendCode);
            System.out.println("FrmForgotPassword - Code has been sended ");
            
       }
       else
       {
           JOptionPane.showMessageDialog(this, "Sai username or email");
       }
       
    }//GEN-LAST:event_panelNhapThongTinXN_btnGuiMaActionPerformed

    private void panelNhapThongTinXN_btnThoatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelNhapThongTinXN_btnThoatActionPerformed
        
    }//GEN-LAST:event_panelNhapThongTinXN_btnThoatActionPerformed

    private void panelNhapMaXacNhan_btnThoatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelNhapMaXacNhan_btnThoatActionPerformed
        
    }//GEN-LAST:event_panelNhapMaXacNhan_btnThoatActionPerformed

    private void panelNhapMaXacNhan_btnXacNhanMaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelNhapMaXacNhan_btnXacNhanMaActionPerformed
        
        String txtcode = panelNhapMaXacNhan_txtMaXacNhan.getText();
        if(txtcode.equals(sendCode))
        {
            CardLayout cardLayout = (CardLayout) MainFPanel.getLayout();
            cardLayout.show(MainFPanel, "panelDoiMatKhau");
            
            
        }
        else 
            JOptionPane.showMessageDialog(this, "Xác nhận sai");
    }//GEN-LAST:event_panelNhapMaXacNhan_btnXacNhanMaActionPerformed

    private void panelDoiMatKhau_btnThoatActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelDoiMatKhau_btnThoatActionPerformed
       
    }//GEN-LAST:event_panelDoiMatKhau_btnThoatActionPerformed

    private void panelDoiMatKhau_btnLuuMKmoiActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_panelDoiMatKhau_btnLuuMKmoiActionPerformed
        String userName = panelNhapThongTinXN_txtUsername.getText();
        System.out.println("UserName : "+userName);
        String newPass = panelDoiMatKhau_txtMatKhauMoi.getText();
        if(new AccountController().updatePassword(userName, newPass))
        {
            JOptionPane.showMessageDialog(this, "Update Password Successs");
            this.dispose();
            FrmLogin flogin = new FrmLogin();
            flogin.setVisible(true);
            
        }
        else
            JOptionPane.showMessageDialog(this, "Update Password Fail");
    }//GEN-LAST:event_panelDoiMatKhau_btnLuuMKmoiActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FrmForgotPassword.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FrmForgotPassword.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FrmForgotPassword.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FrmForgotPassword.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrmForgotPassword().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JPanel MainFPanel;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JPanel panelDoiMatKhau;
    private javax.swing.JButton panelDoiMatKhau_btnLuuMKmoi;
    private javax.swing.JButton panelDoiMatKhau_btnThoat;
    private javax.swing.JTextField panelDoiMatKhau_txtMatKhauMoi;
    private javax.swing.JPanel panelNhapMaXacNhan;
    private javax.swing.JButton panelNhapMaXacNhan_btnThoat;
    private javax.swing.JButton panelNhapMaXacNhan_btnXacNhanMa;
    private javax.swing.JTextField panelNhapMaXacNhan_txtMaXacNhan;
    private javax.swing.JButton panelNhapThongTinXN_btnGuiMa;
    private javax.swing.JButton panelNhapThongTinXN_btnThoat;
    private javax.swing.JTextField panelNhapThongTinXN_txtEmail;
    private javax.swing.JTextField panelNhapThongTinXN_txtUsername;
    private javax.swing.JPanel panelNhapThongTinXacNhan;
    // End of variables declaration//GEN-END:variables
}
