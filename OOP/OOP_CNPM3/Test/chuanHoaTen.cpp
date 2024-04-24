#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string chuanHoaTen(string name)
{
    name[0] = ::toupper(name[0]);
    for(size_t i = 1; i < name.length();i++)
    {
        if(name[i-1] == ' ')
            name[i] = ::toupper(name[i]);
        else
            name[i] = ::tolower(name[i]);
    }
    return name;
}
string chuanHoaTen1(string name) {
    string finalName = "", word;
    for(char &c: name) 
        c = tolower(c);  
    stringstream ss(name);
    while(ss >> word) 
    {
        word[0] = toupper(word[0]);  
        finalName += word + " ";  
    }
    return finalName;
}
int main()
{
    string nameDefault;
    cout << endl << "Input name: ";
    getline(cin,nameDefault);
    cout << endl << "Name after chuan hoa: " << chuanHoaTen1(nameDefault);
    return 0;
}