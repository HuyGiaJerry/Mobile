#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class HANGHOA
{
private:
    string mahang;
    string tenhang;
public:
    HANGHOA(string mahang = "", string tenhang = "")
    {
        this->mahang = mahang;
        this->tenhang = tenhang;
    }
    void inputData()
    {
        cout << endl
             << "---Nhap Thong Tin Hang Hoa---";
        cout << endl
             << "Nhap ma hang: ";
        getline(cin, mahang);
        cout << endl
             << "NHap ten hang: ";
        getline(cin, tenhang);
    }
    void displayData()
    {
        cout << endl
             << "< Ma : " << mahang << " - Ten : " << tenhang << " >";
    }
    ~HANGHOA(){}
};
int main()
{
    // C1
    HANGHOA h("h1", "2");
    h.displayData();
    // C2
    // HANGHOA h1;
    // h1.inputData();
    // h1.displayData();
}