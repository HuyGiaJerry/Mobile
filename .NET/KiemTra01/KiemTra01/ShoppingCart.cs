using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace KiemTra01
{
    public partial class ShoppingCart : Form
    {

        private List<Product> ps = new List<Product>();
        private Cart carts = new Cart();
        private Product productIsSelected = new Product();
        private double totalPrice = 0;
        public ShoppingCart()
        {
            InitializeComponent();
            fillDataListProduct();
        }

        private void fillDataListProduct()
        {
            Product p = new Product("Bim bim","bimbim.png",7000,10);
            Product p1 = new Product("Cocacola","cocacola.jpeg",15000,20);
            Product p2 = new Product("Dua hau","duaHau.jpg",55000,22);
            Product p3 = new Product("Ca rot","caRot.png",10000,50);
            Product p4 = new Product("Chip chip","chipChip.png",12000,15);
            Product p5 = new Product("Keo sau rieng","keoSauRieng.png",33000,11);
            Product p6 = new Product("Tra sua chan trau","traSua.png",35000,30);

            ps.Add(p);
            ps.Add(p1);
            ps.Add(p2);
            ps.Add(p3);
            ps.Add(p4);
            ps.Add(p5);
            ps.Add(p6);

            dataGridListProduct.DataSource = null;
            dataGridListProduct.DataSource = ps;

        }


        private void fillDataListCart()
        {
            dataGridCart.DataSource = null;
            dataGridCart.DataSource = carts.ShoppingCart;
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            if(productIsSelected != null)
            {
                carts.add(productIsSelected);
                fillDataListCart();
                Product existP = ps.FirstOrDefault(x => x.ProductName == productIsSelected.ProductName);
                if(existP != null && existP.Quantity > 0)
                {
                    
                    existP.Quantity -= 1;
                    dataGridListProduct.Refresh();  
                } 
                dataGridListProduct.CurrentCell = null;
                lbTotal.Text = "Total = " + carts.getTotalPrice().ToString();
            }
            else
            {
                MessageBox.Show("Chua chon san pham them !");
            }
           
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if(productIsSelected != null)
            {
                carts.remove(productIsSelected);
                fillDataListCart();
                dataGridCart.CurrentCell = null;
                lbTotal.Text = "Total = " + carts.getTotalPrice().ToString();
            }
            else
            {
                MessageBox.Show("Chua chon san pham them !");
            }
        }

        private void btnPurchase_Click(object sender, EventArgs e)
        {
            lbTotal.Text = "Total = " + totalPrice.ToString();
            carts.clearListCart();
            fillDataListCart();
            MessageBox.Show("Thanh toan thanh cong");
        }

        private void listProductRowHeaderClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow rowSelect = dataGridListProduct.Rows[e.RowIndex];
                string name = rowSelect.Cells["ProductName"].Value.ToString();
                string imgUrl = rowSelect.Cells["ImageUrl"].Value.ToString();
                int quantity = 1;
                double price = Convert.ToDouble(rowSelect.Cells["Price"].Value);
                productIsSelected = null;
                productIsSelected = new Product(name,imgUrl,price,quantity);
            }
        }

        private void dataGridListCartRowHeaderClick(object sender, DataGridViewCellMouseEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow rowSelect = dataGridCart.Rows[e.RowIndex];
                string name = rowSelect.Cells["ProductName"].Value.ToString();
                string imgUrl = rowSelect.Cells["ImageUrl"].Value.ToString();
                int quantity = Convert.ToInt32(rowSelect.Cells["Quantity"].Value);
                double price = Convert.ToDouble(rowSelect.Cells["Price"].Value);
                productIsSelected = null;
                productIsSelected = new Product(name, imgUrl, price, quantity);
            }
        }
    }
}
