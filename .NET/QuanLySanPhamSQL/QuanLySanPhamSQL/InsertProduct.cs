using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace QuanLySanPhamSQL
{
    public partial class InsertProduct : Form
    {
        public InsertProduct()
        {
            InitializeComponent();
        }

        private void btnLuu_Click(object sender, EventArgs e)
        {
            string id = txtProductId.Text;
            string name = txtProductName.Text;
            int quantity = Convert.ToInt32(txtQuantity.Text);
            string phone = txtPhoneNumber.Text;
            Product p = new Product(id,name,quantity,phone);

            new ProductController().insert(p);

            var mainForm = Application.OpenForms["QuanLySanPham"] as QuanLySanPham;
            if(mainForm != null)
                mainForm.loadDataGrid();

            txtProductId.Text = "";
            txtProductName.Text = "";
            txtPhoneNumber.Text = "";
            txtQuantity.Text = "";


        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
