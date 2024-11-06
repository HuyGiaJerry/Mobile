using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH_N2_QLKH_HDDV
{
    static class DanhSachKH
    {
        private static List<KhachHang> listKhs = new List<KhachHang>();

        public static List<KhachHang> ListKhs
        {
            get { return listKhs; }
            set { listKhs = value; }
        }

        public static void add(KhachHang kh)
        {
            listKhs.Add(kh);
        }
        public static void delete(KhachHang kh) { 
            listKhs.Remove(kh);
        }

        public static void update(KhachHang kh)
        {
            foreach (var k in listKhs)
            {
                if(k.MaKh == kh.MaKh)
                {
                    k.TenKh = kh.TenKh;
                    k.PhoneNumber = kh.PhoneNumber;
                    k.Address = kh.Address;
                    break;
                }
            }
        }
    }
}
