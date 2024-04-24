#include <iostream>
#include <string>
using namespace std;

class DichVu {
private:
    int maDV;
    string tenDV;
    float giaCuoc;

public:
    DichVu() {}

    void Nhap() {
        cout << "Nhap ma dich vu: ";
        cin >> maDV;
        cin.ignore(); // Xóa bộ nhớ đệm để nhập chuỗi kí tự
        cout << "Nhap ten dich vu: ";
        getline(cin, tenDV);
        cout << "Nhap gia cuoc: ";
        cin >> giaCuoc;
    }

    void Xuat() {
        cout << "Ma dich vu: " << maDV << endl;
        cout << "Ten dich vu: " << tenDV << endl;
        cout << "Gia cuoc: " << giaCuoc << endl;
    }

    float LayGiaCuoc() const {
        return giaCuoc;
    }

    friend ostream& operator<<(ostream& os, const DichVu& dv) {
        os << "Ma dich vu: " << dv.maDV << endl;
        os << "Ten dich vu: " << dv.tenDV << endl;
        os << "Gia cuoc: " << dv.giaCuoc << endl;
        return os;
    }
};

class Nguoi {
protected:
    string hoTen;
    string diaChi;
    string soDT;

public:
    Nguoi() {}

    void Nhap() {
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
        cout << "Nhap so dien thoai: ";
        getline(cin, soDT);
    }

    void Xuat() {
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
    KhachHang() {}

    void Nhap() {
        Nguoi::Nhap(); // Gọi phương thức nhập của lớp Nguoi

        cout << "Nhap so luong dich vu: ";
        cin >> soLuongDichVu;
        cin.ignore(); // Xóa bộ nhớ đệm để nhập chuỗi kí tự

        cout << "Nhap thong tin cac dich vu:" << endl;
        for (int i = 0; i < soLuongDichVu; ++i) {
            cout << "Dich vu thu " << i + 1 << ":" << endl;
            dv[i].Nhap();
        }
    }

    void Xuat() {
        Nguoi::Xuat(); // Gọi phương thức xuất của lớp Nguoi

        cout << "Cac dich vu da su dung:" << endl;
        for (int i = 0; i < soLuongDichVu; ++i) {
            cout << "Dich vu thu " << i + 1 << ":" << endl;
            cout << dv[i];
        }
    }

    float TongGiaCuoc() const {
        float tongGiaCuoc = 0;
        for (int i = 0; i < soLuongDichVu; ++i) {
            tongGiaCuoc += dv[i].LayGiaCuoc();
        }
        return tongGiaCuoc;
    }

    friend ostream& operator<<(ostream& os, const KhachHang& kh) {
        os << "Thong tin khach hang:" << endl;
        os << "Ho ten: " << kh.hoTen << endl;
        os << "Dia chi: " << kh.diaChi << endl;
        os << "So dien thoai: " << kh.soDT << endl;
        os << "Cac dich vu da su dung:" << endl;
        for (int i = 0; i < kh.soLuongDichVu; ++i) {
            os << "Dich vu thu " << i + 1 << ":" << endl;
            os << kh.dv[i] << endl;
        }
        os << "Tong gia cuoc: " << kh.TongGiaCuoc() << endl;
        return os;
    }
};

int main() {
    KhachHang kh;

    cout << "Nhap thong tin khach hang:" << endl;
    kh.Nhap();

    cout << kh;

    return 0;
}