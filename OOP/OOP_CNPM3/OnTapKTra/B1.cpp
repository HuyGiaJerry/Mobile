#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class employee
{
    private:
        static int count;
        string id;
        string name;
        string gender;
        string date;
        string address;
        double salary;
    public:
        employee();
        employee(string,string,string,string,string,double);
        friend istream &operator >>(istream &in,employee &e);
        friend ostream &operator <<(ostream &out,employee e);
        bool operator >(const employee &other) const;
        friend bool operator < (const employee &e1,const employee &e2); 
        ~employee();
};

int employee::count = 0;

employee::employee()
{
    this->id = "";
    this->name = "";
    this->gender = "";
    this->date = "";
    this->address = "";
    this->salary = 0;
}

employee::employee(string id,string name,string gender,string date,string address,double salary )
{
    count++;
    this->id = "SV" + string(3 - to_string(count).length(), '0') + to_string(count);
    this->name = name;
    this->gender = gender;
    this->date = date;
    this->address = address;
    this->salary = salary;
}

istream &operator >>(istream &in,employee &e)
{
    e.count ++;
    e.id = "SV" + string(3 - to_string(e.count).length(),'0') + to_string(e.count);
    in.ignore();
    cout << endl << "Input name: ";
    getline(in,e.name);
    cout << endl << "Input gender(male or female): ";
    getline(in,e.gender);
    cout << endl << "Input date(dd/MM/yyyy): ";
    getline(in,e.date);
    cout << endl << "Input address: ";
    getline(in,e.address);
    cout << endl << "Input salary: ";
    in >> e.salary;
    return in;
}
ostream &operator <<(ostream &out,employee e)
{
    if(e.date[1] == '/') e.date = '0' + e.date; 
    if(e.date[4] == '/') e.date.insert(3,"0"); 
    out << endl << "<- Id: " << e.id << " - Name: " << e.name << " - Gender: " << e.gender << " - Date: " << e.date
    << " - Address: " << e.address << " - Salary: " << e.salary << " ->";
    return out;
}
bool employee::operator>(const employee &other)const
{
    stringstream ss1(this->date);
    stringstream ss2(other.date);
    int day1,month1,year1,day2,month2,year2;
    char delimiter;
    ss1 >> day1 >> delimiter >> month1 >> delimiter >> year1;
    ss2 >> day2 >> delimiter >> month2 >> delimiter >> year2;
    return year1 < year2 || (year1 == year2 && month1 < month2 ) || (year1 == year2 && month1 < month2 && day1 < day2);
}
bool operator < (const employee &e1,const employee &e2)
{
    return e1.salary > e2.salary;
}
employee::~employee(){}
int main()
{
    int n;
    cout << endl << "Input n employee: ";
    cin >> n;
    employee *list = new employee[n];
    for(int i=0;i<n;i++)
        cin >> list[i];
    for(int i=0;i<n;i++)
        cout << list[i];
    sort(list,list+n,greater<employee>());
    cout << endl << "List employee after sort by date";
    for(int i=0;i<n;i++)
        cout << list[i];
    sort(list,list+n,less<employee>());
    cout << endl << "List employee after sort by salary";
    for(int i=0;i<n;i++)
        cout << list[i];
    delete[] list;
    return 0;
}