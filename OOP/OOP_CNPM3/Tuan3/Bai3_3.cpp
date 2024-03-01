#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class SV
{
private:
    string MaSV;
    string hoten;
    float diem;
public:
    SV(string MaSV = "", string hoten = "", float diem = 0.0)
    {
        this->MaSV = MaSV;
        this->hoten = hoten;
        this->diem = diem;
    }
    void inputData()
    {
        cout << endl<< "---Nhap Thong Tin SV---";
        cin.ignore();
        cout << endl<< "NHap masv: ";
        getline(cin, MaSV);
        cout << endl<< "Nhap ho ten: ";
        getline(cin, hoten);
        cout << endl<< "NHap diem: ";
        cin >> diem;
    }
    void displayData()
    {
        cout << endl
             << "< MASV: " << MaSV << " - HoTen: " << hoten << " - Diem: " << diem << " >";
    }
    bool operator>(const SV &other) const
    {
        return this->diem > other.diem;
    }
    ~SV() {}
};

int main()
{
    // Nhap 1 sv
    // SV sv;
    // sv.inputData();
    // sv.displayData();

    // Nhap cho 1 list SV
    int n;
    cout << endl
         << "NHap n: ";
    cin >> n;
    SV *s = new SV[n];
    for (int i = 0; i < n; i++)
    {
        s[i].inputData();
    }
    // C1 sắp xếp truyền thống

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //         if (s[j + 1] > s[j])
    //             swap(s[j + 1], s[j]);
    // }
    // cout << endl << "ARR LIST SV AFTER SORT BY DESC";
    // for (int i = 0; i < n; i++)
    //     s[i].displayData();

    // C2 sort và hàm greater or less
    sort(s, s + n, greater<SV>());
    cout << endl
         << "ARR LIST SV AFTER SORT BY DESC";
    for (int i = 0; i < n; i++)
        s[i].displayData();

    delete[] s;
}