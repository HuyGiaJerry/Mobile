#include <iostream>
#include <string>
using namespace std;

class DichVu {
private:
    string maDV;
    string tenDV;
    float giaCuoc;

public:
    DichVu() : maDV(""), tenDV(""), giaCuoc(0) {}

    void Nhap() {
        cout << "Nhap ma dich vu: ";
        getline(cin, maDV);
        cout << "Nhap ten dich vu: ";
        getline(cin, tenDV);
        cout << "Nhap gia cuoc: ";
        cin >> giaCuoc;
        cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập số
    }

    void Xuat() const {
        cout << "Ma dich vu: " << maDV << endl;
        cout << "Ten dich vu: " << tenDV << endl;
        cout << "Gia cuoc: " << giaCuoc << endl;
    }

    float LayGiaCuoc() const {
        return giaCuoc;
    }
};

class Nguoi {
private:
    string hoTen;
    string diaChi;
    string soDT;

public:
    Nguoi() : hoTen(""), diaChi(""), soDT("") {}

    void Nhap() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
        cout << "Nhap so dien thoai: ";
        getline(cin, soDT);
    }

    void Xuat() const {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Dia chi: " << diaChi << endl;
        cout << "So dien thoai: " << soDT << endl;
    }
};

class KhachHang : public Nguoi {
private:
    int soLuongDichVu;
    DichVu dv[100];

public:
    KhachHang() : soLuongDichVu(0) {}

    void Nhap() {
        Nguoi::Nhap();
        cout << "Nhap so luong dich vu da su dung: ";
        cin >> soLuongDichVu;
        cin.ignore(); // Xóa bộ nhớ đệm
        for (int i = 0; i < soLuongDichVu; ++i) {
            cout << "Nhap thong tin dich vu thu " << i + 1 << ": " << endl;
            dv[i].Nhap();
        }
    }

    void Xuat() const {
        Nguoi::Xuat();
        cout << "Dich vu da su dung:" << endl;
        for (int i = 0; i < soLuongDichVu; ++i) {
            cout << "Thong tin dich vu thu " << i + 1 << ": " << endl;
            dv[i].Xuat();
        }
    }

    void TongGiaCuoc() const {
        float tong = 0;
        for (int i = 0; i < soLuongDichVu; ++i) {
            tong += dv[i].LayGiaCuoc();
        }
        cout << "Tong gia cuoc: " << tong << endl;
    }
};

int main() {
    KhachHang kh;
    cout << "Nhap thong tin khach hang: " << endl;
    kh.Nhap();
    cout << "\nThong tin khach hang va dich vu da su dung:" << endl;
    kh.Xuat();
    kh.TongGiaCuoc();
    return 0;
}
