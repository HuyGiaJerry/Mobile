#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
        string id;
        string name;
        int age;
    public:
        NhanVien(string id="",string name="",int age=0)
        {
            this->id = id;
            this->name = name;
            this->age = age;
        }

        int getAge()
        {
            return this->age;
        }
        void inputData()
        {
            cin.ignore();
            cout << endl << "---Nhap Thong Tin---";
            cout << endl << " Nhap id: ";
            getline(cin,id);
            cout << endl << "Nhap name: ";
            getline(cin,name);
            cout << endl << "Nhap age: ";
            cin >> age;

        }
        void displayData()
        {
            cout << endl << "< MaNV: "<<id << " - Ten: "<<name << " - Tuoi: "<<age<<" >";
        }
        bool checkAge(int age)
        {
            return age >= 60;
        }
        ~NhanVien(){}
};
int main()
{
    // NhanVien n("nv1","Gia Huy",22);
    // n.displayData();
    int n;
    cin >> n;
    NhanVien *nv = new NhanVien[n];
    for(int i=0;i<n;i++)
    {
        nv[i].inputData();
    }
    // Thong tin nv ve huu 
    cout << endl << "---Danh sach Nhan Vien Ve Huu---";
    for(int i=0;i<n;i++)
    {
        if(nv[i].checkAge(nv[i].getAge()))
            nv[i].displayData();
    }
    // Thong tin nv chua ve huu
    cout << endl << "---Danh sach Nhan Vien Chua Ve Huu---";
    for(int i=0;i<n;i++)
    {
        if(!nv[i].checkAge(nv[i].getAge()))
            nv[i].displayData();
    }
    delete[] nv;
}