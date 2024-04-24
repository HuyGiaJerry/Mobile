#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Sophuc {
private:
    int thuc, ao;
public:
    Sophuc(): thuc(0), ao(0) {}

    friend Sophuc operator +(Sophuc a, Sophuc b);
    friend Sophuc operator -(Sophuc a, Sophuc b);

    friend istream& operator>>(istream& in, Sophuc& a);
    friend ostream& operator<<(ostream& out, Sophuc a);
};

Sophuc operator +(Sophuc a, Sophuc b) {
    Sophuc tong;
    tong.thuc = a.thuc + b.thuc;
    tong.ao = a.ao + b.ao;
    return tong;
}

Sophuc operator -(Sophuc a, Sophuc b) {
    Sophuc tru;
    tru.thuc = a.thuc - b.thuc;
    tru.ao = a.ao - b.ao;
    return tru;
}



istream& operator>>(istream& in, Sophuc& a) {
    cout << "Nhap vao phan thuc: "; in >> a.thuc;
    cout << "Nhap vao phan ao: "; in >> a.ao;
    return in;
}

ostream& operator<<(ostream& out, Sophuc a) {
    if (a.ao > 0) {
        out << a.thuc << "+" << a.ao << "i";
    }
    else {
        out << a.thuc << a.ao << "i";
    }
    return out;
}

int main() {
    Sophuc a, b;
    cout << "Nhap so phuc thu nhat:" << endl;
    cin >> a;
    cout << "Nhap so phuc thu hai:" << endl;
    cin >> b;
    cout << "Tong hai so phuc la: " << a + b << endl;
    cout << "Hieu hai so phuc la: " << a - b << endl;
   
    return 0;
}