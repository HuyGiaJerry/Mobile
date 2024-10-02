using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPham_LopTruuTuong_LopGiaoDien
{
    public class Program
    {
        public interface ISellable 
        {
            void sell(int quantity);
            bool isInStock();
        }




        static void Main(string[] args)
        {
            MobilePhone mb = new MobilePhone("Iphone XS Max",1000,5,"Apple",256);
            Laptop lt = new Laptop("Asus vivobook",2000,10,16,1028);
            Accessory ac = new Accessory("Lac Tay Vang Dong", 4000, 2, "Gold Light", "XL");


            mb.DisplayProductInfo();
            lt.DisplayProductInfo();
            ac.DisplayProductInfo();

           

            // Chon hang mua de ban
            int choosen = 0;
            Console.WriteLine("1, Mobile Phone");
            Console.WriteLine("2, Laptop");
            Console.WriteLine("3, Accesory");
            Console.WriteLine("Nhap lua chon mua: ");
            choosen = Int32.Parse(Console.ReadLine());
            switch(choosen)
            {
                case 1:
                    int quatity = 0;
                    do
                    {
                        Console.WriteLine("Nhap so luong mua: ");
                        quatity = Int32.Parse(Console.ReadLine());
                    } while (quatity <= 0 || quatity > mb.getStock());
                    
                    mb.sell(quatity);
                    Console.WriteLine(mb.isInStock() ? "YES" : "NO");
                    break;

                case 2:
                    int quatity1 = 0;
                    do
                    {
                        Console.WriteLine("Nhap so luong mua: ");
                        quatity1 = Int32.Parse(Console.ReadLine());
                    } while (quatity1 <= 0 || quatity1 > lt.getStock());
                    lt.sell(quatity1);
                    Console.WriteLine(lt.isInStock() ? "YES" : "NO");
                    break;
                case 3:
                    int quatity2 = 0;
                    do
                    {
                        Console.WriteLine("Nhap so luong mua: ");
                        quatity2 = Int32.Parse(Console.ReadLine());
                    } while (quatity2 <= 0 || quatity2 > ac.getStock());
                    ac.sell(quatity2);
                    Console.WriteLine(ac.isInStock() ? "YES" : "NO");
                    break;
            }

            // Giam gia 1 so san pham 

            mb.ApplyDiscount(10);
            ac.ApplyDiscount(20);

            // Sau khi cap nhat gia 
            mb.DisplayProductInfo();
            lt.DisplayProductInfo();
            ac.DisplayProductInfo();
        }
    }
}
