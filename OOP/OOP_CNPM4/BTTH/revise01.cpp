#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CanBo
{
    private:
        string name;
        string gioitinh;
        int year;
    public:
        CanBo()
        {
            this->name = this->gioitinh = "";
            this->year = 0;
        }
        void Nhap()
        {
            cout << endl << "Nhap name: ";
            getline(cin,this->name);
            cout << endl << "Nhap gioi tinh: ";
            getline(cin,this->gioitinh);
            cout << endl << "Nhap year: ";
            cin >> year;
            cin.ignore();
        }
        void Xuat()
        {
            cout << endl << " <-- Name: " << this->name << " - GioiTinh: "  << this->gioitinh << " - Year: " << this->year;
        }
        int getTuoi()
        {
            return 2019 - this->year;
        }
        virtual bool nghihuu() = 0;
       
        virtual float luong() = 0 ;

};

class BienChe : public CanBo
{
    private:
        string donvi;
        double HSLUONG;
    public:
        BienChe() : CanBo() , donvi("") , HSLUONG(0.0){}
        void Nhap()
        {
            CanBo::Nhap();
            cout << endl << "Nhap DonVi: ";
            getline(cin,this->donvi);
            cout << endl << "Nhap HSLUONG: ";
            cin >> this->HSLUONG;
            cin.ignore();
        }
        void Xuat()
        {
            CanBo::Xuat();
            cout << " - DonVi: " << this->donvi << " - HSluong: " << this->HSLUONG ;
        }
        bool NghiHuu()
        {
            return getTuoi() >= 60;
        }
        float luong()
        {
            return (NghiHuu()) ? HSLUONG * 1310 * 0.7 : HSLUONG * 1310; 
        }

};

class HopDong : public BienChe
{
    private:
        int namCongTac;
        float HSThamNien;
        double mucLuong;
    public:
        HopDong() : BienChe() , namCongTac(0) , HSThamNien(0.0) , mucLuong(0.0) {}
        void Nhap()
        {
            CanBo::Nhap();
            cout << endl << "Nhap nam cong tac: ";
            cin >> this->namCongTac;
            cout << endl << "Nhap hs tham nien: ";
            cin >> this->HSThamNien;
            cout << endl << "Nhap muc luong: ";
            cin >> this->mucLuong;
            cin.ignore();
        }
        void Xuat()
        {
            CanBo::Nhap();
            cout << " - Nam cong tac: " << this->namCongTac << " - HSTHAMNIEN : " << this->HSThamNien << " - Luong: " << this->mucLuong << " -->";
        }
        bool NghiHuu()
        {
            return namCongTac >= 35;
        }
        float luong()
        {
            return (NghiHuu()) ? 0 : mucLuong * HSThamNien;
        }
};

int main()
{
    HopDong *hd = new HopDong[1];
    hd.Nhap();
    hd.Xuat();
    return 0;
}