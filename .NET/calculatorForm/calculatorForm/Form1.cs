using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculatorForm
{
    public partial class Form1 : Form
    {
        string input = string.Empty;
        public Form1()
        {
            InitializeComponent();
        }

        private void button10_Click(object sender, EventArgs e)
        {
            input = string.Empty;  
            textOutPut.Text = "0";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void button15_Click(object sender, EventArgs e)
        {
            Button button = sender as Button;
            input += " " + button.Text + " ";
            textOutPut.Text = input;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btn1_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btn5_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btn8_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btn0_Click(object sender, EventArgs e)
        {
            Button btn = sender as Button;
            input += btn.Text;
            textOutPut.Text = input;
        }

        private void btnCong_Click(object sender, EventArgs e)
        {
            Button button = sender as Button;
            input += " "+ button.Text+ " ";
            textOutPut.Text = input;
        }

        private void btnTru_Click(object sender, EventArgs e)
        {
            Button button = sender as Button;
            input += " " + button.Text + " ";
            textOutPut.Text = input;
        }

        private void btnChia_Click(object sender, EventArgs e)
        {
            Button button = sender as Button;
            input += " " + button.Text + " ";
            textOutPut.Text = input;
        }

        private void btnEqual_Click(object sender, EventArgs e)
        {
            try
            {
                var result = new DataTable().Compute(input, null);
                textOutPut.Text = result.ToString();  // Hiển thị kết quả
                input = result.ToString();  // Lưu kết quả để tiếp tục tính toán nếu cần
            }
            catch {
                textOutPut.Text = "Error";
            }

        }
    }
}
