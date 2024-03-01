#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Media
{
    private:
        string name;
        float price;
    public:
        Media(string name="",float price=0.0)
        {
            this->name = name;
            this->price = price;
        }
        void inputData()
        {
            cin.ignore();
            cout << endl << "---Nhap Thong Tin---";
            cout << endl << "Nhap name: ";
            getline(cin,name);
            cout << endl << "Nhap price: ";
            cin >> price;
        }
        void displayData()
        {
            cout << endl << "< Name: "<<name << " - Price: "<<price <<" >";
        }
        ~Media(){}
};
int main()
{
    // Media m("abc",1000);
    // m.displayData();
    int n;
    cin >>n;
    Media *me = new Media[n];
    for(int i=0;i<n;i++)
    {
        me[i].inputData();
    }
    for(int i=0;i<n;i++)
    {
        me[i].displayData();
    }
    delete[] me;
}