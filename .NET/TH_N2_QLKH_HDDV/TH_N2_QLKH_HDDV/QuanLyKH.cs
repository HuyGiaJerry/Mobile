using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TH_N2_QLKH_HDDV
{
    public partial class QuanLyKH : Form
    {
        public static int cnt = 0;
        public QuanLyKH()
        {
            InitializeComponent();
            txtMaKh.Enabled = false;
            ++cnt;
            txtMaKh.Text = (cnt).ToString();
        }

        public void dataDSKH()
        {
            dataGridDSKH.DataSource = null;
            dataGridDSKH.DataSource = DanhSachKH.ListKhs;
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            try
            {
                
                int mKh = cnt;
                string tenKh = txtTenKh.Text;
                string sdt = txtSdt.Text;
                string address = txtAddress.Text;

                KhachHang k = new KhachHang(mKh,tenKh,sdt,address);
                DanhSachKH.add(k);
                cnt++;
                txtTenKh.Text = "";
                txtAddress.Text = "";
                txtSdt.Text = "";
                txtMaKh.Text = (cnt).ToString();
                dataDSKH();
                
            }
            catch (Exception ex) { 
                MessageBox.Show(ex.Message);
            }
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            int maKh = int.Parse(txtMaKh.Text);
            string tenKh = txtTenKh.Text;
            string sdt = txtSdt.Text;
            string address = txtAddress.Text;
            KhachHang k = new KhachHang(maKh,tenKh,sdt,address);  
            DanhSachKH.update(k);
            dataDSKH() ;
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            int maKh = int.Parse(txtMaKh.Text);
            string tenKh = txtTenKh.Text;
            string sdt = txtSdt.Text;
            string address = txtAddress.Text;
            KhachHang k = new KhachHang(maKh, tenKh, sdt, address);
            DanhSachKH.delete(k);
            dataDSKH();
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
           Application.Exit();
        }

        private void DataGridDSKHRowHeaderClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            if(e.RowIndex >= 0)
            {
                DataGridViewRow selectRow =  dataGridDSKH.Rows[e.RowIndex];
                txtMaKh.Text = selectRow.Cells["MaKh"].Value.ToString();
                txtTenKh.Text = selectRow.Cells["TenKh"].Value.ToString();
                txtSdt.Text = selectRow.Cells["PhoneNumber"].Value.ToString();
                txtAddress.Text = selectRow.Cells["Address"].Value.ToString();
            }
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            txtMaKh.Text = (cnt).ToString();
            txtTenKh.Text = "";
            txtAddress.Text = "";
            txtSdt.Text = "";
        }

        private void btnTaoHoaDon_Click(object sender, EventArgs e)
        {
            
            QuanLyHoaDon formHoaDon = new QuanLyHoaDon();
            formHoaDon.Show();
            
            
        }
    }
}
