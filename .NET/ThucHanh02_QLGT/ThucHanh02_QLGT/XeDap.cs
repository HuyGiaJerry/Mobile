using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThucHanh02_QLGT
{
    public class XeDap : PhuongTien
    {
        public XeDap() { }
        public XeDap(string tenPT,string loaiNhienLieu) : base(tenPT, loaiNhienLieu) { }

        public override void DiChuyen()
        {
            Console.WriteLine("Xe Dap dang chay");
        }

        public override double TocDoToiDa()
        {
            return 30;
        }

        public override double MucTieuThuNguyenLieu()
        {
            return 0;
        }

        

    }
}
