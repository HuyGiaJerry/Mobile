using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class ConnectDb
    {
        SqlConnection conn = null;

        public ConnectDb() {
            string sql = "Data Source=JERRY\\SQLEXPRESS;Initial Catalog=MobileShop;User ID=sa;Password = 1234$;TrustServerCertificate=True";
            conn = new SqlConnection(sql);
            Console.WriteLine("aaaaaaaaaa");
        }

        public DataSet getData(string sql) {
            try
            {
                DataSet ds = new DataSet();
                SqlDataAdapter da = new SqlDataAdapter(sql, conn);
                da.Fill(ds);
                return ds;
            }
            catch (SqlException ex){ 
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
                Console.WriteLine("SQL Query: " + cmd.CommandText);  // In câu lệnh SQL
                Console.WriteLine("Parameters:");
                foreach (SqlParameter param in cmd.Parameters)
                {
                    Console.WriteLine($"Param: {param.ParameterName}, Value: {param.Value}");
                }

                conn.Open();
                cmd.Connection = conn;
                int r = cmd.ExecuteNonQuery();
                conn.Close();

                Console.WriteLine("Rows affected: " + r);
                return r > 0;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error executing SQL: " + ex.Message);
                return false;
            }
        }





    }
}
