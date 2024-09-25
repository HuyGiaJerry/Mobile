using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Collection_25_09
{
    internal class Program
    {

        public static void Bai1()
        {
            ArrayList arrayList = new ArrayList();
            int n;
            n = Int32.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                arrayList.Add(Int32.Parse(Console.ReadLine()));
            }
            foreach(var i in arrayList)
            {
                Console.WriteLine(i);
            }
            arrayList.Sort();
            foreach (var i in arrayList)
            {
                Console.WriteLine(i);
            }
        }

        public static void Bai2()
        {
            Hashtable ht = new Hashtable();
            
            int n = Int32.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Nhap ten va tuoi:");
                ht.Add(Console.ReadLine(), Int32.Parse(Console.ReadLine()));
            }
            foreach(DictionaryEntry i in ht)
            {
                Console.WriteLine(i.Key+"-"+i.Value);
            }
        }
        public static void Bai3()
        {
            Dictionary<string, int> d = new Dictionary<string, int>();
            int n = Int32.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
            {
                Console.WriteLine("Nhap ten va diem:");
                d.Add(Console.ReadLine(),Int32.Parse(Console.ReadLine()));
            }
            foreach (KeyValuePair<string,int> i in d)
            {
                Console.WriteLine(i.Key+"-"+i.Value);
            }

        }
         static void Main(string[] args)
        {
            Bai1();
            Bai2();
            Bai3();
            
        }
    }
}
