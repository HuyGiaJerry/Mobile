#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CanBo {
protected:
    string HoTen, GioiTinh;
    int NamSinh;
public:
    CanBo(): HoTen(""), GioiTinh(""), NamSinh(0) {}
    CanBo(string HoTen, string GioiTinh, int NamSinh): HoTen(HoTen), GioiTinh(GioiTinh), NamSinh(NamSinh) {}

    virtual void nhap() {
        cout << "\nNhap ho ten: ";
        getline(cin, this->HoTen);
        cout << "Nhap gioi tinh: ";
        getline(cin, this->GioiTinh);
        cout << "Nhap nam sinh: ";
        cin >> this->NamSinh;
        cin.ignore(); 
    }

    virtual void xuat() const {
        cout << "\nHo ten: " << this->HoTen << " - GioiTinh: " << this->GioiTinh << " - NamSinh: " << this->NamSinh;
    }

    bool nghihuu() const {
        return (2019 - this->NamSinh) > 60; 
    }

    virtual float luong() = 0;
};

class BienChe : public CanBo {
private:
    string DonVi;
    float HSLuong;
public:
    BienChe(): DonVi(""), HSLuong(0.0) {}
    BienChe(string HoTen, string GioiTinh, int NamSinh, string DonVi, float HSLuong)
        : CanBo(HoTen, GioiTinh, NamSinh), DonVi(DonVi), HSLuong(HSLuong) {}

    float luong() override {
        return nghihuu() ? (0.7 * 131 * HSLuong) : (131 * HSLuong);
    }
};

class HopDong : public CanBo {
private:
    int namCongTac;
    float HeSoThamNien;
    float MucLuong;
public:
    HopDong(string HoTen, string GioiTinh, int NamSinh, int namCongTac, float HeSoThamNien, float MucLuong)
        : CanBo(HoTen, GioiTinh, NamSinh), namCongTac(namCongTac), HeSoThamNien(HeSoThamNien), MucLuong(MucLuong) {}

    void nhap() override {
        CanBo::nhap();
        cout << "Nhap nam cong tac: ";
        cin >> this->namCongTac;
        cout << "Nhap he so tham nien: ";
        cin >> this->HeSoThamNien;
        cout << "Nhap muc luong co ban: ";
        cin >> this->MucLuong;
        cin.ignore();
    }

    void xuat() const override {
        CanBo::xuat();
        cout << " - Nam Cong Tac: " << this->namCongTac << " - He So Tham Nien: " << this->HeSoThamNien << " - Muc Luong Co Ban: " << this->MucLuong;
    }

    float luong() override {
        return nghihuu() ? 0 : this->MucLuong * this->HeSoThamNien;
    }
};

int main() {
    HopDong hd("Nguyen Gia Huy", "Male", 2004, 10, 2.4, 1000000);
    hd.xuat();
    cout << "\nLuong: " << hd.luong() << endl;
    
    return 0;
}
