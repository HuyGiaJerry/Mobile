using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPham_LopTruuTuong_LopGiaoDien
{
    public abstract class Product
    {
        protected string name;
        protected double price;
        protected int stock; // So luong ton kho

        protected Product() { }
        protected Product(string name, double price, int stock)
        {
            this.name = name;
            this.price = price;
            this.stock = stock;
        }

        public int getStock()
        {
            return stock;
        }

        public abstract void DisplayProductInfo();
        public abstract void ApplyDiscount(double percentage);
    }
}
