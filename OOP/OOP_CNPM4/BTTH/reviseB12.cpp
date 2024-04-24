#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CanBo
{
    private:
        string name;
        string gender;
        int year;
    public:
        CanBo()
        {
            name = gender = "";
            year = 0;
        }
        virtual void input()
        {
            cout << endl << "\t\t---Input info CAN BO---";
            cout << endl << "Input name: ";
            getline(cin,this->name);
            cout << endl << "Input gender: ";
            getline(cin,this->gender);
            cout << endl << "Input year: ";
            cin >> this->year;
        }
        virtual void output()
        {
            string nameCheck = "";
            string w ;
            for(char &c : this->name )
                c = tolower(c);
            stringstream ss(this->name);
            while( ss >> w)
            {
                w[0] = toupper(w[0]);
                nameCheck = nameCheck + w + " ";
            }
            this->name = nameCheck;
            cout << endl << "<-- Name: " << this->name << " - Gender: " << this->gender << " - Year: " << this->year;
        }
        int Age()
        {
            return (this->year > 2019) ? 0 : (2019-this->year);
        }
        virtual bool retire() = 0;
        virtual float salary() = 0;
        ~CanBo(){}
};

class BienChe : public CanBo
{
    private:
        string DonVi;
        float HsLuong;
    public:
        BienChe() : CanBo()
        {
            DonVi = "";
            HsLuong = 0.0;
        }
        void input() override{
            CanBo::input();
            cin.ignore();
            cout << endl << "\t\t---Input info BIEN CHE---";
            cout << endl << "Input DonVi: ";
            getline(cin,this->DonVi);
            cout << endl << "Input HsLuong: ";
            cin >> this->HsLuong;
            cin.ignore();
        }
        void output() override
        {
            CanBo::output();
            cout << " - DonVi: " << this->DonVi << " - HsLuong: " << this->HsLuong << " -->";
        }
        bool retire() override
        {
            return (CanBo::Age() >=60);
        }
        float salary() override
        {
            return (this->retire()) ? 0.7 * this->HsLuong * 131 : this->HsLuong * 131;
        }
        ~BienChe(){}
};
class HopDong : public CanBo
{
    private:
        int namCongTac;
        float hsThamNien;
        float mucLuong;
    public:
        HopDong() : CanBo()
        {
            namCongTac = 0;
            hsThamNien = mucLuong = 0.0;
        }
        void input() override
        {
            CanBo::input();
            cout << endl << "\t\t---Input info HOP DONG---";
            cout << endl << "Input namCongTac: ";
            cin >> this->namCongTac;
            cout << endl << "Input hsThamNien: ";
            cin >> this->hsThamNien;
            cout << endl << "Input mucLuong: ";
            cin >> this->mucLuong;
        }
        void output() override
        {
            CanBo::output();
            cout << " - NamCongTac: " << this->namCongTac << " - HsThamNien: " << this->hsThamNien << " - MucLuong: " << this->mucLuong << " -->";
        }
        bool retire() override
        {
            return this->namCongTac >= 35;
        }
        float salary() override
        {
            return (this->retire()) ? 0 : this->mucLuong * this->hsThamNien;
        }
        ~HopDong(){}

};
int main()
{
    int n;
    cout << endl << "Input n: ";
    cin >> n;
    CanBo **list = new CanBo*[n];
    for(int i=0;i<n;i++)
    {
        int loai;
        cout << endl << "\t-Input thong tin CanBo thu-" << i +1;
        cout << endl <<"Chon loai can bo (1- BienChe) (2- Hop Dong): ";
        cin >> loai;
        cin.ignore();
        if(loai == 1)
        {
            list[i] = new BienChe();
            list[i]->input();
        }
        else if (loai == 2)
        {
            list[i] = new HopDong();
            list[i]->input();
        }
    }
    cout << endl << "\t----------------Info Can Bo--------------";
    for(int i=0;i<n;i++)
    {
        cout << endl << "\tCan Bo thu " << i+1;
        list[i]->output();
        cout << endl << "Age : " << list[i]->Age();
        cout << endl << "Salary : " << list[i]->salary();
        (list[i]->retire()) ? cout << endl << "---ALREADY RETIRE---" : cout << endl << "---STILL WORK---";

    }
    for(int i=0;i<n;i++)
        delete list[i];
    delete[] list;
    return 0;
}