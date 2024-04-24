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
        SinhVien(){};
        SinhVien(string id,string name,int year,double gpa)
        {
            this->id = id;
            this->name = name;
            this->year = year;
            this->gpa = gpa;
        }
        friend istream &operator>>( istream &input,SinhVien &sv)
        {
            input >> sv.id >> sv.name >> sv.year >> sv.gpa;
            return input;
        }
        friend ostream &operator<<( ostream &output ,SinhVien sv)
        {
            output << endl << "Id: "<< sv.id << " Name: "<< sv.name <<" Year: "<< sv.year << " Gpa: " << sv.gpa;
            return output;
        }

        ~SinhVien()
        {
            cout << endl <<  "Doi Tuong -Sinh Vien- Da Duoc Huy !";
        }
};

int main()
{
    SinhVien sv1("sv1","Gia Huy",2004,3.5);
    cout << endl << "---SV 1---" << sv1;
    return 0;
}