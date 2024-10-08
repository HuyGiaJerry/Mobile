using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ThucHanh02_QLGT
{
    public abstract class PhuongTien : IThongTinThem
    {
        protected string TenPhuongTien;
        protected string LoaiNhienLieu;

        public PhuongTien() { }

        public PhuongTien(string tenPhuongTien, string loaiNhienLieu)
        {
            TenPhuongTien = tenPhuongTien;
            LoaiNhienLieu = loaiNhienLieu;
        }

        public abstract void DiChuyen();

        public abstract double MucTieuThuNguyenLieu();


        public abstract double TocDoToiDa();
     
    }
}
