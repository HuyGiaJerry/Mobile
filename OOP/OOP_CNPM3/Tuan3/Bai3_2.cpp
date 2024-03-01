    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    class SACH
    {
        private:
            string masach;
            string tensach;
        public:
            SACH(string masach="",string tensach="")
            {
                this->masach = masach;
                this->tensach = tensach;
            }
            void inputData()
            {
                cout << endl << "---Nhap Thong Tin Sach---";
                cout << endl << "Nhap ma sach: ";
                getline(cin,masach);
                cout << endl << "Nhap ten sach: ";
                getline(cin,tensach);
            }
            void displayData()
            {
                cout << endl << "< Ma :" << masach << " - Ten :"<<tensach<<" >";
            }
            ~SACH(){}
    };
    int main()
    {
        SACH s1("Ma111","TenSach000");
        s1.displayData();
        SACH s2;
        s2.inputData();
        s2.displayData();
    }