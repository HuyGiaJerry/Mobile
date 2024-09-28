using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace N2_QuanLySinhVien
{
    internal class Program
    {



        static void Main(string[] args)
        {
            DanhSachSinhVien ds = new DanhSachSinhVien();
            int n;
            do
            {
                Console.WriteLine("Input number of SinhVien(3-10): ");
                n = Int32.Parse(Console.ReadLine());
            } while(n <= 2 || n > 10);
            for (int i = 0; i < n; i++)
            {
                SinhVien sv = new SinhVien();
                sv.input();
                ds.addSinhVien(sv);
            }
            Console.WriteLine("---Thong Tin DS SinhVien---");
            ds.displayDanhSachSV();
            SinhVien s = new SinhVien();
            s = ds.maxDtb();
            Console.WriteLine("--Sinh Vien co Diem Trung Binh Cao Nhat--");
            s.display();
           
            while(true)
            {
                Console.WriteLine("Nhap maSv can tim: ");
                String maSv;
                maSv = Console.ReadLine();
                if (ds.findSvByMaSv(maSv)) break;
                else
                    Console.WriteLine($"Ko co sv nao co maSv = {maSv}");
                                
            }
        }
    }
}
