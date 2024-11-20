using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class NguoiDung
    {
        private int NdId;
        private string tendangnhap;
        private string matkhau;
        public NguoiDung() { }

        public NguoiDung(int ndId, string tendangnhap, string matkhau)
        {
            NdId = ndId;
            this.tendangnhap = tendangnhap;
            this.matkhau = matkhau;
        }

        public NguoiDung(string tendangnhap, string matkhau)
        {
            this.tendangnhap = tendangnhap;
            this.matkhau = matkhau;
        }

        public int NDID
        {
            get { return NdId; }
            set { NdId = value; }
        }

        public string Tendangnhap { get { return tendangnhap; } set { tendangnhap = value; } }
        public string MatKhau { get { return matkhau; } set { matkhau = value; } }


    }
}
