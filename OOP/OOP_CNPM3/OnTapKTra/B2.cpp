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
        char email[50];
    public:
        student();
        student(string,string,char[],string,char[]);
        friend istream &operator >>(istream &in,student &s);
        friend ostream &operator <<(ostream &out,student s);
        void searchByMajor(student *list,int n);
        ~student();
};

int student::count = 0;

student::student()
{
    this->id = "";
    this->name = "";
    strcpy(this->className,"");
    this->date = "";
    strcpy(this->email,"");
}
student::student(string id,string name,char className[],string date,char email[])
{
    this->count++;
    this->id = "SV" + string(3 - to_string(this->count).length(),'0') + to_string(this->count);
    this->name = name;
    strcpy(this->className,className);
    this->date = date;
    strcpy(this->email,email);
}
istream &operator >> (istream &in,student &s)
{
    s.count ++;
    s.id = "SV" + string(3 - to_string(s.count).length(),'0') + to_string(s.count);
    in.ignore();
    cout << endl << "Input name: ";
    getline(in,s.name);
    cout << endl << "Input className(VD: CNTT): ";
    in >> s.className;
    cout << endl << "Input date(dd/MM/yyyy): ";
    in >> s.date;
    cout << endl << "Input email: ";
    in >> s.email;
    in.ignore();
    return in;
}
ostream &operator << (ostream &out, student s)
{
    if (s.date[1] == '/') s.date = "0" + s.date;
    if (s.date[4] == '/') s.date.insert(3, "0");
    out << endl << "<- Id: " << s.id << "- Name: " << s.name << " - ClassName: " << s.className 
        << " - Date: " << s.date << " - Email: " << s.email << " ->";
    return out;
}
void student::searchByMajor(student *list,int n)
{
    string nganhhoc;
    cout << endl << "Input nganhhoc: ";
    cin >> nganhhoc;
    string major = nganhhoc.substr(3,4);
    for(int i=0;i<n;i++)
    {
        string major1 = list[i].className;
        if(major1 == major )
        {
            if(major1 == "CNTT") major1 = "Cong nghe thong tin";
            else if(major1 == "DCKT") major1 = "Ke toan";
            else if(major1 == "DCVT") major1 = "Vien Thong";
            else if(major1 == "DCDT") major1 = "Dien tu";
            else if(major1 == "DCAT") major1 = "An toan thong tin";
            cout << endl << "<- Id: " << list[i].id << "- Name: " << list[i].name << " - ClassName: " << list[i].className 
            << " - Date: " << list[i].date << " - Email: " << list[i].email <<  " - Major:  " << major1 <<" ->";
        }
    }
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
    listStu->searchByMajor(listStu,n);
    delete[] listStu;
    return 0;
}