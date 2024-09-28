using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace N2_QuanLySinhVien
{
    internal class DanhSachSinhVien
    {
        private List<SinhVien> sv = new List<SinhVien>();

        public void addSinhVien(SinhVien s)
        {
            sv.Add(s);
        }
        public void displayDanhSachSV() 
        {
            foreach (SinhVien s in sv)
            {
                s.display();
            }
        }

        public bool findSvByMaSv(String maSv)
        {
            SinhVien s = new SinhVien();
            bool found = false;
            foreach (SinhVien sinh in sv)
            {
                if(sinh.getMaSv().Equals(maSv) )
                {
                    s = sinh;
                    found = true;
                }

            }
            if(found)
            {
                Console.WriteLine("--Thong tin Sv Tim Kiem--");
                s.display();
            }
            return found; 
            
        }

        public SinhVien maxDtb()
        {
            SinhVien s = new SinhVien();
            double maxDtb = 0;
            foreach(SinhVien sinh in sv)
            {
                if(sinh.getDtb() > maxDtb )
                    maxDtb = sinh.getDtb();
            }
            foreach(SinhVien sinh in sv)
            {
                if(sinh.getDtb() == maxDtb)
                    s = sinh;
            }
            return s;
        }

    }
}
