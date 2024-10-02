using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPham_LopTruuTuong_LopGiaoDien
{
    public class MobilePhone : Product , Program.ISellable
    {
        private string manufacturer;
        private double memoryCapacity;    
        public MobilePhone() { }
        public MobilePhone(string name,double price,int stock,string manufacturer, double memoryCapacity) : base(name, price, stock)
        {
            this.manufacturer = manufacturer;
            this.memoryCapacity = memoryCapacity;
        }

        public void sell(int quatity)
        {
            this.stock -=  quatity;
        }

        public bool isInStock()
        {
            return (this.stock <= 0) ? false : true;
        }


        public override void DisplayProductInfo()
        {
            Console.WriteLine($"Name: {this.name} - Price: {this.price} - Stock: {this.stock} - Manufacturer: {this.manufacturer} - MemoryCapcity: {this.memoryCapacity}");
        }
        public override void ApplyDiscount(double percentage)
        {
            this.price = this.price * (1 -  (percentage / 100));
        }

    }
}
