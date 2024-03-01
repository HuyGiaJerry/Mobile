#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class SACH
{
private:
    string id;
    string name;

public:
    SACH(string id = "", string name = "")
    {
        this->id = id;
        this->name = name;
    }
    // C1 : Tutorial
    void inputData()
    {
        cout << endl<< "---Nhap Thong Tin Sach---";
        cout << endl<< "Nhap ma : ";
        getline(cin, id);
        cout << endl<< "NHap ten : ";
        getline(cin, name);
    }
    void displayData()
    {
        cout << endl
             << "< Ma : " << id << " - Ten : " << name << " >";
    }

    // C2 : Nạp chồng toán tử nhập xuất 
    friend istream& operator>>(istream &in,SACH &s)
    {
        cout << endl << "--- Nhap thong tin---" << endl;
        cout << endl << "Nhap id:";
        in >> s.id;
        cout << endl << "Nhap name: ";
        in >> s.name;
        return in;
    }
    friend ostream& operator<<(ostream &out,SACH &s)
    {
        out << endl << "< Ma : " << s.id << " - Ten : " << s.name << " >";
        return out;
    }
    ~SACH(){}
};
int main()
{
    // SACH s("s1","DAC NHAN TAM");
    // s.displayData();

    int n;
    cin >>n;
    SACH *s = new SACH[n];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << s[i];
    }
    delete[] s;
}