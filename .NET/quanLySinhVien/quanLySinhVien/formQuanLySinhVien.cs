using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace quanLySinhVien
{
    public partial class formQuanLySinhVien : Form
    {

        

        public formQuanLySinhVien()
        {
            InitializeComponent();
        }


        private List<SinhVien> svs = new List<SinhVien>();


        private void btnLamMoi_Click(object sender, EventArgs e)
        {
            txtMaSv.Text = "";
            txtHoTen.Text = "";
            txtEmail.Text = "";
            txtNgaySinh.Text = "";
            txtDiaChi.Text = "";
            txtDienThoai.Text = "";
            cbboxGioiTinh.SelectedIndex = -1;
            cbboxKhoa.SelectedIndex = -1;

            btnThem.Enabled = true;
        }

        private void btnThem_Click(object sender, EventArgs e)
        {
            try
            {
                string tId = txtMaSv.Text;
                string tName = txtHoTen.Text; 
                string tDate = txtNgaySinh.Text;
                string tAddress = txtDiaChi.Text;
                string tEmail = txtEmail.Text;
                string tPhone = txtDienThoai.Text;
                string tGender = cbboxGioiTinh.SelectedItem != null ? cbboxGioiTinh.SelectedItem.ToString() : "" ;
                string tDepartment = cbboxKhoa.SelectedItem != null ?   cbboxKhoa.SelectedItem.ToString() : "";

                bool ck = true;

                
                if(svs.Count > 0)
                {
                    foreach (var a in svs)
                    {
                        if (a.StudentId.Equals(tId))
                            ck = false;
                    }
                }



                if(string.IsNullOrEmpty(tId) || tId.Length < 3)
                {
                    ck = false;
                    MessageBox.Show("Mã Sv ko đc bỏ trống và lớn hơn 3 ký tự");
                } 
                else if(string.IsNullOrEmpty(tName))
                {
                    ck = false;
                    MessageBox.Show("Tên ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tDate))
                {
                    ck = false;
                    MessageBox.Show("Ngày sinh ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tEmail))
                {
                    ck = false;
                    MessageBox.Show("Email ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tAddress))
                {
                    ck = false;
                    MessageBox.Show("Địa chỉ ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tPhone))
                {
                    ck = false;
                    MessageBox.Show("Số điện thoại ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tGender))
                {
                    ck = false;
                    MessageBox.Show("Giới tính ko đc bỏ trống");
                }
                else if (string.IsNullOrEmpty(tDepartment))
                {
                    ck = false;
                    MessageBox.Show("Khoa ko đc bỏ trống");
                }
                


                if (ck)
                {
                    SinhVien sv = new SinhVien(tId, tName, tDate, tAddress, tEmail, tPhone, tGender, tDepartment);

                    svs.Add(sv);

                    dataGridThongTinSV.DataSource = null;
                    dataGridThongTinSV.DataSource = svs;
                }
                else {
                    MessageBox.Show("Lỗi thêm mới (đã có sv or validate thất bại)");
                }


  
            } catch (Exception ex)

            {
                Console.WriteLine("Loi 1:"+ex.Message);
                MessageBox.Show($"Error: {ex.Message}");
            }
        }

        private void btnSua_Click(object sender, EventArgs e)
        {
            try
            {
                string tId = txtMaSv.Text;
                string tName = txtHoTen.Text;
                string tDate = txtNgaySinh.Text;
                string tAddress = txtDiaChi.Text;
                string tEmail = txtEmail.Text;
                string tPhone = txtDienThoai.Text;
                string tGender = cbboxGioiTinh.SelectedItem != null ? cbboxGioiTinh.SelectedItem.ToString() : "";
                string tDepartment = cbboxKhoa.SelectedItem != null ? cbboxKhoa.SelectedItem.ToString() : "";



                foreach (var a in svs)
                {
                    if(a.StudentId.Equals(tId))
                    {
                        a.StudentName = tName;
                        a.Date = tDate;
                        a.Address = tAddress;
                        a.Email = tEmail;
                        a.Phone = tPhone;
                        a.Gender = tGender;
                        a.Department = tDepartment;
                    }
                }

                // reload lại bảng tt sv 
                dataGridThongTinSV.DataSource = null;
                dataGridThongTinSV.DataSource = svs;


                btnLamMoi.Enabled = true;
                btnThem.Enabled = true;




                txtMaSv.Text = "";
                txtHoTen.Text = "";
                txtEmail.Text = "";
                txtNgaySinh.Text = "";
                txtDiaChi.Text = "";
                txtDienThoai.Text = "";
                cbboxGioiTinh.SelectedIndex = -1;
                cbboxKhoa.SelectedIndex = -1;

            }
            catch (Exception ex) {
                MessageBox.Show("Loi 2: "+ex.Message);
            }
        }

        private void btnXoa_Click(object sender, EventArgs e)
        {
            try
            {
                string tId = txtMaSv.Text;

                SinhVien sv = svs.FirstOrDefault(svs => svs.StudentId.Equals(tId));

                if (sv != null) { 
                    svs.Remove(sv);
                    dataGridThongTinSV.DataSource = null;
                    dataGridThongTinSV.DataSource = svs;

                    btnLamMoi.Enabled=true;
                    btnThem.Enabled=true;
                    txtMaSv.ReadOnly = false;



                }
                else
                {
                    MessageBox.Show("Loi xoa ");
                }

                
            } catch(Exception ex)
            {
                MessageBox.Show("Loi a : " + ex.Message);
            }

        }

        private void dataGridThongTinSv_RowHeaderMouseClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow selectRow = dataGridThongTinSV.Rows[e.RowIndex];

                txtMaSv.Text = selectRow.Cells["StudentId"].Value.ToString();
                txtHoTen.Text = selectRow.Cells["StudentName"].Value.ToString();
                txtNgaySinh.Text = selectRow.Cells["Date"].Value.ToString();
                txtDiaChi.Text = selectRow.Cells["Address"].Value.ToString();
                txtEmail.Text = selectRow.Cells["Email"].Value.ToString();
                txtDienThoai.Text = selectRow.Cells["Phone"].Value.ToString();
                cbboxGioiTinh.SelectedItem = selectRow.Cells["Gender"].Value.ToString();
                cbboxKhoa.SelectedItem = selectRow.Cells["Department"].Value.ToString();

                txtMaSv.ReadOnly = true;
                btnLamMoi.Enabled = false;
                btnThem.Enabled = false;
            }
        }
    }
}
