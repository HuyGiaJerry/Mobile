using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPhamSQL
{
    class ProductController
    {
        public List<Product> getAll()
        {
            string sql = "Select * from SanPham";

            DataSet da = new ConnectDb().getData(sql);

            List<Product> products = new List<Product>();

            if (da != null && da.Tables.Count > 0)
            {
                foreach (DataRow row in da.Tables[0].Rows)
                {
                    
                    Product product = new Product
                    {
                        ProductId = row["MaSP"].ToString(),
                        ProductName = row["TenSP"].ToString(),
                        Quantity = Convert.ToInt32(row["SoLuong"]),
                        PhoneNumber = row["Sdt"].ToString()

                    };
                    products.Add(product);
                }
            }
            else
                Console.WriteLine("DataSet NULL");
            return products;

        }

        public List<Product> searchByName(string name) {
            string sql ="Select * from SanPham where TenSP like @name";

            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@name", $"%{name}%");

            DataSet da = new ConnectDb().getData(cmd);

            List< Product> products = new List<Product>();

            if(da != null && da.Tables.Count > 0)
            {
                foreach (DataRow row in da.Tables[0].Rows)
                {

                    Product product = new Product
                    {
                        ProductId = row["MaSP"].ToString(),
                        ProductName = row["TenSP"].ToString(),
                        Quantity = Convert.ToInt32(row["SoLuong"]),
                        PhoneNumber = row["Sdt"].ToString()

                    };
                    products.Add(product);
                }
            }
            else
                Console.WriteLine("DataSet NULL");
            return products;

        }

        public void insert(Product p) {
            string sql = "Insert into SanPham Values(@maSp,@tenSP,@soLuong,@Sdt)";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@maSp", $"{p.ProductId}");
            cmd.Parameters.AddWithValue("@tenSp", $"{p.ProductName}");
            cmd.Parameters.AddWithValue("@soLuong", $"{p.Quantity}");
            cmd.Parameters.AddWithValue("@Sdt", $"{p.PhoneNumber}");

            bool ck = new ConnectDb().doTransaction(cmd);

            if (ck) {
                Console.WriteLine("Insert Success !");
            } else
                Console.WriteLine("Insert Fail !");
        }

        public void update(Product p)
        {
            string sql = "Update SanPham Set TenSP = @tenSp, SoLuong = @sl , Sdt = @sdt where MaSP = @id";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@id", $"{p.ProductId}");
            cmd.Parameters.AddWithValue("@tenSp", $"{p.ProductName}");
            cmd.Parameters.AddWithValue("@sl", $"{p.Quantity}");
            cmd.Parameters.AddWithValue("@sdt", $"{p.PhoneNumber}");

            bool ck = new ConnectDb().doTransaction(cmd);

            if (ck)
            {
                Console.WriteLine("Update Success !");
            }
            else
                Console.WriteLine("Update Fail !");
        }

        public void delete(string id)
        {
            string sql = "Delete SanPham where MaSP = @id";
            SqlCommand cmd = new SqlCommand(sql);
            cmd.Parameters.AddWithValue("@id", $"{id}");
            

            bool ck = new ConnectDb().doTransaction(cmd);

            if (ck)
            {
                Console.WriteLine("Delete Success !");
            }
            else
                Console.WriteLine("Delete Fail !");
        }


    }
}
