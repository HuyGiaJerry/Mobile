using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MobileShop
{
    public partial class frmLogin : Form
    {
        public frmLogin()
        {
            InitializeComponent();
        }

        private void btnDangNhap_Click(object sender, EventArgs e)
        {
            string tk = txtTaiKhoan.Text;
            string mk = txtMatKhau.Text;

            List<NguoiDung> list = new NguoiDungController().getAll();
            bool ck = false;

            foreach (var nd in list) {
                if (nd.Tendangnhap.Equals(tk) && nd.MatKhau.Equals(mk))
                    ck = true;
            }

            if (ck)
            {
                this.DialogResult = DialogResult.OK;

            }
            else {
                MessageBox.Show("Tài khoản or mật khẩu sai");
            }

        }

        private void txtMatKhau_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
