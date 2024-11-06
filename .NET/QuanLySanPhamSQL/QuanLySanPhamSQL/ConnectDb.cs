using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPhamSQL
{
    class ConnectDb
    {
        SqlConnection conn = null;
        
        public ConnectDb()
        {
            string sql = "Data Source=JERRY\\SQLEXPRESS;Initial Catalog=CSharp_QLSP;User ID=sa;Password = 1234$;TrustServerCertificate=True";
            conn = new SqlConnection(sql);
        }

        public DataSet getData(string sql)
        {
            try
            {
                DataSet ds = new DataSet();
                SqlDataAdapter da = new SqlDataAdapter(sql, conn);
                da.Fill(ds);
                return ds;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return null;
            }
        }
        public DataSet getData(SqlCommand cmd)
        {
            try
            {
                DataSet ds = new DataSet();
                cmd.Connection = conn;
                SqlDataAdapter da = new SqlDataAdapter(cmd);
                da.Fill(ds);
                return ds;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return null;
            }
        }
        public bool doTransaction(string sql)
        {
            try
            {
                conn.Open();
                SqlCommand cmd = new SqlCommand(sql, conn);
                int r = cmd.ExecuteNonQuery();
                conn.Close();
                return r > 0;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return false;
            }
        }

        public bool doTransaction(SqlCommand cmd)
        {
            try
            {
                conn.Open();
                cmd.Connection = conn;
                int r = cmd.ExecuteNonQuery();
                conn.Close();
                return r > 0;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return false;
            }
        }



    }
}
