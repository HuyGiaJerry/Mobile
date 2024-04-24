#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        Date();
        Date(int day,int month,int year);
        friend istream& operator>>(istream &in,Date &d);
        friend ostream& operator<<(ostream &out,Date d);
        bool operator>(const Date &other)const;
        ~Date();
};  
Date::Date(){};
Date::Date(int day,int month,int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}
istream& operator>>(istream &in,Date &d)
{
    cout << endl << "Nhap year: ";
    in >> d.year;
    cout << endl << "Nhap month: ";
    in >> d.month;
    cout << endl << "Nhap day: ";
    in >> d.day; 
    return in;
}
ostream& operator<<(ostream &out,Date d)
{
    out << endl << "<-- Day: "<< d.day << " Month: " << d.month << " Year: "<< d.year << " -->"; 
    return out;
}
bool Date::operator>(const Date &other)const
{
    return this->year > other.year || (this->year == other.year && this->month > other.month) || (this->year == other.year && this->month == other.month && this->day > other.day); 
}
Date::~Date(){};

int main()
{
    int n;
    cout << endl << "Nhap n: ";
    cin >> n;
    Date *d = new Date[n];
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tNhap thong tin Date: " << i+1;
        cin >> d[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tThong tin Date: " << i+1;
        cout << d[i];
    }
    sort(d,d+n,greater<Date>());
    cout << endl << "Danh sach sau khi sap xep: ";
    for(int i=0;i<n;i++)
    {
        cout << d[i];
    }
    delete[] d;
    return 0;
}