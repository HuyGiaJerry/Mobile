using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class KhachHang
    {
        private int KhId;
        private string tenKh;
        private string diaChi;
        private string sdt;

        public KhachHang() { }

        public KhachHang(int khId, string tenKh, string diaChi, string sdt)
        {
            KhId = khId;
            this.tenKh = tenKh;
            this.diaChi = diaChi;
            this.sdt = sdt;
        }

        public KhachHang(string tenKh, string diaChi, string sdt)
        {
            this.tenKh = tenKh;
            this.diaChi = diaChi;
            this.sdt = sdt;
        }

        public int KhID { 
            get { return this.KhId; } 
            set { this.KhId = value; }
        }

        public string TenKh { get { return this.tenKh; } set { this.tenKh = value; } }
        public string DiaChi { get { return this.diaChi; } set {this.diaChi = value; } }

        public string Sdt { get { return this.sdt; } set { this.sdt = value; } }

    }
}
