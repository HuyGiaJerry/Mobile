using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThucHanh02_QLGT
{
   
    public class Program
    {
        static void Main(string[] args)
        {
            List<PhuongTien> pts = new List<PhuongTien>();
            Console.WriteLine("Nhap so luong phuong tien: ");
            int n = Int32.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
            {
                int choosen = 0;
                do
                {
                    Console.WriteLine("1,Xe hoi");
                    Console.WriteLine("2, Xe dap");
                    Console.WriteLine("---Chon doi tuong---");
                    choosen = Int32.Parse(Console.ReadLine());
                } while (choosen <= 0 || choosen >= 3);
                Console.WriteLine("---Nhap thong tin cho doi tuong---");
                Console.WriteLine("Nhap ten : ");
                string name = Console.ReadLine();
                Console.WriteLine("Nhap loai nhien lieu: ");
                string loaiNL = Console.ReadLine();
                switch (choosen)
                {
                    case 1:
                        XeHoi xh = new XeHoi(name,loaiNL);
                        pts.Add(xh);
                        break;
                    case 2:
                        XeDap xd = new XeDap(name, loaiNL);
                        pts.Add(xd);
                        break;
                }
                
            }

            foreach(PhuongTien pt in pts)
            {
                pt.DiChuyen();
                Console.WriteLine($"Muc tieu thu nhien lieu: {pt.MucTieuThuNguyenLieu()}");
                Console.WriteLine($"Toc do di chuyen: {pt.TocDoToiDa()}");
            }
        }
    }
}
