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
    public partial class QuanLySanPham : Form
    {
        public QuanLySanPham()
        {
            InitializeComponent();
            loadDataGrid();
        }

        public void  loadDataGrid()
        {
            dataGridDSSP.DataSource = null;

            dataGridDSSP.DataSource = new ProductController().getAll();
        }

        private void btnFind_Click(object sender, EventArgs e)
        {
            string name = txtTenSPToFind.Text;
            dataGridDSSP.DataSource = null;
            dataGridDSSP.DataSource = new ProductController().searchByName(name);

        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            InsertProduct i = new InsertProduct();
            i.Show();
            
        }


        private void btnUpdate_Click(object sender, EventArgs e)
        {
            if (dataGridDSSP.SelectedRows.Count > 0)
            {
                int rowIndex = dataGridDSSP.SelectedCells[0].RowIndex;
                string id = dataGridDSSP.Rows[rowIndex].Cells["ProductId"].Value.ToString();
                UpdateProduct i = new UpdateProduct(id);
                i.Show();
            }
            else
                MessageBox.Show("Chua co truong nao dc chon");
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if(dataGridDSSP.SelectedRows.Count > 0)
            {
                int rowIndex = dataGridDSSP.SelectedCells[0].RowIndex;
                string id = dataGridDSSP.Rows[rowIndex].Cells["ProductId"].Value.ToString();
                new ProductController().delete(id);
                loadDataGrid();
            }
            else
                MessageBox.Show("Chua co truong nao dc chon");
        }

        

        private void btnReset_Click(object sender, EventArgs e)
        {
            loadDataGrid();
        }
    }
}
