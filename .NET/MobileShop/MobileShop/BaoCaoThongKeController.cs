using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class BaoCaoThongKeController
    {
        public DataSet GetSalesStatistics()
        {
            // SQL queries for the statistics
            string sqlTotalCustomers = "SELECT COUNT(DISTINCT khachhangid) AS TongKhachHang FROM DonHang";
            string sqlTotalProducts = "SELECT SUM(soluong) AS TongSoLuongBanRa FROM DonHang";
            string sqlTotalOrders = "SELECT COUNT(*) AS TongDonHang FROM DonHang";

            // Create a DataSet to hold the result
            DataSet dataSet = new DataSet();

            try
            {
                // Execute queries and fill the DataSet
                // Clone the DataTable to avoid the "already belongs" error
                DataTable dtCustomers = new ConnectDb().getData(sqlTotalCustomers).Tables[0].Copy();
                DataTable dtProducts = new ConnectDb().getData(sqlTotalProducts).Tables[0].Copy();
                DataTable dtOrders = new ConnectDb().getData(sqlTotalOrders).Tables[0].Copy();

                // Add tables to the DataSet
                dtCustomers.TableName = "TongKhachHang";
                dtProducts.TableName = "TongSoLuongBanRa";
                dtOrders.TableName = "TongDonHang";

                dataSet.Tables.Add(dtCustomers);
                dataSet.Tables.Add(dtProducts);
                dataSet.Tables.Add(dtOrders);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Error: " + ex.Message);
            }

            return dataSet;
        }
    }
}

