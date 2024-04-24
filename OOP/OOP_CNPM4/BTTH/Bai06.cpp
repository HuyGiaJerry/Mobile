#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class subject
{
    private:
        string name;
        double componentPoint;
        double mark;  
        int credits;
    public:
        subject();
        subject(string name,double componentPoint,double mark,int credits);
        void inputDataSubject();
        void displayDataSubject();
        double DTB();
        int getCredits();
        ~subject();
};
subject::subject(){};
subject::subject(string name,double componentPoint,double mark,int credits)
{
    this->name = name;
    this->componentPoint = componentPoint;
    this->mark = mark;
    this->credits = credits;
}
void subject::inputDataSubject()
{
    cin.ignore();
    cout << endl << "Nhap name: ";
    getline(cin,this->name);
    cout << endl << "Nhap diemTP: ";
    cin >> this->componentPoint;
    cout << endl << "Nhap diemThi: ";
    cin >> this->mark;
    cout << endl << "Nhap so tin chi: ";
    cin >> this->credits;
}
void subject::displayDataSubject()
{
    cout << endl << "<-- Name: "<< this->name << " - Component point: " << this->componentPoint << " - Mark: "<< this->mark << " - Credits: "<< this->credits <<" -->";
}
double subject::DTB()
{
    return this->componentPoint*0.3 + this->mark*0.7;
}
int subject::getCredits()
{
    return this->credits;
}
subject::~subject(){};

class Student
{
    private:
        string id;
        string name;
        int totalSubject;
        subject *s;
    public:
        Student();
        Student(string id,string name,int totalSubject);
        friend istream& operator>>(istream &in,Student &s);
        friend ostream& operator<<(ostream &in,Student s);
        double DTK();
        ~Student();
};
Student::Student(){};
Student::Student(string id,string name,int totalSubject)
{
    this->id = id;
    this->name = name;
    this->totalSubject = totalSubject;
}
istream& operator>>(istream &in,Student &st)
{
    cout << endl << "Nhap id: ";
    getline(in,st.id);
    cout << endl << "Nhap name: ";
    getline(in,st.name);
    cout << endl << "Nhap totalSubject: ";
    in >> st.totalSubject;
    st.s = new subject[st.totalSubject];
    for(int i=0;i<st.totalSubject;i++)
    {
        cout << endl << "\tNhap thong tin mon hoc: " << i+i << ": ";
        st.s[i].inputDataSubject();
    }
    return in;
}
ostream& operator<<(ostream &out,Student st)
{
    out << endl << " <- Id: "<< st.id << " - Name: "<< st.name << " - TotalSubject: "<< st.totalSubject << " -->";
    out << endl << "<-- TotalPoint: "<< st.DTK() << " -->";
    return out;
}
double Student::DTK()
{
    double totalScore = 0;
    int totalCredits = 0;
    for(int i=0; i< this->totalSubject;i++)
    {
        totalScore += (s[i].DTB() * s[i].getCredits()) ;
        totalCredits += s[i].getCredits();  
    }
    return totalScore / totalCredits;
}
Student::~Student(){};
int main()
{
    Student sv1;
    cin >> sv1;
    cout << sv1;
    return 0;
}