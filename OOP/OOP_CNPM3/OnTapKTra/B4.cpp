#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class company
{   
    private:
        char id[10];
        string name;
        string dateFound;
        int totalStudent;
    public:
        company();
        company(char[],string,string,int);
        friend istream &operator >>(istream &in,company &c);
        friend ostream &operator << (ostream &out,company c);
        vector<company> searchAToB(company *list,int n);
        bool operator < (const company &other) const;
        ~company();
};

company::company()
{
    strcpy(this->id,"");
    this->name = "";
    this->dateFound = "";
    this->totalStudent = 0;
}

company::company(char id[],string name,string dateFound,int totalStudent)
{
    strcpy(this->id,id);
    this->name = name;
    this->dateFound = dateFound;
    this->totalStudent = totalStudent;
}

istream &operator >>(istream &in,company &c)
{
    in.ignore();
    cout << endl << "Input id: ";
    in >> c.id;
    in.ignore();
    cout << endl << "Input name: ";
    getline(in,c.name);
    cout << endl << "Input dateFound(dd/MM/yyyy): ";
    in >> c.dateFound;
    do
    {
        cout << endl << "Input totalStudent(<100): ";
        in >> c.totalStudent;
    }while(c.totalStudent >= 100 || c.totalStudent <= 0);
    in.ignore();
    return in;
}
ostream &operator <<(ostream &out,company c)
{
    if(c.dateFound[1]=='/') c.dateFound = "0" + c.dateFound;
    if(c.dateFound[4]=='/') c.dateFound.insert(3,"0");
    out << endl << "<-- Id: " << c.id << " - Name: " << c.name << " - DateFound: " << c.dateFound << " - TotalStudent: " << c.totalStudent << " -->";
    return out;
}
bool company::operator<(const company &other)const
{
    return this->totalStudent < other.totalStudent;
}
vector<company> company::searchAToB(company *list,int n)
{
    int a,b;
    vector<company> searchList;
    cout << endl << "Input a to b: ";
    cin >>a >> b;
    for(int i=0;i<n;i++)
        if(list[i].totalStudent > a  && list[i].totalStudent < b)
            searchList.push_back(list[i]);
    return searchList;
}
company::~company(){};
int main()
{
    int n;
    cout << endl << "Input n: ";
    cin >> n;
    company *listCompany = new company[n];
    for(int i=0;i<n;i++)
        cin >> listCompany[i];
    for(int i=0;i<n;i++)
        cout << listCompany[i];
    vector<company> list = listCompany->searchAToB(listCompany,n);
    sort(list.begin(),list.end(),less<company>());
    cout << endl << "LIST AFTER LIST BY TOTALSTUDENT";
    for(auto i : list)
        cout << i;
    delete[] listCompany;
    return 0;
}