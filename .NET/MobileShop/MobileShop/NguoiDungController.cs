using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MobileShop
{
    class NguoiDungController
    {
        public List<NguoiDung> getAll()
        {
            string sql = "Select * from NguoiDung";
            DataSet da = new ConnectDb().getData(sql);
            List<NguoiDung> list = new List<NguoiDung>();
            if (da != null && da.Tables.Count > 0)
            {
                foreach (DataRow row in da.Tables[0].Rows)
                {
                    NguoiDung nd = new NguoiDung();
                    string TenND = row["tendangnhap"].ToString();
                    string matKhau = row["matkhau"].ToString().ToLower();
                    nd.Tendangnhap = TenND;
                    nd.MatKhau = matKhau;
                    list.Add(nd);
                }
                return list;
            }
            return null;
            
        }

    }
}
