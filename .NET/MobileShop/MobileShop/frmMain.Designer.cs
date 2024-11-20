namespace MobileShop
{
    partial class frmMain
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.categoryPanel = new System.Windows.Forms.Panel();
            this.btnBaoCaoThongKE = new System.Windows.Forms.Button();
            this.btnDonHang = new System.Windows.Forms.Button();
            this.btnDanhMucKH = new System.Windows.Forms.Button();
            this.btnDanhMucSP = new System.Windows.Forms.Button();
            this.dmDonHang = new System.Windows.Forms.Panel();
            this.insertDonHang = new System.Windows.Forms.Panel();
            this.lbEdit = new System.Windows.Forms.Label();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnDelete = new System.Windows.Forms.Button();
            this.btnUpdate = new System.Windows.Forms.Button();
            this.btnInsert = new System.Windows.Forms.Button();
            this.panel1 = new System.Windows.Forms.Panel();
            this.dataGridViewDonHang = new System.Windows.Forms.DataGridView();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnTim = new System.Windows.Forms.Button();
            this.txtDonHangId = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.dmSanPham = new System.Windows.Forms.Panel();
            this.dmKhachHang = new System.Windows.Forms.Panel();
            this.dmBaoCaoThongKe = new System.Windows.Forms.Panel();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.btnLuu = new System.Windows.Forms.Button();
            this.Exit = new System.Windows.Forms.Button();
            this.txtKhId = new System.Windows.Forms.TextBox();
            this.txtSPId = new System.Windows.Forms.TextBox();
            this.txtSoLuong = new System.Windows.Forms.TextBox();
            this.dateTimePickerNgayMua = new System.Windows.Forms.DateTimePicker();
            this.lb1 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.lbTotalKH = new System.Windows.Forms.Label();
            this.lbTotalDonHang = new System.Windows.Forms.Label();
            this.lbAmountSellProduct = new System.Windows.Forms.Label();
            this.categoryPanel.SuspendLayout();
            this.dmDonHang.SuspendLayout();
            this.insertDonHang.SuspendLayout();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewDonHang)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.dmBaoCaoThongKe.SuspendLayout();
            this.SuspendLayout();
            // 
            // categoryPanel
            // 
            this.categoryPanel.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.categoryPanel.Controls.Add(this.btnBaoCaoThongKE);
            this.categoryPanel.Controls.Add(this.btnDonHang);
            this.categoryPanel.Controls.Add(this.btnDanhMucKH);
            this.categoryPanel.Controls.Add(this.btnDanhMucSP);
            this.categoryPanel.Location = new System.Drawing.Point(2, 2);
            this.categoryPanel.Name = "categoryPanel";
            this.categoryPanel.Size = new System.Drawing.Size(200, 596);
            this.categoryPanel.TabIndex = 0;
            // 
            // btnBaoCaoThongKE
            // 
            this.btnBaoCaoThongKE.Location = new System.Drawing.Point(0, 414);
            this.btnBaoCaoThongKE.Name = "btnBaoCaoThongKE";
            this.btnBaoCaoThongKE.Size = new System.Drawing.Size(200, 45);
            this.btnBaoCaoThongKE.TabIndex = 3;
            this.btnBaoCaoThongKE.Text = "Báo Cáo Thống Kê";
            this.btnBaoCaoThongKE.UseVisualStyleBackColor = true;
            this.btnBaoCaoThongKE.Click += new System.EventHandler(this.btnBaoCaoThongKE_Click);
            // 
            // btnDonHang
            // 
            this.btnDonHang.Location = new System.Drawing.Point(0, 316);
            this.btnDonHang.Name = "btnDonHang";
            this.btnDonHang.Size = new System.Drawing.Size(200, 40);
            this.btnDonHang.TabIndex = 2;
            this.btnDonHang.Text = "Đơn Hàng";
            this.btnDonHang.UseVisualStyleBackColor = true;
            this.btnDonHang.Click += new System.EventHandler(this.btnDonHang_Click);
            // 
            // btnDanhMucKH
            // 
            this.btnDanhMucKH.Location = new System.Drawing.Point(0, 199);
            this.btnDanhMucKH.Name = "btnDanhMucKH";
            this.btnDanhMucKH.Size = new System.Drawing.Size(200, 41);
            this.btnDanhMucKH.TabIndex = 1;
            this.btnDanhMucKH.Text = "Danh Mục Khách Hàng";
            this.btnDanhMucKH.UseVisualStyleBackColor = true;
            this.btnDanhMucKH.Click += new System.EventHandler(this.btnDanhMucKH_Click);
            // 
            // btnDanhMucSP
            // 
            this.btnDanhMucSP.Location = new System.Drawing.Point(0, 80);
            this.btnDanhMucSP.Name = "btnDanhMucSP";
            this.btnDanhMucSP.Size = new System.Drawing.Size(200, 43);
            this.btnDanhMucSP.TabIndex = 0;
            this.btnDanhMucSP.Text = "Danh Mục Sản Phẩm";
            this.btnDanhMucSP.UseVisualStyleBackColor = true;
            this.btnDanhMucSP.Click += new System.EventHandler(this.btnDanhMucSP_Click);
            // 
            // dmDonHang
            // 
            this.dmDonHang.Controls.Add(this.btnExit);
            this.dmDonHang.Controls.Add(this.btnDelete);
            this.dmDonHang.Controls.Add(this.btnUpdate);
            this.dmDonHang.Controls.Add(this.btnInsert);
            this.dmDonHang.Controls.Add(this.panel1);
            this.dmDonHang.Controls.Add(this.groupBox1);
            this.dmDonHang.Location = new System.Drawing.Point(220, 0);
            this.dmDonHang.Name = "dmDonHang";
            this.dmDonHang.Size = new System.Drawing.Size(907, 598);
            this.dmDonHang.TabIndex = 1;
            // 
            // insertDonHang
            // 
            this.insertDonHang.Controls.Add(this.dateTimePickerNgayMua);
            this.insertDonHang.Controls.Add(this.txtSoLuong);
            this.insertDonHang.Controls.Add(this.txtSPId);
            this.insertDonHang.Controls.Add(this.txtKhId);
            this.insertDonHang.Controls.Add(this.Exit);
            this.insertDonHang.Controls.Add(this.btnLuu);
            this.insertDonHang.Controls.Add(this.label6);
            this.insertDonHang.Controls.Add(this.label5);
            this.insertDonHang.Controls.Add(this.label4);
            this.insertDonHang.Controls.Add(this.label3);
            this.insertDonHang.Controls.Add(this.lbEdit);
            this.insertDonHang.Location = new System.Drawing.Point(220, 0);
            this.insertDonHang.Name = "insertDonHang";
            this.insertDonHang.Size = new System.Drawing.Size(907, 592);
            this.insertDonHang.TabIndex = 6;
            // 
            // lbEdit
            // 
            this.lbEdit.AutoSize = true;
            this.lbEdit.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbEdit.Location = new System.Drawing.Point(266, 15);
            this.lbEdit.Name = "lbEdit";
            this.lbEdit.Size = new System.Drawing.Size(228, 29);
            this.lbEdit.TabIndex = 0;
            this.lbEdit.Text = "Thêm mới đơn hàng";
            // 
            // btnExit
            // 
            this.btnExit.Location = new System.Drawing.Point(659, 472);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(75, 23);
            this.btnExit.TabIndex = 5;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = true;
            this.btnExit.Click += new System.EventHandler(this.btnExit_Click);
            // 
            // btnDelete
            // 
            this.btnDelete.Location = new System.Drawing.Point(516, 472);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(75, 23);
            this.btnDelete.TabIndex = 4;
            this.btnDelete.Text = "Delete";
            this.btnDelete.UseVisualStyleBackColor = true;
            this.btnDelete.Click += new System.EventHandler(this.btnDelete_Click);
            // 
            // btnUpdate
            // 
            this.btnUpdate.Location = new System.Drawing.Point(369, 472);
            this.btnUpdate.Name = "btnUpdate";
            this.btnUpdate.Size = new System.Drawing.Size(75, 23);
            this.btnUpdate.TabIndex = 3;
            this.btnUpdate.Text = "Update";
            this.btnUpdate.UseVisualStyleBackColor = true;
            this.btnUpdate.Click += new System.EventHandler(this.btnUpdate_Click);
            // 
            // btnInsert
            // 
            this.btnInsert.Location = new System.Drawing.Point(203, 472);
            this.btnInsert.Name = "btnInsert";
            this.btnInsert.Size = new System.Drawing.Size(75, 23);
            this.btnInsert.TabIndex = 2;
            this.btnInsert.Text = "Insert";
            this.btnInsert.UseVisualStyleBackColor = true;
            this.btnInsert.Click += new System.EventHandler(this.btnInsert_Click);
            // 
            // panel1
            // 
            this.panel1.AutoScroll = true;
            this.panel1.Controls.Add(this.dataGridViewDonHang);
            this.panel1.Location = new System.Drawing.Point(200, 110);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(537, 330);
            this.panel1.TabIndex = 1;
            // 
            // dataGridViewDonHang
            // 
            this.dataGridViewDonHang.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridViewDonHang.Location = new System.Drawing.Point(3, 3);
            this.dataGridViewDonHang.Name = "dataGridViewDonHang";
            this.dataGridViewDonHang.RowHeadersWidth = 51;
            this.dataGridViewDonHang.RowTemplate.Height = 24;
            this.dataGridViewDonHang.Size = new System.Drawing.Size(531, 324);
            this.dataGridViewDonHang.TabIndex = 0;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btnTim);
            this.groupBox1.Controls.Add(this.txtDonHangId);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(0, 3);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(345, 83);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Tìm kiếm";
            // 
            // btnTim
            // 
            this.btnTim.Location = new System.Drawing.Point(279, 34);
            this.btnTim.Name = "btnTim";
            this.btnTim.Size = new System.Drawing.Size(45, 23);
            this.btnTim.TabIndex = 2;
            this.btnTim.Text = "Tìm";
            this.btnTim.UseVisualStyleBackColor = true;
            this.btnTim.Click += new System.EventHandler(this.btnTim_Click);
            // 
            // txtDonHangId
            // 
            this.txtDonHangId.Location = new System.Drawing.Point(120, 35);
            this.txtDonHangId.Name = "txtDonHangId";
            this.txtDonHangId.Size = new System.Drawing.Size(138, 22);
            this.txtDonHangId.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(27, 38);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(87, 16);
            this.label1.TabIndex = 0;
            this.label1.Text = "Đơn Hàng Id :";
            // 
            // dmSanPham
            // 
            this.dmSanPham.Location = new System.Drawing.Point(220, 0);
            this.dmSanPham.Name = "dmSanPham";
            this.dmSanPham.Size = new System.Drawing.Size(907, 596);
            this.dmSanPham.TabIndex = 0;
            // 
            // dmKhachHang
            // 
            this.dmKhachHang.Location = new System.Drawing.Point(220, 0);
            this.dmKhachHang.Name = "dmKhachHang";
            this.dmKhachHang.Size = new System.Drawing.Size(907, 596);
            this.dmKhachHang.TabIndex = 0;
            // 
            // dmBaoCaoThongKe
            // 
            this.dmBaoCaoThongKe.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.dmBaoCaoThongKe.Controls.Add(this.lbAmountSellProduct);
            this.dmBaoCaoThongKe.Controls.Add(this.lbTotalDonHang);
            this.dmBaoCaoThongKe.Controls.Add(this.lbTotalKH);
            this.dmBaoCaoThongKe.Controls.Add(this.label8);
            this.dmBaoCaoThongKe.Controls.Add(this.label7);
            this.dmBaoCaoThongKe.Controls.Add(this.lb1);
            this.dmBaoCaoThongKe.Location = new System.Drawing.Point(220, 0);
            this.dmBaoCaoThongKe.Name = "dmBaoCaoThongKe";
            this.dmBaoCaoThongKe.Size = new System.Drawing.Size(907, 595);
            this.dmBaoCaoThongKe.TabIndex = 3;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(84, 176);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(153, 25);
            this.label3.TabIndex = 1;
            this.label3.Text = "Khách Hàng Id :";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(101, 260);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(136, 25);
            this.label4.TabIndex = 2;
            this.label4.Text = "Sản Phẩm Id :";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(129, 346);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(108, 25);
            this.label5.TabIndex = 3;
            this.label5.Text = "Số Lượng :";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(129, 423);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(113, 25);
            this.label6.TabIndex = 4;
            this.label6.Text = "Ngày Mua :";
            // 
            // btnLuu
            // 
            this.btnLuu.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLuu.Location = new System.Drawing.Point(643, 387);
            this.btnLuu.Name = "btnLuu";
            this.btnLuu.Size = new System.Drawing.Size(93, 50);
            this.btnLuu.TabIndex = 5;
            this.btnLuu.Text = "Lưu";
            this.btnLuu.UseVisualStyleBackColor = true;
            this.btnLuu.Click += new System.EventHandler(this.btnLuu_Click);
            // 
            // Exit
            // 
            this.Exit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Exit.Location = new System.Drawing.Point(643, 237);
            this.Exit.Name = "Exit";
            this.Exit.Size = new System.Drawing.Size(93, 48);
            this.Exit.TabIndex = 6;
            this.Exit.Text = "Thoát";
            this.Exit.UseVisualStyleBackColor = true;
            this.Exit.Click += new System.EventHandler(this.btnThoat_Click);
            // 
            // txtKhId
            // 
            this.txtKhId.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtKhId.Location = new System.Drawing.Point(248, 173);
            this.txtKhId.Name = "txtKhId";
            this.txtKhId.Size = new System.Drawing.Size(225, 30);
            this.txtKhId.TabIndex = 7;
            // 
            // txtSPId
            // 
            this.txtSPId.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtSPId.Location = new System.Drawing.Point(248, 255);
            this.txtSPId.Name = "txtSPId";
            this.txtSPId.Size = new System.Drawing.Size(225, 30);
            this.txtSPId.TabIndex = 8;
            // 
            // txtSoLuong
            // 
            this.txtSoLuong.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtSoLuong.Location = new System.Drawing.Point(248, 343);
            this.txtSoLuong.Name = "txtSoLuong";
            this.txtSoLuong.Size = new System.Drawing.Size(225, 30);
            this.txtSoLuong.TabIndex = 9;
            // 
            // dateTimePickerNgayMua
            // 
            this.dateTimePickerNgayMua.CalendarFont = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dateTimePickerNgayMua.Location = new System.Drawing.Point(248, 425);
            this.dateTimePickerNgayMua.Name = "dateTimePickerNgayMua";
            this.dateTimePickerNgayMua.Size = new System.Drawing.Size(233, 22);
            this.dateTimePickerNgayMua.TabIndex = 10;
            // 
            // lb1
            // 
            this.lb1.AutoSize = true;
            this.lb1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lb1.Location = new System.Drawing.Point(30, 127);
            this.lb1.Name = "lb1";
            this.lb1.Size = new System.Drawing.Size(248, 29);
            this.lb1.TabIndex = 0;
            this.lb1.Text = "Tổng số khách hàng";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(311, 361);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(224, 29);
            this.label7.TabIndex = 1;
            this.label7.Text = "Tổng số đơn hàng";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(458, 127);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(380, 29);
            this.label8.TabIndex = 2;
            this.label8.Text = "Tổng số lượng sản phẩm bán ra";
            // 
            // lbTotalKH
            // 
            this.lbTotalKH.AutoSize = true;
            this.lbTotalKH.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbTotalKH.Location = new System.Drawing.Point(86, 213);
            this.lbTotalKH.Name = "lbTotalKH";
            this.lbTotalKH.Size = new System.Drawing.Size(0, 20);
            this.lbTotalKH.TabIndex = 3;
            // 
            // lbTotalDonHang
            // 
            this.lbTotalDonHang.AutoSize = true;
            this.lbTotalDonHang.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbTotalDonHang.Location = new System.Drawing.Point(400, 423);
            this.lbTotalDonHang.Name = "lbTotalDonHang";
            this.lbTotalDonHang.Size = new System.Drawing.Size(0, 20);
            this.lbTotalDonHang.TabIndex = 4;
            // 
            // lbAmountSellProduct
            // 
            this.lbAmountSellProduct.AutoSize = true;
            this.lbAmountSellProduct.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbAmountSellProduct.Location = new System.Drawing.Point(621, 187);
            this.lbAmountSellProduct.Name = "lbAmountSellProduct";
            this.lbAmountSellProduct.Size = new System.Drawing.Size(0, 20);
            this.lbAmountSellProduct.TabIndex = 5;
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1139, 610);
            this.Controls.Add(this.dmDonHang);
            this.Controls.Add(this.dmBaoCaoThongKe);
            this.Controls.Add(this.insertDonHang);
            this.Controls.Add(this.dmKhachHang);
            this.Controls.Add(this.dmSanPham);
            this.Controls.Add(this.categoryPanel);
            this.Name = "frmMain";
            this.Text = "FrmMain";
            this.categoryPanel.ResumeLayout(false);
            this.dmDonHang.ResumeLayout(false);
            this.insertDonHang.ResumeLayout(false);
            this.insertDonHang.PerformLayout();
            this.panel1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridViewDonHang)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.dmBaoCaoThongKe.ResumeLayout(false);
            this.dmBaoCaoThongKe.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel categoryPanel;
        private System.Windows.Forms.Button btnDonHang;
        private System.Windows.Forms.Button btnDanhMucKH;
        private System.Windows.Forms.Button btnDanhMucSP;
        private System.Windows.Forms.Panel dmDonHang;
        private System.Windows.Forms.Panel dmSanPham;
        private System.Windows.Forms.Panel dmKhachHang;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnTim;
        private System.Windows.Forms.TextBox txtDonHangId;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.DataGridView dataGridViewDonHang;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.Button btnUpdate;
        private System.Windows.Forms.Button btnInsert;
        private System.Windows.Forms.Panel dmBaoCaoThongKe;
        private System.Windows.Forms.Button btnBaoCaoThongKE;
        private System.Windows.Forms.Panel insertDonHang;
        private System.Windows.Forms.Label lbEdit;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtSoLuong;
        private System.Windows.Forms.TextBox txtSPId;
        private System.Windows.Forms.TextBox txtKhId;
        private System.Windows.Forms.Button Exit;
        private System.Windows.Forms.Button btnLuu;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.DateTimePicker dateTimePickerNgayMua;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label lb1;
        private System.Windows.Forms.Label lbAmountSellProduct;
        private System.Windows.Forms.Label lbTotalDonHang;
        private System.Windows.Forms.Label lbTotalKH;
    }
}

