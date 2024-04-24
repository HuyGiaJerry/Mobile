#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Color
{
    private:
        string tenMau;
        string maMau;
    public:
        Color()
        {
            this->tenMau = "";
            this->maMau = "";        
        }
        Color(string tenMau ,string maMau)
        {
            this->tenMau = tenMau;
            this->maMau = maMau;
        }
        friend istream &operator>>(istream &in,Color &c)
        {
            cout << endl << "Input TenMau: ";
            getline(in,c.tenMau);
            cout << endl << "Input MaMau: ";
            getline(in,c.maMau);
            return in;
        } 
        friend ostream &operator<<(ostream &out,Color c)
        {
            out <<  "<- MaMau: " << c.maMau << " - TenMau: " << c.tenMau <<" ->"; 
            return out;
        }
        string getTenMau()
        {
            return this->tenMau;
        }
        ~Color(){};
};
class Point
{
    private:
        int x,y;
    public:
        Point()
        {
            this->x = 0;
            this->y = 0;
        }
        Point(int x,int y)
        {
            this->x = x;
            this->y = y;
        }
        friend istream &operator>>(istream &in,Point &p)
        {
            cout << endl << "Input x: ";
            in >> p.x;
            cout << endl << "Input y: ";
            in >>p.y;
            return in;
        }
        friend ostream &operator<<(ostream &out,Point p)
        {
            out  << "(" << p.x << "," << p.y << ")";
            return out;
        }
        bool checkDgCheoChinh()
        {
            return this->x == this->y;
        }
        ~Point(){};
};

class Pixel : public Color,public Point
{
    public:
        Pixel(){};
        Pixel(string tenMau, string maMau,int x, int y) : Color(tenMau,maMau) , Point(x,y){};
        friend istream &operator>>(istream &in,Pixel &p)
        {
            cout << endl << "Input Color" << endl  ;
            in >> static_cast<Color &>(p);
            cout << endl << " Input Point: " << endl;
            in >> static_cast<Point &>(p);
            return in;
        }
        friend ostream &operator <<(ostream &out,Pixel p)
        {
            out << endl << "Pixel at Point : " << static_cast<const Point&>(p) << " Color: " << static_cast<const Color&>(p);  
            return out;
        }
        bool checkByConsition()
        {
            return this->checkDgCheoChinh()  && this->getTenMau() == "xanh";
        }
        ~Pixel(){};
};

int main()
{
    Pixel p;
    cin >> p;
    cout << p;
    (p.checkByConsition()) ? cout << endl <<"\tYES !" : cout << endl << "\tNO !";
    return 0;
}
