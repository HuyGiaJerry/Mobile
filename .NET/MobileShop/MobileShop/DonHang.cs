using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class DonHang
    {
        private int donHangId;
        private int KhId;
        private int SpId;
        private int soLuong;
        private DateTime ngayMua;

        public DonHang() { }

        public DonHang(int Id, int khId, int spId, int soLuong, DateTime ngayMua)
        {
            donHangId = Id;
            KhId = khId;
            SpId = spId;
            this.soLuong = soLuong;
            this.ngayMua = ngayMua;
        }

        public DonHang(int khId, int spId, int soLuong, DateTime ngayMua)
        {
            KhId = khId;
            SpId = spId;
            this.soLuong = soLuong;
            this.ngayMua = ngayMua;
        }


        public int DonHangID { get { return donHangId; } set { donHangId = value; } }
        public int KHID
        {
            get { return KhId; }
            set { KhId = value; }
        }
        public int SpID { get { return SpId; } set { SpId = value; } }
        public int SoLUONG { get { return soLuong; } set { soLuong = value; } }

        public DateTime NgayMua { get { return ngayMua; } set { ngayMua = value; } }

    }
}
