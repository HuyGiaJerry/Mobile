#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class student 
{
    private:
        static int count; 
        string id;
        string name;
        char className[20];
        string date;
        double gpa;
    public:
        student();
        student(string,string,char[],string,double);
        friend istream &operator >>(istream &in,student &s);
        friend ostream &operator <<(ostream &out,student s);
        ~student();
        bool operator > (const student &other) const;
        friend bool operator < (const student &s1,const student &s2);
};
int student::count = 0;
student::student()
{
    this->id = "";
    this->name = "";
    strcpy(this->className,"");
    this->date = "";
    this->gpa = 0;
}
student::student(string id,string name,char className[],string date,double gpa)
{
    this->count++;
    this->id = "SV" + string(3 - to_string(this->count).length(),'0') + to_string(this->count);
    this->name = name;
    strcpy(this->className,className);
    this->date = date;
    this->gpa = gpa;
}
istream &operator >> (istream &in,student &s)
{
    s.count++;
    s.id = "SV" + string(3 - to_string(s.count).length(),'0') + to_string(s.count);
    in.ignore();
    cout << endl << "Input name: ";
    getline(in,s.name);
    cout << endl << "Input className: ";
    in >> s.className;
    cout << endl << "Input date(dd/MM/yyyy): ";
    in >> s.date;
    cout << endl << "Input gpa: ";
    in >> s.gpa;
    in.ignore();
    return in;
}

ostream &operator <<(ostream &out,student s)
{
    if(s.date[1] == '/') s.date = "0" + s.date;
    if(s.date[4] == '/') s.date.insert(3,"0");
    
    out << endl << "<-- Id: " << s.id << " - Name: " << s.name << " - ClassName: " << s.className << " - Date: " << s.date << " - Gpa: " << s.gpa << " -->";
    return out;
}
bool student::operator> (const student &other)const
{
    stringstream ss1(this->date);
    stringstream ss2(other.date);
    int day1,month1,year1,day2,month2,year2;
    char delemiter;
    ss1 >> day1 >> delemiter >> month1 >> delemiter >> year1;
    ss2 >> day2 >> delemiter >> month2 >> delemiter >> year2;
    return (year1 < year2) || (year1 == year2 && month1 < month2) << (year1 == year2 && month1 == month2 && day1 < day2);
}
bool operator < (const student &s1,const student &s2)
{
    return s1.gpa < s2.gpa;
}
student::~student(){}
int main()
{
    int n;
    cout << endl << "Input n: ";
    cin >>n;
    student *listStu = new student[n];
    for(int i=0;i<n;i++)
        cin >> listStu[i];
    for(int i=0;i<n;i++)
        cout << listStu[i];
    sort(listStu,listStu+n,greater<student>());
    cout << endl << "LIST AFTER SORT BY DATE";
    for(int i=0;i<n;i++)
        cout << listStu[i];
    sort(listStu,listStu+n,less<student>());
    cout << endl << "LIST AFTER SORT BY GPA";
    for(int i=0;i<n;i++)
        cout << listStu[i];
    delete[] listStu;
    return 0;
}