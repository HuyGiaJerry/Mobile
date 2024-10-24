using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace quanLySinhVien
{
    internal class SinhVien
    {
        private string studentId;
        private string studentName;
        private string date;
        private string address;
        private string email;
        private string phone;
        private string gender;
        private string department;

        public SinhVien()
        {
        }

        public SinhVien(string studentId, string studentName, string date, string address, string email, string phone, string gender, string department)
        {
            this.studentId = studentId;
            this.studentName = studentName;
            this.date = date;
            this.address = address;
            this.email = email;
            this.phone = phone;
            this.gender = gender;
            this.department = department;
        }

        public String StudentId
        { 
            get { return studentId; }
            set { this.studentId = value; }
        }

        public String StudentName
        { 
            get { return studentName; }
            set { this.studentName = value; }
        }

        public string Date
        {
            get { return date; }
            set { date = value; }
        }

        public string Address
        { 
            get { return address; }
            set { address = value; }
        }

        public string Email
        { 
            get { return email; }
            set { email = value; }
        }

        public string Phone
        {
            get { return phone; }
            set { phone = value; }
        }
        public string Gender
        { 
            get{ return gender; }
            set { gender = value; }
        }

        public string Department
        {
            get { return department; }
            set { department = value; }
        }
    }
}
