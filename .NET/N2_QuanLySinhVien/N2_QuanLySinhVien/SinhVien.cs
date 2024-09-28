using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace N2_QuanLySinhVien
{
    internal class SinhVien
    {
        private String name;
        private String maSv;
        private double dtb;

        public SinhVien() { }
        public SinhVien(string name, string maSv, double dtb)
        {
            this.name = name;
            this.maSv = maSv;
            this.dtb = dtb;
        }

        public void input()
        {
            Console.WriteLine("---Input Information of SinhVien---");
            Console.WriteLine("Input Name: ");
            this.name = Console.ReadLine();
            Console.WriteLine("Input MaSv: ");
            this.maSv = Console.ReadLine();
            Console.WriteLine("Input DiemTB: ");
            this.dtb = Double.Parse(Console.ReadLine());
        }

        public String getMaSv()
        {
            return this.maSv;
        }

        public double getDtb()
        {
            return this.dtb;
        }

        public void display()
        {
            Console.WriteLine($"Name: {this.name} - MaSv: {this.maSv} - DiemTB: {this.dtb}");
        }

    }
}
