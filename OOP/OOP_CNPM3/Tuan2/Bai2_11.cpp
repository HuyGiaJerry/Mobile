#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class connguoi
{
    public:
        string name;
        int age;
    public:
        void inputData();
        void outputData();
};

void connguoi::inputData()
{
    cout <<endl << "Nhap ten: ";
    getline(cin,name);
    cout << endl << "Nhap tuoi: ";
    cin >> age;
}
void connguoi::outputData()
{
    cout << endl << "Ten: "<<name << " - Tuoi: "<<age;
}
int main()
{
    connguoi n1;
    n1.inputData();
    n1.outputData();
}