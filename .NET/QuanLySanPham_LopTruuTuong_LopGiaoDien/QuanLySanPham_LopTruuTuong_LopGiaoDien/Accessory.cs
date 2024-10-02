using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPham_LopTruuTuong_LopGiaoDien
{
    public class Accessory : Product, Program.ISellable
    {
        private string color;
        private string size;

        public Accessory() { }
        public Accessory(string name,double price,int stock,string color, string size) : base(name,price,stock)
        {
            this.color = color;
            this.size = size;
        }

        public void sell(int quantity)
        {
            this.stock -= quantity;
        }

        public bool isInStock()
        {
            return (this.stock <= 0) ? false : true;
        }


        public override void DisplayProductInfo()
        {
            Console.WriteLine($"Name: {this.name} - Price: {this.price} - Stock: {this.stock} - Color: {this.color} - Size: {this.size}");
        }

        public override void ApplyDiscount(double percentage)
        {
            this.price = this.price * (1 - (percentage/100));
        }


    }
}
