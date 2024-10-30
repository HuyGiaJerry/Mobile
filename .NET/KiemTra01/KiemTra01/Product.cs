using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KiemTra01
{
    class Product
    {
        private string productName;
        private string imgUrl;
        private double price;
        private int quantity;

        public Product()
        {
        }

        public Product(string productName, string imgUrl, double price, int quantity)
        {
            this.productName = productName;
            this.imgUrl = imgUrl;
            this.price = price;
            this.quantity = quantity;
        }

        public string ProductName
        { 
            get { return productName; } 
            set { productName = value; }
        }

        public double Price
        {
            get { return price; }
            set { price = value; }
        }

        public int Quantity
        { 
            get { return quantity; } 
            set { quantity = value; } 
        }

        public string ImageUrl
        {
            get { return imgUrl; }
            set { imgUrl = value; }
        }
    }
}
