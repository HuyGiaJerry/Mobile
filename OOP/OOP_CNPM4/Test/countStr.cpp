#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int countStr =0;
    getline(cin,str);
    bool check = true;
    for(int i=0;i < str.length();i++)
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            if(check)
            {
                countStr++;
                check = false;
            }
        else
            check = true;
    }
    if(str.empty())
        countStr = 0;
    cout << endl<<"So Chu Trong Chuoi str: "<< str << " la : "<< countStr;
    
    
    
}