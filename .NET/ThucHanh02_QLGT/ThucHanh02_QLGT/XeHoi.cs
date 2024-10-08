using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThucHanh02_QLGT
{
    public  class XeHoi : PhuongTien
    {
        public XeHoi() { }
        public XeHoi(string tenPT,string loaiNhienLieu) : base(tenPT, loaiNhienLieu)   { }

        public override void DiChuyen()
        {
            Console.WriteLine("Xe hoi dang chay");

        }

        public override double MucTieuThuNguyenLieu()
        {
            string str = LoaiNhienLieu.ToLower();
            int choosen = 0;
            if (str.Equals("ron")) choosen = 22;
            else if (str.Equals("a95")) choosen = 23;
            else if (str.Equals("e5")) choosen = 24;
            else choosen  = 20;
            return choosen * 2;
        }

        public override double TocDoToiDa()
        {
            return 120;
        }
    }
}
