using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace QuanLySanPhamSQL
{
    class Product
    {
        private string productId;
        private string productName;
        private int quantity;
        private string phoneNumber;

        public Product() { }

        public Product(string productId, string productName, int quantity, string phoneNumber)
        {
            this.productId = productId;
            this.productName = productName;
            this.quantity = quantity;
            this.phoneNumber = phoneNumber;
        }

        public string ProductId
        {
            get { return this.productId; }
            set { this.productId = value; }
        }

        public string ProductName
        {
            get { return this.productName; }
            set { this.productName = value; }
        }

        public int Quantity
        {
            get { return this.quantity; }
            set { this.quantity = value; }
        }
        public string PhoneNumber
        {
            get { return this.phoneNumber; }
            set { this.phoneNumber = value; }
        }

    }
}
