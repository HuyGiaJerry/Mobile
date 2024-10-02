using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPham_LopTruuTuong_LopGiaoDien
{
    public class Laptop : Product , Program.ISellable
    {
        private int ram;
        private double memoryCapacity;

        public Laptop() { }
        public Laptop(string name,double price,int stock,int ram, double memoryCapacity) : base(name,price,stock)
        {
            this.ram = ram;
            this.memoryCapacity = memoryCapacity;
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
            Console.WriteLine($"Name: {this.name} - Price: {this.price} - Stock: {this.stock} - Ram: {this.ram} - MemoryCapacity: {this.memoryCapacity}");
        }


        public override void ApplyDiscount(double percentage)
        {
            this.price = this.price * (1-( percentage/100));
        }

    }
}
