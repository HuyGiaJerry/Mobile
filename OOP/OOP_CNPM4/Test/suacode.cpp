#include <bits/stdc++.h>

using namespace std;

class nhanvien
{
private:
    string id, ten, gioitinh, ns, diachi, masothue;
    static int dem;

public:
    nhanvien();
    nhanvien(string, string, string, string, string, string);
    ~nhanvien();
    friend istream &operator>>(istream &in, nhanvien &a);
    friend ostream &operator<<(ostream &out, nhanvien a);
    int getDem();
    void tangdem();
    //		void chuan_hoa_ngay_sinh();
};
nhanvien::nhanvien()
{
    id = ten = gioitinh = ns = diachi = masothue = "";
}
nhanvien::nhanvien(string id, string ten, string gioitinh, string ns, string diachi, string masothue)
{
    this->id = id;
    this->ten = ten;
    this->gioitinh = gioitinh;
    this->ns = ns;
    this->diachi = diachi;
    this->masothue = masothue;
}
nhanvien::~nhanvien()
{
    // khong co tac vu gi dac biet o day!
}
int nhanvien::dem = 0;
int nhanvien::getDem()
{
    return dem;
}
void nhanvien::tangdem()
{
    ++dem;
}
istream &operator>>(istream &in, nhanvien &a)
{
    //	cout << "nhap id:";
    //	in >> a.id;
    ++a.dem;
    a.id = "NV" + string(3 - to_string(a.dem).length(), '0') + to_string(a.dem);
    cout << "nhap ten:";
    in.ignore();
    getline(in, a.ten);
    cout << "nhap gioi tinh (nam or nu): ";
    in >> a.gioitinh;
    cout << "nhap ns:";
    in >> a.ns;
    cout << "nhap dia chi:";
    in.ignore();
    getline(in, a.diachi);
    cout << "nhap ma so thue:";
    in >> a.masothue;
    cout << endl;
    // in.ignore();
    return in;
}
ostream &operator<<(ostream &out, nhanvien a)
{
    string ngay, thang, nam;
    stringstream ss(a.ns);
    getline(ss, ngay, '/');
    getline(ss, thang, '/');
    getline(ss, nam, '/');
    string x,y;
    x = (ngay.length() == 1) ? "0" + ngay : ngay;
    x = x + "/";
    y = (thang.length() == 1) ? "0" + thang : thang;
    y = y + "/" + nam;
    a.ns = x + y;

    out << a.id << " " << a.ten << " " << a.gioitinh << " " << a.ns << " " << a.diachi << " " << a.masothue << endl;
    return out;
}
// void nhanvien::chuan_hoa_ngay_sinh()
//{
//
// }
int main()
{
    int n;
    cout << "nhap so luong nhan vien:";
    cin >> n;
    nhanvien x[n];
    for (int i = 0; i < n; i++)
    {
        cout << "nhap thong tin nhan vien thu " << i + 1 << endl;
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
    }
    return 0;
}