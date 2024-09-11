using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TongHopBaiTap
{
    class BaiTap1109
    {
        public void bai01()
        {
            int n;
            Console.WriteLine("Input size of array: ");
            n = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("arr[" + i + "] = ");
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
            int sum = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                sum += arr[i];
            }
            Console.WriteLine("Sum Arr = " + sum);
        }
        public  void bai02()
       {
            string str = Console.ReadLine();
            int lengthStr = 0;
            for (int i = 0; i < str.Length; i++)
            {
                if ((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
                    lengthStr++;
            }
            Console.WriteLine(lengthStr);
            Console.ReadKey();
        }
        public void bai03()
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("arr[" + i + "] = ");
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
            int maxValue = arr[0];
            for (int i = 1; i < arr.Length; i++)
            {
                if (arr[i] > maxValue) maxValue = arr[i];
            }
            Console.WriteLine("MaxValue in arr = " + maxValue);
            Console.ReadLine();
        }
        public void bai04()
        {
            string str = Console.ReadLine();
            string reverse = "";
            for (int i = 0; i < str.Length; i++)

                reverse += str[(str.Length) - i - 1];

            Console.WriteLine(reverse);
            Console.ReadKey();
        }
        public void bai05()
        {
            int[] arr = { 1, 2, 3, 3, 2, 1 }; // YES
            // int[] arr = { 1, 2, 3, 2 , 1 }; // YES
            //int[] arr = { 1, 2, 3, 3, 6, 1 }; // NO
            bool ck = true;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] != arr[(arr.Length) - i - 1]) ck = false;
            }
            Console.WriteLine((ck ? "YES" : "NO"));
            Console.ReadKey();
        }
        public void bai06()
        {
            string str = Console.ReadLine();
            char c = Convert.ToChar(Console.ReadLine());
            int countChar = 0;
            string lowerStr = str.ToLower();
            char lowerC = char.ToLower(c);
            for (int i = 0; i < lowerStr.Length; i++)
            {

                if (lowerStr[i] == lowerC) countChar++;
            }
            Console.WriteLine($"So lan xuat hien {c} trong {str} la : " + countChar + " lan !");
            Console.ReadKey();
        }
    }

}

