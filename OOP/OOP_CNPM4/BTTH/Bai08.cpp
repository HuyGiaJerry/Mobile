#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class PhanSo
{
    private:
        int tuso;
        int mauso;
    public:
        PhanSo();
        PhanSo(int tuso,int mauso);
        void inputPhanSo();
        void displayPhanSo();
        int USCLN(int a,int b);
        // Sử dụng hàm friend để truy cập tới các trường trực tiếp , và có thể truy cập đc ở bên ngoài phương thức kể cả private
        friend PhanSo operator+(const PhanSo &a,const PhanSo &b);
        // KO sử dụng friend cũng không sao t dùng this 
        PhanSo operator-(const PhanSo &other)const;
        // PhanSo operator*(const PhanSo &a,const PhanSo &b);      Cách khai báo sẽ bị lỗi vì không thể truy cập được khi nạp chồng toán tử
        PhanSo operator*(const PhanSo &a)const;
        friend PhanSo operator/(const PhanSo &a,const PhanSo &b);
        ~PhanSo();
};
PhanSo::PhanSo(){};
PhanSo::PhanSo(int tuso,int mauso)
{
    this->tuso = tuso;
    this->mauso = mauso;
}
void PhanSo::inputPhanSo()
{
    cout << endl << "Nhap tu so: ";
    cin >> this->tuso;
    do
    {
        cout << endl << "Nhap mau so: ";
        cin >> this->mauso;
    }while(this->mauso == 0);
}
int PhanSo::USCLN(int a,int b)
{
    while( b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void PhanSo::displayPhanSo()
{
    PhanSo ps;
    int MAX_USC = ps.USCLN(this->tuso,this->mauso);
    cout << endl << "Phan so: " << this->tuso << " / " << this->mauso;
    cout << endl << "Phan so sau khi thu gon: " << this->tuso /  MAX_USC << " / " << this->mauso / MAX_USC; 
}
PhanSo operator+(const PhanSo &a,const PhanSo &b)
{
    PhanSo result;
    result.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    result.mauso = a.mauso * b.mauso;
    return result;
}
PhanSo PhanSo::operator-(const PhanSo &other) const
{
    PhanSo result;
    result.tuso = this->tuso * other.mauso - other.tuso * this->mauso;
    result.mauso = this->mauso * other.mauso;
    return result;
}
PhanSo PhanSo::operator*(const PhanSo &other) const
{
    PhanSo result;
    result.tuso = this->tuso * other.tuso;
    result.mauso = this->mauso * other.mauso;
    return result;
}
PhanSo operator/(const PhanSo &a,const PhanSo &b)
{
    PhanSo result;
    result.tuso = a.tuso * b.mauso;
    result.mauso = a.mauso * b.tuso;
    return result;
}
PhanSo::~PhanSo(){};
int main()
{
    PhanSo a,b,c;
    a.inputPhanSo();
    b.inputPhanSo();
    // c = a + b;
    c = a / b;
    c.displayPhanSo();
}
