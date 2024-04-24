#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;
class NhanVien
{
private:
    string id;
    string name;
    bool gender;
    string date;
    string address;
    string mathue;
    static int count;
public:
    NhanVien();
    NhanVien(string name, bool gender, string date, string address, string mathue);
    friend istream& operator>>(istream &in, NhanVien &n);
    friend ostream& operator<<(ostream &out, NhanVien n);
    string getDate();
    bool operator<(const NhanVien &n)const;
    // ~NhanVien();
};
int NhanVien::count = 0;
NhanVien::NhanVien(){};
NhanVien::NhanVien(string name, bool gender, string date, string address, string mathue)
{
    NhanVien::count++;
    this->id = "NV" + to_string(static_cast<long long>(NhanVien::count));
    this->name = name;
    this->gender = gender;
    this->date = date;
    this->address = address;
    this->mathue = mathue;
}
istream& operator>>(istream &in, NhanVien &n)
{
    NhanVien::count++;
    n.id = "NV" + to_string(static_cast<long long>(NhanVien::count));
    in.ignore();
    cout << endl << "Nhap name : ";
    getline(in, n.name);
    cout << endl << "Nhap gender (0 or 1): ";
    in >> n.gender;
    in.ignore();
    cout << endl << "Nhap year (dd/MM/yyyy): ";
    getline(in, n.date);
    cout << endl << "Nhap address : ";
    getline(in, n.address);
    cout << endl << "Nhap mathue : ";
    getline(in, n.mathue);
    return in;
}
ostream& operator<<(ostream &out, NhanVien n)
{
    out << endl << "<-- Id: " << n.id << " Name: " << n.name << " Gender: " << ((n.gender) ? "Nam" : "Nu") << " Date: " << n.date << " Address: " << n.address << " Mathue: " << n.mathue << " -->";
    return out;
}
string NhanVien::getDate()
{
    return this->date;
}
bool NhanVien::operator<(const NhanVien &other)const
{
    // Xử lý year bằng method istringstream dateStream(year) int day , month , year char delimiter 
    int day1 , month1 , year1 ;
    char delimiter1;
    istringstream dateStream1(this->date);
    // Tách giá trị từ year 
    dateStream1 >> day1 >> delimiter1 >> month1 >> delimiter1 >> year1;
    int day2 , month2 , year2 ;
    char delimiter2;
    istringstream dateStream2(other.date);
    dateStream2 >> day2 >> delimiter2 >> month2 >> delimiter2 >> year2;
    return year1 < year2 || (year1 == year2 && month1 > month2 ) || (year1 == year2 && month1 == month2 && day1 > day2);

}
// NhanVien::~NhanVien() 
// {
//     cout << endl << "!! Doi tuong da duoc huy !!";
// }
int main()
{
    int n;
    cout << endl << "Nhap n:";
    cin >> n;
    NhanVien *nv = new NhanVien[n];
    
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tNhap thong tin NV " << i+1 << " : ";
        cin >> nv[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tThong tin NV " << i+1 << " : ";
        cout << nv[i];
    }
    // Sắp xếp
    // sort(nv,nv+n);
    sort(nv,nv+n,less<NhanVien>());
    cout << endl << "Danh sach sau khi sap xep: " << endl ;
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tThong tin NV " << " : ";
        cout << nv[i];
    }
    delete[] nv;
    return 0;
}
