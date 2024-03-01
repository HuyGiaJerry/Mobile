#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class PhuongTienGiaoThong
{
    private:
        string model;
        string name;
        int year;
        float maxSpeed;
    public:
        void inputData();
        void outputData();
};

void PhuongTienGiaoThong::inputData()
{
    cout << endl<<"Nhap hang: ";
    cin.ignore();
    getline(cin,model);
    cout <<endl<<"Nhap name: ";
    getline(cin,name);
    cout <<endl<<"Nhap namsx: ";
    cin >> year;
    cout <<endl << "Nhap toc do toi da: ";
    cin >> maxSpeed;
}
void PhuongTienGiaoThong::outputData()
{
    cout <<endl << "Model: "<<model<<" - Name: "<<name<<" - Namsx: "<<year<<" - MAX SPEED: "<<maxSpeed<<" km/h ";
}

int main()
{
    // PhuongTienGiaoThong p1;
    // p1.inputData();
    // p1.outputData();
    int n;
    cin >>n;
    PhuongTienGiaoThong *list = new PhuongTienGiaoThong[n]; 
    for(int i=0;i<n;i++)
    {
        list[i].inputData();
    }
       for(int i=0;i<n;i++)
    {
        list[i].outputData();
    }
    delete[] list;
}