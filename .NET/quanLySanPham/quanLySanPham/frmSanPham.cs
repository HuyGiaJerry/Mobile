using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace quanLySanPham
{
    public partial class frmSanPham : Form
    {
        public frmSanPham()
        {
            InitializeComponent();
        }

        private List<SanPham> listSps = new List<SanPham>();


        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void txtMaSP_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            try
            {
                String maSp = txtMaSP.Text;
                String tenSp = txtTenSP.Text;
                
                String hinhAnh = txtHinhAnh.Text;
                String moTaNgan = txtMoTaNgan.Text; 
                String moTaChiTiet = txtMoTaChiTiet.Text;
                var loaiSP = cbboxLoaiSP.SelectedItem;
                double donGia;
                bool dG = double.TryParse(txtDonGia.Text,out donGia);
                if (string.IsNullOrWhiteSpace(maSp))
                    MessageBox.Show("Mã sản phẩm ko đc để trống");
                else if (string.IsNullOrWhiteSpace(tenSp))
                    MessageBox.Show("Tên sản phẩm ko đc để trống");
                else if (string.IsNullOrWhiteSpace(hinhAnh))
                    MessageBox.Show("Hình ảnh ko đc để trống");
                else if (string.IsNullOrWhiteSpace(moTaNgan))
                    MessageBox.Show("Mô tả ngắn sản phẩm ko đc để trống");
                else if (string.IsNullOrWhiteSpace(moTaChiTiet))
                    MessageBox.Show("Mô tả chi tiết sản phẩm ko đc để trống");
                else if (loaiSP == null)
                    MessageBox.Show("Loại sản phẩm ko đc để trống");
                else if (donGia <= 0 || !dG)
                    MessageBox.Show("Đơn giá ko hợp lệ và lớn hơn 0");
                


                SanPham sp = new SanPham(maSp, tenSp, donGia, hinhAnh, moTaNgan, moTaChiTiet,loaiSP.ToString());

                listSps.Add(sp);

                dataGridTableSP.DataSource = null;
                dataGridTableSP.DataSource = listSps;


            } catch(Exception ex)
            {
                Console.WriteLine("Loi: " + ex.Message);
            }
        }

        private void btnLamMoi_Click(object sender, EventArgs e)
        {
            txtMaSP.Text = "";
            txtTenSP.Text = "";
            txtDonGia.Text = "";
            txtHinhAnh.Text = "";
            txtMoTaNgan.Text = "";
            txtMoTaChiTiet.Text = "";
            cbboxLoaiSP.SelectedIndex = -1;
            txtMaSP.ReadOnly = false;


        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            String maSp = txtMaSP.Text;
            String tenSp = txtTenSP.Text;
            double donGia = Convert.ToDouble(txtDonGia.Text);
            String hinhAnh = txtHinhAnh.Text;
            String moTaNgan = txtMoTaNgan.Text;
            String moTaChiTiet = txtMoTaChiTiet.Text;

            var loaiSP = cbboxLoaiSP.SelectedItem;

            foreach(var a in listSps)
            {
                if(maSp.Equals(a.MaSp))
                {
                    a.TenSP = tenSp;
                    a.DonGia = donGia;
                    a.HinhAnh = hinhAnh;
                    a.MoTaNgan = moTaNgan;
                    a.MoTaChiTiet = moTaChiTiet;
                    a.LoaiSP = loaiSP.ToString();
                }
            }


            txtMaSP.ReadOnly = false;
            btnLamMoi.Enabled = true;
            btnThem.Enabled = true;
            // Cập nhật dữ liệu 
            dataGridTableSP.DataSource = null;
            dataGridTableSP.DataSource = listSps;
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            String maSp = txtMaSP.Text;
            foreach (var a in listSps)
            {
                if (maSp.Equals(a.MaSp))
                {
                    listSps.Remove(a);
                }
            }

            dataGridTableSP.DataSource = null;
            dataGridTableSP.DataSource= listSps;


            txtMaSP.ReadOnly=false;
            btnThem.Enabled=true;
            btnLamMoi.Enabled=true;
        }

       

        private void dataGridTableSP_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow selectRow = dataGridTableSP.Rows[e.RowIndex];


                txtMaSP.Text = selectRow.Cells["MaSP"].Value.ToString();
                txtTenSP.Text = selectRow.Cells["TenSP"].Value.ToString();
                txtDonGia.Text = selectRow.Cells["DonGia"].Value.ToString();
                txtHinhAnh.Text = selectRow.Cells["HinhAnh"].Value.ToString();
                txtMoTaNgan.Text = selectRow.Cells["MoTaNgan"].Value.ToString();
                txtMoTaChiTiet.Text = selectRow.Cells["MoTaChiTiet"].Value.ToString();
                cbboxLoaiSP.SelectedItem = selectRow.Cells["LoaiSP"].Value.ToString();


                txtMaSP.ReadOnly = true;


                btnLamMoi.Enabled = false;
                btnThem.Enabled = false;

            }
        }
    }
}
