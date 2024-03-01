#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a=0;a<b;a++)
using namespace std;

class Stdudent
{
    private:
        string name;
        float d1,d2;
        float avgScore;
    public:
        void inputData()
        {
            cout << endl<<"Nhap name: ";
            cin.ignore();
            getline(cin,name);
            cout << endl << "Nhap diem ky 1: ";
            cin >> d1;
            cout << endl << "Nhap diem ky 2: ";
            cin >> d2;
            avgScore = (d1+2*d2)/3;
        }
        void outputData()
        {
            cout << endl << "Ten: "<<name << " - Score k1: "<<d1<<" - Score k2: "<<d2;
        }
        float getAvgScore()
        {
            return avgScore;
        }
        static bool cmp(const Stdudent &a ,const Stdudent &b)
        {
            return a.avgScore > b.avgScore;
        }
};


int main()
{
    int n;
    cout << "Nhap n sinh vien: ";
    cin >> n;
    Stdudent *list = new Stdudent[n];
    // Nhập thông tin cho n Student
    f(i,n)
    {
        list[i].inputData();
    }
    // Xuất thông tin n Student
    f(i,n)
    {
        list[i].outputData();
        cout << "\tAVG Score: " << list[i].getAvgScore();
    }
    // Sắp xếp danh sách Student theo điểm AVG
    // sort(start_iterator,end_iterator,cmp_function);
    sort(list,list+n,Stdudent::cmp);
    cout << endl << "Danh sach Student sau khi sap xep:";
    f(i,n)
    {
        list[i].outputData();
        cout << "\tAVG Score: " << list[i].getAvgScore();
    }
    delete[] list;
}