using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH_N2_QLKH_HDDV
{
    class DichVu
    {
        private string maDv;
        private string tenDv;
        private long price;

        public DichVu()
        {
        }

        public DichVu(string maDv, string tenDv, long price)
        {
            this.maDv = maDv;
            this.tenDv = tenDv;
            this.price = price;
        }


        public string MaDv
        {
            get { return maDv; }
            set { maDv = value; }
        }

        public string TenDv
        {
            get { return tenDv; }
            set { tenDv = value; }
        }

        public long Price
        {
            get { return price; }
            set { price = value; }
        }

    }
}
