using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MobileShop
{
    public partial class frmMain : Form
    {

        private static int choosen = 0;
        private static int hoaDonId = 0;
        public frmMain()
        {
            InitializeComponent();
            fillDataGridViewDonHang();
            fillDataBaoCaoThongKe();
        }


        public void fillDataGridViewDonHang()
        {
           // dataGridViewDonHang.DataSource = null;
            dataGridViewDonHang.DataSource = new DonHangController().getAll().Tables[0];

        }

        public void fillDataBaoCaoThongKe()
        {
            // Lấy dữ liệu từ phương thức GetSalesStatistics
            DataSet result = new BaoCaoThongKeController().GetSalesStatistics();
            if (result != null)
            {
                // Kiểm tra nếu các bảng có dữ liệu
                if (result.Tables.Contains("TongKhachHang") && result.Tables["TongKhachHang"].Rows.Count > 0)
                {
                    // Sao chép bảng
                    DataTable dtCustomers = result.Tables["TongKhachHang"].Copy();
                    int totalCustomers = Convert.ToInt32(dtCustomers.Rows[0]["TongKhachHang"]);
                    lbTotalKH.Text = totalCustomers.ToString();
                }

                if (result.Tables.Contains("TongSoLuongBanRa") && result.Tables["TongSoLuongBanRa"].Rows.Count > 0)
                {
                    // Sao chép bảng
                    DataTable dtProducts = result.Tables["TongSoLuongBanRa"].Copy();
                    int totalProducts = Convert.ToInt32(dtProducts.Rows[0]["TongSoLuongBanRa"]);
                    lbAmountSellProduct.Text = totalProducts.ToString();
                }

                if (result.Tables.Contains("TongDonHang") && result.Tables["TongDonHang"].Rows.Count > 0)
                {
                    // Sao chép bảng
                    DataTable dtOrders = result.Tables["TongDonHang"].Copy();
                    int totalOrders = Convert.ToInt32(dtOrders.Rows[0]["TongDonHang"]);
                    lbTotalDonHang.Text = totalOrders.ToString();
                }
            }
            else
            {
                // Nếu result trả về null, có thể hiển thị thông báo lỗi
                MessageBox.Show("Không có dữ liệu thống kê.");
            }
        }




        private void btnDanhMucSP_Click(object sender, EventArgs e)
        {
            dmSanPham.BringToFront();
        }

        private void btnDanhMucKH_Click(object sender, EventArgs e)
        {
            dmKhachHang.BringToFront();
        }

        private void btnDonHang_Click(object sender, EventArgs e)
        {
            dmDonHang.BringToFront();
        }

        private void btnTim_Click(object sender, EventArgs e)
        {
            int donHangId = Convert.ToInt32(txtDonHangId.Text);
            DonHang donHang = new DonHangController().searchById(donHangId);

            if (donHang != null)
            {
                // Tạo danh sách từ đối tượng đơn hàng
                List<DonHang> list = new List<DonHang> { donHang };
                dataGridViewDonHang.DataSource = list;
            }
            else
            {
                MessageBox.Show("Khong tim thay don hang id = " + donHangId);
            }

        }

        private void btnBaoCaoThongKE_Click(object sender, EventArgs e)
        {
            dmBaoCaoThongKe.BringToFront();
        }

        private void btnInsert_Click(object sender, EventArgs e)
        {
            insertDonHang.BringToFront();
            lbEdit.Text = "Thêm Hóa Đơn";
        }

        private void btnUpdate_Click(object sender, EventArgs e)
        {
            choosen = 1;
            if (dataGridViewDonHang.CurrentRow != null)
            {
                int rowIndex = dataGridViewDonHang.CurrentRow.Index;
                int dhId = Convert.ToInt32(dataGridViewDonHang.Rows[rowIndex].Cells["id"].Value);
                
                hoaDonId = dhId;
                DonHang d = new DonHangController().searchById(dhId);
                insertDonHang.BringToFront();

                txtKhId.Text = d.KHID.ToString();
                txtSPId.Text = d.SpID.ToString();
                txtSoLuong.Text = d.SoLUONG.ToString();
                dateTimePickerNgayMua.Value = d.NgayMua;
                lbEdit.Text = "Sửa Hóa Đơn";


            }
            else
                MessageBox.Show("Chưa chọn đơn hàng sửa");
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (dataGridViewDonHang.CurrentRow != null)
            {
                int rowIndex = dataGridViewDonHang.CurrentRow.Index;
                int dhId = Convert.ToInt32(dataGridViewDonHang.Rows[rowIndex].Cells["id"].Value);
                DonHang d = new DonHangController().searchById(dhId);
                if(new DonHangController().Delete(d))
                {
                    MessageBox.Show("Delete Success");
                    fillDataGridViewDonHang();
                }
                else
                    MessageBox.Show("Delete Fail");

            } else
                MessageBox.Show("Chưa chọn đơn hàng xóa");
        }

        private void btnExit_Click(object sender, EventArgs e)
        {

        }

        private void btnLuu_Click(object sender, EventArgs e)
        {
            if(choosen == 0)
            {
                int khId = Convert.ToInt32(txtKhId.Text);
                int spid = Convert.ToInt32(txtSPId.Text);
                int sl = Convert.ToInt32(txtSoLuong.Text);
                DateTime dt = dateTimePickerNgayMua.Value;
                DonHang d = new DonHang(khId, spid, sl, dt);

                if (new DonHangController().Insert(d))
                {
                    MessageBox.Show("Insert Success");
                    dmDonHang.BringToFront();
                    fillDataGridViewDonHang();
                }
            }
            else
            {
                int khId = Convert.ToInt32(txtKhId.Text);
                int spid = Convert.ToInt32(txtSPId.Text);
                int sl = Convert.ToInt32(txtSoLuong.Text);
                DateTime dt = dateTimePickerNgayMua.Value;
                
                DonHang d = new DonHang(hoaDonId,khId, spid, sl, dt);

                if (new DonHangController().Update(d))
                {
                    MessageBox.Show("Update Success");
                    dmDonHang.BringToFront();
                    fillDataGridViewDonHang();
                }
                else
                    MessageBox.Show("Update Fail");
            }

        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            dmDonHang.BringToFront();
        }
    }
}
