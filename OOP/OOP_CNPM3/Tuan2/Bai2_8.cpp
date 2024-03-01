#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int Max(int a,int b)
{
    return max(a,b);
}
double Max(double a,double b)
{
    return max(a,b);
}
int Min(int a,int b)
{
    return min(a,b);
}
double Min(double a,double b)
{
    return min(a,b);
}
int main()
{
    cout << Max(1,10)<<endl;
    cout << Max(4.5,10.6)<<endl;
    cout << Min(2,50)<<endl;
    cout << Min(2.5,1.5);
}