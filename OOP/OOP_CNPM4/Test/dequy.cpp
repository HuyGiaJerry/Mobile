#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long sum(int n)
{
    if(n<10)
        return n;
    else
        return n%10 + sum(n/10);
}

long long gt(int k)
{
    if(k==0)
        return 1;
    else    
        return k * gt(k-1);
}

long long fibo(int f)
{
    if(f==0 || f==1)
        return 1;
    else
        return fibo(f-1) + fibo(f-2);
}

long long ucln(int a,int b)
{
    if(b==0)
        return a;
    else
        return ucln(b, a % b);
}
int main()
{
    int n = 123456;
    cout << endl << "sum " << n << " = " << sum(n); 
    int k = 10;
    cout << endl << k << " ! = " << gt(k); 
    int f = 10;
    cout << endl << "fibo("<<f<<") = " << fibo(f); 
    int a = 10 , b = 60;
    cout << endl << "Ucln cua " << a <<" va " << b << " la : " << ucln(a,b);
    return 0;
}