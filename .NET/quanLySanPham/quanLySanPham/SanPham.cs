using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace quanLySanPham
{
    internal class SanPham
    {
        private String maSp;
        private String tenSP;
        private double donGia;
        private String hinhAnh;
        private String moTaNgan;
        private String moTaChiTiet;
        private String loaiSanPham;

        public SanPham()
        {
        }

        public SanPham(string maSp, string tenSP, double donGia, string hinhAnh, string moTaNgan, string moTaChiTiet, string loaiSanPham)
        {
            this.maSp = maSp;
            this.tenSP = tenSP;
            this.donGia = donGia;
            this.hinhAnh = hinhAnh;
            this.moTaNgan = moTaNgan;
            this.moTaChiTiet = moTaChiTiet;
            this.loaiSanPham = loaiSanPham;
        }
        public String MaSp
        {
            get { return maSp; }
            set { maSp = value; }
        }
        public String TenSP
        {
            get { return tenSP; }
            set { tenSP = value; }
        }
        public double DonGia
        {
            get { return donGia; }
            set { donGia = value; }
        }
        public String HinhAnh
        {
            get { return hinhAnh; }
            set { hinhAnh = value; }
        }
        public String MoTaNgan
        {
            get { return moTaNgan; }
            set { moTaNgan = value; }
        }
        public String MoTaChiTiet
        {
            get { return moTaChiTiet; }
            set { moTaChiTiet = value; }
        }
        public String LoaiSP
        {
            get { return loaiSanPham; }
            set { loaiSanPham = value; }
        }
    }
}
