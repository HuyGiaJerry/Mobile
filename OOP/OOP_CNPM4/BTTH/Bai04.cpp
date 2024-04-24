#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class subject
{
    private:
        string id;
        string name;
        int credits;
        static int count;
    public:
        subject();
        subject(string name,int credits);
        friend istream& operator>>(istream &in,subject &s);
        friend ostream& operator<<(ostream &out,subject s);
        ~subject();
};
int subject::count = 0;
subject::subject(){};
subject::subject(string name,int credits)
{
    subject::count ++;
    this->id = "Subject "+ to_string(static_cast<int>(subject::count));
    this->name = name;
    this->credits = credits;
}
istream& operator>>(istream &in,subject &s)
{
    subject::count ++;
    s.id = "Subject "+ to_string(static_cast<int>(subject::count));
    in.ignore();
    cout << endl << "Nhap name: ";
    getline(in,s.name);
    cout << endl << "Nhap credits: ";
    in >> s.credits;
    return in;
}
ostream& operator<<(ostream &out,subject s)
{
    out << endl << "Id : "<<s.id << " - Name: "<< s.name << " - Credits: "<< s.credits;
    return out;
}
subject::~subject(){};
int main()
{
    int n;
    cout << endl<<"Nhap n: ";
    cin >> n;
    subject *s = new subject[n];
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tNhap subject "<< i+1 << ": ";
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << endl << "Thong tin subject "<< i+1 << ": ";
        cout << s[i];
    }
    delete[] s;
    return 0;
}