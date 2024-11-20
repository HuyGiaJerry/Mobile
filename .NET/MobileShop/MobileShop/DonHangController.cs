using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace MobileShop
{
    class DonHangController
    {
        public DataSet getAll()
        {
            string sql = "Select * from DonHang";
            DataSet da = new ConnectDb().getData(sql);
            if (da != null)
                return da;
            else return null;

        }

        public DonHang searchById(int id)
        {
            string sql = "SELECT * FROM DonHang WHERE id = @id";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@id", $"{ id}");

            DataSet ds = new ConnectDb().getData(cmd);

            if (ds == null)
            {
                return null;
            }

            if (ds.Tables.Count == 0)
            {
                return null;
            }

            if (ds.Tables[0].Rows.Count == 0)
            {
                return null;
            }

            DataRow row = ds.Tables[0].Rows[0];
            DonHang dh = new DonHang
            {
                DonHangID = id,
                KHID = Convert.ToInt32(row["khachhangid"]),
                SpID = Convert.ToInt32(row["sanphamid"]),
                SoLUONG = Convert.ToInt32(row["soluong"]),
                NgayMua = Convert.ToDateTime(row["ngaymua"])
            };
            return dh;
        }




        public bool Insert(DonHang dh)
        {
            string sql = "Insert into DonHang Values(@khid,@spid,@soluong,@ngaymua)";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@khid", $"{dh.KHID}");
            cmd.Parameters.AddWithValue("@spid", $"{dh.SpID}");
            cmd.Parameters.AddWithValue("@soLuong", $"{dh.SoLUONG}");
            cmd.Parameters.AddWithValue("@ngaymua", $"{dh.NgayMua}");

            bool ck = new ConnectDb().doTransaction(cmd);

            return ck;

        }
        public bool Update(DonHang dh)
        {
            string sql = "Update DonHang Set khachhangid = @khId, sanphamid = @spid , soluong = @soluong , ngaymua = @nm where id = @id";

            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@id", dh.DonHangID);  // Truyền đúng kiểu int
            cmd.Parameters.AddWithValue("@khId", dh.KHID);    // Truyền đúng kiểu int
            cmd.Parameters.AddWithValue("@spid", dh.SpID);    // Truyền đúng kiểu int
            cmd.Parameters.AddWithValue("@soluong", dh.SoLUONG);  // Truyền đúng kiểu int
            cmd.Parameters.AddWithValue("@nm", dh.NgayMua);  // Truyền đúng kiểu DateTime

            try
            {
                bool ck = new ConnectDb().doTransaction(cmd);
                Console.WriteLine("loi1111 :"+ck);
                return ck;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error: " + ex.Message);  // Kiểm tra lỗi nếu có
                return false;
            }
        }

        public bool Delete(DonHang dh) {
            string sql = "Delete DonHang where id = @id";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@id", $"{dh.DonHangID}");


            bool ck = new ConnectDb().doTransaction(cmd);

            return ck;
        }

    }
}
