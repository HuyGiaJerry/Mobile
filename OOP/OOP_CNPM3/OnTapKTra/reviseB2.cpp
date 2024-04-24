#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

class student
{
    private:
        string id;
        string name;
        string className;
        string date;
        string email;
    public:
        student();
        student(string , string , string , string ,string);
        friend istream &operator>>(istream &in,student &s);
        friend ostream &operator<<(ostream &out,student s);
        vector<student> searchStudentById(student *students,int n);
        ~student();
};

student::student()
{
    id = name = className = date = email = "";
}
student::student(string id,string name,string className,string date,string email)
{
    this->id = id;
    this->name = name;
    this->className = className;
    this->date = date;
    this->email = email;
}
istream &operator >>(istream &in,student &s)
{
    
    in.ignore();
    cout << endl << "Input id(Example: D12CNTT): ";
    getline(in,s.id);
    cout << endl << "Input name: ";
    getline(in,s.name);
    cout << endl << "Input classname: ";
    in >> s.className;
    in.ignore();
    cout << endl << "Input date: ";
    getline(in,s.date);
    cout << endl << "Input email: ";
    in >> s.email;
    return in;
}
ostream &operator<<(ostream &out,student s)
{
    if(s.date[1] == '/') s.date = "0" + s.date;
    if(s.date[4] == '/') s.date = s.date.insert(3,"0");
    out << endl << "<-- Id: " << s.id << " - Name: " << s.name << " - ClassName: " << s.className << " - Date: " << s.date << " - Email: " << s.email << " -->";
    return out;
}
vector<student> student::searchStudentById(student *students,int n)
{
    vector<student> list;
    string theChoosen;
    cout << endl << "Input major to filter: ";
    cin >> theChoosen;
    transform(theChoosen.begin(), theChoosen.end(), theChoosen.begin(), ::toupper);
    string major;
    if(theChoosen == "CNTT") major = "CONG NGHE THONG TIN";
    if(theChoosen == "DCKT") major = "KE TOAN";
    if(theChoosen == "DCAT") major = "AN TOAN THONG TIN";
    if(theChoosen == "DCVT") major = "VIEN THONG";
    if(theChoosen == "DCDT") major = "DIEN TU";
    string subStr;
    bool check = false;
    cout << endl << "STUDENT LIST MAJOR " << major;
    for(int i=0;i<n;i++)
    {
        subStr =  students[i].id.substr(3,4);
        if(subStr == theChoosen)
        {
            check = true;
            cout << students[i];
            list.push_back(students[i]);
        }   
    }
    if(!check) cout << endl << "LIST HAS NO MAJOR " << major << " TO FIND";
    return list;
}
student::~student(){}
int main()
{
    int n;
    cout << endl << "Input total student: ";
    cin >> n;
    student *list = new student[n];
    for(int i=0;i<n;i++)
        cin >> list[i];
    for(int i=0;i<n;i++)
        cout << list[i];
    vector<student> listStu = list->searchStudentById(list,n);
    delete[] list;
    return 0;
}