#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    // string date;
    // cout << "Nhap date(dd/MM/yyyy): ";
    // cin >> date;

    // if(date[1] == '/') date = '0' + date;
    // if(date[4] == '/') date.insert(3,"0");
    // Dinh dang date
    // cout << "Date: " << date;

    // setfill(a) : thay the ky tu ' ' = 'a' , setw(b) : xet 1 khoang trong vi du : '    '  setw(5) 
    int second,minute,hour;
    cin >> hour >> minute >> second;
    // Dinh dang time
    cout << endl << "Hours: "<< setfill('0') << setw(2) << hour << 
    ":" << setfill('0') << setw(2) << minute << 
    ":" << setfill('0') << setw(2) << second ;
    return 0;
}