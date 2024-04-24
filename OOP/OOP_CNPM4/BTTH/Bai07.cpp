#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class CPoint 
{   private:
        double tungdo;
        double hoanhdo;
    public:
        CPoint();
        CPoint(double tungdo,double hoanhdo);
        void inputCPoint();
        void displayCPoint();
        void dichuyenDiem();
        bool check3Point(CPoint a,CPoint b,CPoint c);
        double distance(CPoint a,CPoint b);
        ~CPoint();
};
CPoint::CPoint(){};
CPoint::CPoint(double tungdo,double hoanhdo)
{
    this->hoanhdo = hoanhdo;
    this->tungdo = tungdo;
}
void CPoint::inputCPoint()
{
    cout << endl << "Nhap hoanh do: ";
    cin >> this->hoanhdo;
    cout << endl << "Nhap tung do: ";
    cin >> this->tungdo;
}
void CPoint::displayCPoint()
{
    cout << endl << "<-- Tung do: "<< this->tungdo << " - Hoanh do: "<< this->hoanhdo << " -->";
}
void CPoint::dichuyenDiem()
{
    this->hoanhdo = this->hoanhdo + 1;
}
bool CPoint::check3Point(CPoint a,CPoint b,CPoint c)
{
    double kc1,kc2,kc3;
    kc1 = a.distance(a,b);
    kc2 = b.distance(b,c);
    kc3 = c.distance(a,c);
    if((kc1 + kc2 == kc3) || (kc1 + kc3 == kc2) || (kc3 + kc2 == kc1))
        return true;
    return false;
}
double CPoint::distance(CPoint a,CPoint b)
{
    return sqrt( (b.tungdo - a.tungdo)*(b.tungdo-a.tungdo) + (b.hoanhdo - a.hoanhdo)*(b.hoanhdo - a.hoanhdo) );
}
CPoint::~CPoint(){};
int main()
{
    CPoint A,B,C;
    A.inputCPoint();
    B.inputCPoint();
    C.inputCPoint();
    cout << endl << "KC 2 diem A va B : " << A.distance(A,B);
    cout << endl << "KC 2 diem C va B : " << B.distance(C,B);
    cout << endl << "KC 2 diem A va C : " << C.distance(A,C);
    (A.check3Point(A,B,C) == true ) ? cout << endl <<"YES" : cout <<endl<< "NO";
    return 0;
}