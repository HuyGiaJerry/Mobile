using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class SanPham
    {
        private int SpId;
        private string tenSp;
        private float gia;
        private string hangSx;

        public SanPham() { }
        public SanPham(int spId, string tenSp, float gia, string hangSx)
        {
            SpId = spId;
            this.tenSp = tenSp;
            this.gia = gia;
            this.hangSx = hangSx;
        }

        public SanPham(string tenSp, float gia, string hangSx)
        {
            this.tenSp = tenSp;
            this.gia = gia;
            this.hangSx = hangSx;
        }

        public int SpID {  
            get { return SpId; } 
            set { SpId = value; }
        }

        public string TenSp { 
            get { return TenSp; } 
            set { TenSp = value; } 
        }

        public float Gia
        {
            get { return Gia; }
            set { Gia = value; }
        }

        public string HangSx
        {
            get { return HangSx; }
            set { HangSx = value; }
        }
    }
}
