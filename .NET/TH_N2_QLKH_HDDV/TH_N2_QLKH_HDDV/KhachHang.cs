using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH_N2_QLKH_HDDV
{
    class KhachHang
    {
        private int maKh;
        private string tenKh;
        private string phoneNumber;
        private string address;

        public KhachHang()
        {
        }

        public KhachHang(int maKh, string tenKh, string phoneNumber, string address)
        {
            this.maKh = maKh;
            this.tenKh = tenKh;
            this.phoneNumber = phoneNumber;
            this.address = address;
        }

        public int MaKh
        {
            get { return maKh; }
            set { maKh = value; }
        }
        public string TenKh
        {
            get { return tenKh; }
            set { tenKh = value; }
        }
        public string PhoneNumber
        {
            get { return phoneNumber; }
            set { phoneNumber = value; }
        }
        public string Address
        {
            get { return address; }
            set { address = value; }
        }


    }
}
