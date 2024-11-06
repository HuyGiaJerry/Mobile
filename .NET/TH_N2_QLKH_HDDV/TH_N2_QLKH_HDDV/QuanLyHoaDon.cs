using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TH_N2_QLKH_HDDV
{
    public partial class QuanLyHoaDon : Form
    {

        List<DichVu> listDvs = new List<DichVu>();
        List<DichVu> listDvsDaChon = new List<DichVu>();


        public QuanLyHoaDon()
        {
            InitializeComponent();
            initListDV();
            initListKH();
            txtTotal.Enabled = false;
        }

        public void initListDV()
        {
            DichVu d1 = new DichVu("1", "Message", 100);
            DichVu d2 = new DichVu("2", "Lunch", 30);
            DichVu d3 = new DichVu("3", "Karaoke", 500);
            DichVu d4 = new DichVu("4", "Take photo", 20);
            DichVu d5 = new DichVu("5", "Shuttle Service", 50);
            listDvs.Add(d1);
            listDvs.Add(d2);
            listDvs.Add(d3);
            listDvs.Add(d4);
            listDvs.Add(d5);
            dataGridDS_DV.DataSource = null;
            dataGridDS_DV.DataSource = listDvs;
        }

        public void initListKH()
        {
            List<KhachHang> listKhs = DanhSachKH.ListKhs;
            cbboxKH.Items.Clear();

            for(int i = 0; i < listKhs.Count; i++)
            {
                cbboxKH.Items.Add(listKhs[i].TenKh);
            }
            cbboxKH.SelectedIndex = 0;
        }

        private void btnThemDv_Click(object sender, EventArgs e)
        {
            if(dataGridDS_DV.SelectedRows.Count > 0)
            {
                int rowIndex = dataGridDS_DV.SelectedCells[0].RowIndex;
                string maDv = dataGridDS_DV.Rows[rowIndex].Cells["MaDv"].Value.ToString();
                string tenDv = dataGridDS_DV.Rows[rowIndex].Cells["TenDv"].Value.ToString();
                long price = long.Parse(dataGridDS_DV.Rows[rowIndex].Cells["Price"].Value.ToString());
                DichVu d = new DichVu(maDv,tenDv,price);
                listDvsDaChon.Add(d);
                dataGridDSDV_DaChon.DataSource = null;
                dataGridDSDV_DaChon.DataSource = listDvsDaChon;
                long total = 0;
                foreach(var s in listDvsDaChon)
                {
                    total += s.Price;
                }
                txtTotal.Text = total.ToString();
            } else
            {
                MessageBox.Show("Chua chon dich vu");
            }
        }

        private void btnTaoHD_Click(object sender, EventArgs e)
        {
            string maHd = txtMaHD.Text;
            string tenKh = cbboxKH.SelectedItem.ToString();
            KhachHang k = new KhachHang();
            foreach(var s in DanhSachKH.ListKhs)
            {
                if(s.TenKh.Equals(tenKh))
                {
                    k = s;
                    break;
                }
            }
            HoaDon hoaDon = new HoaDon(maHd, k,listDvsDaChon,long.Parse(txtTotal.Text));
            MessageBox.Show("Tao Hoa Don Thanh Cong");
            this.Close();
        }
    }
}
