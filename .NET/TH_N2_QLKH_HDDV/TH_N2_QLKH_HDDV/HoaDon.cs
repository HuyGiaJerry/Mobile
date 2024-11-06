using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH_N2_QLKH_HDDV
{
    class HoaDon
    {
        private string maHd;
        private KhachHang kh;
        private List<DichVu> listDvs;
        private long totalPrice;

        public HoaDon()
        {
        }

        public HoaDon(string maHd, KhachHang kh, List<DichVu> listDvs, long totalPrice)
        {
            this.maHd = maHd;
            this.kh = kh;
            this.listDvs = listDvs;
            this.totalPrice = totalPrice;
        }

        public string MaHd
        {
            get { return maHd; }
            set { maHd = value; }
        }

        public KhachHang Kh
        {
            get { return kh; }
            set { kh = value; }
        }

        public List<DichVu> ListDvs
        {
            get { return listDvs; }
            set { listDvs = value; }
        }

        public long TotalPrice
        {
            get { return totalPrice; }
            set { totalPrice = value; }
        }


    }
}
