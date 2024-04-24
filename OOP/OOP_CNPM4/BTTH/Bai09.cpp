#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CauThu
{
    private:
        string name;
        int age;
        string pos;
        double weight;
        double height;
    public:
        CauThu(){};
        CauThu(string name,int age,string pos,double weight,double height)
        {
            this->name = name;
            this->age =age;
            this->pos = pos;
            this->weight = weight;
            this->height = height;
        }
        friend istream& operator>>(istream &in,CauThu &ct)
        {
            in.ignore();
            cout << endl << "Nhap name: ";
            getline(in,ct.name);
            cout << endl << "Nhap age: ";
            in >> ct.age;
            in.ignore();
            cout << endl << "Nhap position: ";
            getline(in,ct.pos);
            cout << endl << "Nhap weight: ";
            in >> ct.weight;
            cout << endl << "Nhap height: ";
            in >> ct.height;
            return in;
        }
        friend ostream& operator<<(ostream &out,CauThu ct)
        {
            out << endl << "<-- Name: " << ct.name << ", Age: "<< ct.age << ", Position: "<<ct.pos << ", Weight: "<< ct.weight << ", Height: "<< ct.height << " -->";
            return out;
        }
        bool operator<(const CauThu &other) const
        {
            if(this->height == other.height)
                return this->weight < other.weight;
            return this->height < other.height;
        }
        ~CauThu(){};
};

template<class T>
class DanhSach
{
    private:
        int size;
        T *ds;
    public:
        DanhSach()
        {
            this->size = 0;
            this->ds = nullptr;
        }
        DanhSach(int size)
        {
            this->size = size;
            this->ds = new T[size];
        }
        friend istream& operator >> (istream &in,DanhSach &danhsach)
        {
            for(int i=0;i<danhsach.size;i++)
                in >> danhsach.ds[i];
            return in;
        }
        friend ostream& operator << (ostream &out,DanhSach danhsach)
        {
            for(int i=0;i<danhsach.size;i++)
                out << endl<< danhsach.ds[i] ;
            return out;
        }
        void sortDS()
        {
            sort(ds,ds+size);
        }
        ~DanhSach(){};
};

int main()
{
    // int n;
    // cout << endl << "Nhap n phan tu ds so nguyen: ";
    // cin >> n;
    // DanhSach<int> dsSoNguyen(n);
    // cin >> dsSoNguyen;
    // cout << dsSoNguyen;
    // dsSoNguyen.sortDS();
    // cout << dsSoNguyen;
    int m;
    cout << endl << "Nhap n phan tu ds cau thu: ";
    cin >> m;
    DanhSach<CauThu> dsCauThu(m);
    cin >> dsCauThu;
    cout << dsCauThu;
    dsCauThu.sortDS();
    cout << dsCauThu;
}