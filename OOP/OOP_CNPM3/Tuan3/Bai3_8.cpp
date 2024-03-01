#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class LOPHOC
{
    private:
        string id;
        string name;
    public:
        LOPHOC(string id="",string name="")
        {
            this->id = id;
            this->name = name;
        }
        void inputData()
        {
            cin.ignore();
            cout << endl << "---Nhap Thong Tin---";
            cout << endl << "Nhap id: ";
            getline(cin,id);
            cout << endl << "Nhap name: ";
            getline(cin,name);
        }
        void displayData()
        {
            cout << endl << "< Id: "<<id << " - Name: "<<name <<" >";
        }
        ~LOPHOC(){}
};
int main()
{
    // LOPHOC l("lop1","D17CNPM4");
    // l.displayData();
    int n;
    cin >> n;
    LOPHOC *lh = new LOPHOC[n];
    for(int i=0;i<n;i++)
    {
        lh[i].inputData();
    }
    for(int i=0;i<n;i++)
    {
        lh[i].displayData();
    }
    delete[] lh;
}   
