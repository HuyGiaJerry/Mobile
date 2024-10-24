using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace formDangNhap
{
    public partial class formDangNhap : Form
    {
        public formDangNhap()
        {
            InitializeComponent();
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnDangNhap_Click(object sender, EventArgs e)
        {
            try
            {
                string tUserName = txtUserName.Text;
                string tPassword = txtPassword.Text;

                if (tUserName.Equals("admin") && tPassword.Equals("123456"))
                {
                    MessageBox.Show("Đăng nhập thành công");
                }
                else
                {
                    MessageBox.Show("Đăng nhập thất bại");
                    txtPassword.Text = "";
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine("Loi :"+ex.Message);
            }
        }
    }
}
