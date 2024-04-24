#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class triangle
{
    private:
        double canh1,canh2,canh3;
    public:
        triangle();
        triangle(double c1,double c2,double c3);
        friend istream& operator>>(istream &in,triangle &tri);
        friend ostream& operator<<(ostream &out,triangle tri);
        void checkTriangle();
        ~triangle();
};
triangle::triangle(){};
triangle::triangle(double c1,double c2,double c3)
{
    this->canh1 = c1;
    this->canh2 = c2;
    this->canh3 = c3;
}
istream& operator>>(istream &in,triangle &tri)
{
    cout << endl << "Nhap canh 1: ";
    in >> tri.canh1;
    cout << endl << "Nhap canh 2: ";
    in >> tri.canh2;
    cout << endl << "Nhap canh 3: ";
    in >> tri.canh3;
    return in;
}
ostream& operator<<(ostream &out,triangle tri)
{
    cout << endl << "<-- Canh 1: "<< tri.canh1 << " Canh 2: "<< tri.canh2 << " Canh 3: "<< tri.canh3 << " -->";
    return out;
}
void triangle::checkTriangle()
{
    int check =0;
    if(this->canh1 > 0 && this->canh2 > 0 && this->canh3 > 0 && this->canh1 + this->canh2 > this->canh3 && this->canh1+ this->canh3 > this->canh2 && this->canh3 + this->canh2 > this->canh1)
        check = 1;
    (check==0) ? cout << endl <<"No ! It not is a Triangle !" : cout <<endl  <<"Yes ! It is a Triangle !";
    
}
triangle::~triangle()
{
    cout << endl << "Doi tuong da dc huy !";
}
int main()
{
    int size;
    cout << "Nhap size: ";
    cin >> size;
    triangle *tri = new triangle[size];
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tNhap thong tin triangle "<< i+1 << " : ";
        cin >> tri[i];
    }
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tThong tin triangle "<< i+1 << " : ";
        cout << tri[i];
    }
    for(int i=0;i<size;i++)
    {
        cout << endl << "\tTriangle "<< i+1 << " : ";
        tri[i].checkTriangle();
    }
    return 0;
}