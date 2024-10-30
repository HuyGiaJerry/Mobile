using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KiemTra01
{
    class Cart
    {
        private List<Product> products = new List<Product>();

        public Cart() { }

        public Cart(List<Product> pts) {
            products = pts;
        }

        public List<Product> ShoppingCart
        {
            get { return products; }
            set { products = value; }
        }

        // Them moi 1 san pham
        public void add(Product p) { 

            var product = products.FirstOrDefault(x => x.ProductName == p.ProductName);

            if(product != null)
            {
                product.Quantity += 1;
            }
            else 
                products.Add(p);
        }
        // Xoa 1 san pham
        public void remove(Product p)
        {
            var product = products.FirstOrDefault(x => x.ProductName == p.ProductName);
            if (product != null)
                products.Remove(product);
        }
        // Tinh tong so tien cac san pham
        public double getTotalPrice()
        {
            double total = 0;
            foreach (Product p in products)
            {
                total += p.Price*p.Quantity;
            }
            return total;
        }

        public void clearListCart()
        {
            if(products.Count > 0) 
                products.Clear();
        }


    }
}
