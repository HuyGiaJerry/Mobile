#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class SinhVien
{
    private: 
        string id;
        string name;
        int year;
        double gpa;

    public:
        string getId();
        string getName();
        int getYear();
        double getGpa();
        void xinchao();
        void input();
        void display();
    SinhVien(string id,string name,int year,double gpa)
    {
        this->id = id;
        this->name = name;
        this->year = year;
        this->gpa = gpa;
    }
    SinhVien(){}
    ~SinhVien()
    {
        cout << endl << "--- Doi Tuong Da Duoc Huy ---";
    }
};
void SinhVien::xinchao()
{
    cout << endl << "\t \tHello " << name << " !";
}
void SinhVien::input()
{
    cin.ignore();
    cout << endl << "Nhap id: ";
    getline(cin,id);
    cout << endl << "Nhap name: ";
    getline(cin,name);
    cout << endl << "Nhap year: ";
    cin >> year;
    cout << endl << "Nhap gpa: ";
    cin >> gpa;
}
void SinhVien::display()
{
    cout <<endl << "--- Thong Tin Sinh Vien ---";
    // In ra số sau dấu . ở số thực 
    cout << endl << "<---Id: "<< id << " - Name: "<< name << " - Year: "<< year << " - Gpa: "<< fixed << setprecision(2)<< gpa << "--->";
}
double SinhVien::getGpa()
{
    return this->gpa;
}
bool cmp(SinhVien a,SinhVien b)
{
    return a.getGpa() > b.getGpa();
}
int main()
{
    // SinhVien sv1;
    // sv1.input();
    // sv1.xinchao();
    // sv1.display();
    // SinhVien sv2("sv 234","Jerry Nguyen",2004,3.45);
    // sv2.display();
    int n;
    cout << endl << "Nhap n: ";
    cin >> n;
    SinhVien *sv = new SinhVien[n];
    for(int i=0;i<n;i++)
    {
        sv[i].input();
    }
    for(int i=0;i<n;i++)
    {
        sv[i].display();
    } 
    cout << endl << "\tDanh Sach Sinh Vien Sau Khi Sap Xep: ";
    sort(sv,sv+n,cmp);
     for(int i=0;i<n;i++)
    {
        sv[i].display();
    } 
    delete[] sv;
    return 0;
}