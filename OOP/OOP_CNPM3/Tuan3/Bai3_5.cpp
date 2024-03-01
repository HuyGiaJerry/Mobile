#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MonHoc
{
    private:
        string id;
        string name;
        float avgScore;
        int tc;
    public:
        MonHoc(string id="",string name="",float avgScore=0.0,int tc=0)
        {
            this->id = id;
            this->name = name;
            this->avgScore = avgScore;
            this->tc = tc;
        }
        void inputData()
        {
            cin.ignore();
            cout << endl << "---Nhap Thong Tin---";
            cout << endl << " Nhap id: ";
            getline(cin,id);
            cout << endl << "Nhap name: ";
            getline(cin,name);
            cout << endl << "Nhap avgScore: ";
            cin >> avgScore;
            cout << endl << "Nhap so tc: ";
            cin >>tc;
        }
        void displayData()
        {
            cout << endl << "< MaNV: "<<id << " - Ten: "<<name << " - AvgScore: "<<avgScore<<" - Tc: "<< tc<<" >";
        }
        int getTc()
        {
            return this->tc;
        }
        bool operator>(const MonHoc &other)const
        {
            return this->avgScore > other.avgScore;
        }
        ~MonHoc(){}
};
int main()
{
    // MonHoc m("mh1","Math",7.7,3);
    // m.displayData();
    int n;
    cin >>n;
    MonHoc *m = new MonHoc[n];
    for(int i=0;i<n;i++)
    {
        m[i].inputData();
    } 
    for(int i=0;i<n;i++)
    {
        m[i].displayData();
    }
    sort(m,m+n,greater<MonHoc>());
    cout << endl << "LIST SUBJECT AFTER SORT" << endl ;
    for(int i=0;i<n;i++)
    {
        m[i].displayData();
    }
    delete[] m;
}