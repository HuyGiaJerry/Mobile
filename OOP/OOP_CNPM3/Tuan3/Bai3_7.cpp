#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class ThiSinh
{
    private:
        string id;
        string name;
        float d_ut,d_anh,d_toan,d_van,totalScore;
    public:
        ThiSinh(string id="",string name="",float d_ut=0.0,float d_anh=0.0,float d_toan=0.0,float d_van=0.0)
        {
            this->id = id;
            this->name = name;
            this->d_ut = d_ut;
            this->d_anh = d_anh;
            this->d_toan = d_toan;
            this->d_van = d_van;
            this->totalScore = this->d_ut + this->d_anh + this->d_toan + this->d_van;
        }
        void inputData()
        {
            cin.ignore();
            cout << endl << "---Nhap Thong Tin---";
            cout << endl << "Nhap id: ";
            getline(cin,id);
            cout << endl << "Nhap name: ";
            getline(cin,name);
            cout << endl << "Nhap d_ut: ";
            cin >> d_ut;
            cout << endl << "Nhap d_anh: ";
            cin >> d_anh;
            cout << endl << "Nhap d_toan: ";
            cin >> d_toan;
            cout << endl << "Nhap d_van: ";
            cin >> d_van;
            totalScore = d_ut + d_anh + d_toan + d_van;
        }
        void displayData()
        {
            cout << endl << "< Id: "<<id << " - Name: "<<name << " - D_UT: "<<d_ut << " - D_ANH: "<<d_anh<< " - D_TOAN: "<<d_toan<< " - D_VAN: "<<d_van<< " - Total Score: "<<totalScore<<" >";
        }
        bool operator>(const ThiSinh &other)const
        {
            return this->totalScore > other.totalScore;
        }
        ~ThiSinh(){}
};
int main()
{
    // ThiSinh t("sv1","Gia Huy",1.1,6,5,7.8);
    // t.displayData();
    int n;
    cin >>n;
    ThiSinh *ts = new ThiSinh[n];
    for(int i=0;i<n;i++)
    {
        ts[i].inputData();
    }
    for(int i=0;i<n;i++)
    {
        ts[i].displayData();
    }
    sort(ts,ts+n,greater<ThiSinh>());
    cout << endl << "LIST TS AFTER SORT" << endl ;
    for(int i=0;i<n;i++)
    {
        ts[i].displayData();
    }
    delete[] ts;
}