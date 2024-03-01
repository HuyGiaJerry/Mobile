#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ps
{
    int ts;
    int ms;
};
void inputPs(ps &p)
{
    cout << "Nhap tu so: ";
    cin >> p.ts;
    do
    {
        cout << "Nhap mau so (khac 0): ";
        cin >> p.ms;
    } while (p.ms ==0);
    
}
void outputPs(const ps &p)
{
    cout << endl<<"Phan so: "<<p.ts <<"/"<<p.ms ;
}

// Hàm cộng phân số 
ps operator +(const ps &ps1 ,const ps &ps2)
{
    ps tong;
    tong.ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms;
    tong.ms = ps1.ms * ps2.ms;
    return tong;
}
ps operator -(const ps &ps1,const ps &ps2)
{
    ps hieu;
    hieu.ts = ps1.ts * ps2.ms - ps2.ts * ps1.ms;
    hieu.ms = ps1.ms * ps2.ms;
    return hieu;
}
ps operator *(const ps &ps1, const ps &ps2)
{
    ps tich;
    tich.ts = ps1.ts * ps2.ts;
    tich.ms = ps1.ms * ps2.ms;
    return tich;
}
ps operator /(const ps &ps1,const ps &ps2)
{
    ps thuong;
    thuong.ts = ps1.ts * ps2.ms;
    thuong.ms = ps1.ms * ps2.ts;
    return thuong;
}
int main()
{
    ps ps1;
    inputPs(ps1);
    ps ps2;
    inputPs(ps2);
    // Cộng 
    ps tong = ps1 + ps2;
    outputPs(tong);
    // Hiệu
    ps hieu = ps1 - ps2;
    outputPs(hieu);
    // Tích
    ps tich = ps1 * ps2;
    outputPs(tich);
    // Thương
    ps thuong = ps1 / ps2;
    outputPs(thuong);
}