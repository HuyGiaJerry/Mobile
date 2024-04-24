#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class hinhkhoicn
{
private:
    double length;
    double height;
    double width;

public:
    hinhkhoicn();
    hinhkhoicn(double length, double height, double width );
    friend istream& operator>>(istream &in, hinhkhoicn &h);
    friend ostream& operator<<(ostream &out,hinhkhoicn h);
    void checkRectangular();
    void checkCube();
    ~hinhkhoicn();
};

hinhkhoicn::hinhkhoicn(){};
hinhkhoicn::hinhkhoicn(double length, double height, double width)
{
    this->length = length;
    this->height = height;
    this->width = width;
}
istream& operator>>(istream &in,hinhkhoicn &h)
{
    cout << endl << "Nhap length: ";
    in >> h.length;
    cout << endl << "Nhap height: ";
    in >> h.height;
    cout << endl << "Nhap width: ";
    in >> h.width;
    return in;
}
ostream& operator<<(ostream &out,hinhkhoicn h)
{
    out << endl << "<-- Length: "<< h.length << " height: "<<h.height << " width: "<< h.width << " -->";
    return out;
}
void hinhkhoicn::checkRectangular()
{
    int check =0;
    if(this->height > 0 && this->length >0 &&this->width >0)
        check =1;
    (check==0) ? cout << endl <<"No ! It not is a Rectangular !" : cout <<endl  <<"Yes ! It is a Rectangular !";  
}
void hinhkhoicn::checkCube()
{
    int check =0;
    if(this->height > 0 && this->length >0 &&this->width >0 && this->height == this->length && this->length == this->width)
        check =1;
        (check==0) ? cout << endl <<"No ! It not is a Cube !" : cout <<endl  <<"Yes ! It is a Cube !";
}
hinhkhoicn::~hinhkhoicn()
{
    cout << endl
         << "Doi tuong da dc xoa !";
}
int main()
{
    int size;
    cout << "Nhap size: ";
    cin >> size;
    hinhkhoicn *h = new hinhkhoicn[size];
    for(int i=0;i<size;i++)
    {   
        cout << endl << "\tNhap hinh "<<i+1 << " : ";
        cin >> h[i];
    }
       
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tThong tin hinh "<<i+1 << " : ";
        cout << h[i];
    }
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tHinh "<<i+1 << " : ";
        h[i].checkRectangular();
    }
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tHinh "<<i+1 << " : ";
        h[i].checkCube();
    }
    return 0;
}