// Cách 2: 
#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a = 0;a<b;a++)
using namespace std;

void inputMatrix(int *ptrMT,int n)
{
    f(i,n)
    {
        f(j,n)
        {
            cout << "Matrix["<<i<<"]["<<j <<"] = ";
            cin >> *(ptrMT+i*n+j);
        }
    }
}
void displayMatrix(int *ptrMT,int n)
{
    f(i,n)
    {
        f(j,n)
            cout << *(ptrMT+i*n+j) <<"\t";
        cout << endl;
    }
} 
void countPosNumColMatrix(int *ptrMT,int n)
{
    int cnt = 0;
    int k;
    cout << endl<<"Input Col k ( 0 < k < "<<n <<" ): "; 
    cin >> k;
    f(i,n)
        if(*(ptrMT+i*n+k) > 0)
            cnt++;
    cout << endl << "Positive Number Col "<<k<<" in Matrix = "<<cnt;
}
int main()
{
    int n;
    cout << endl <<"Input n:";
    cin >>n;
    int *ptrMT = new int[n*n];

    inputMatrix(ptrMT,n);
    displayMatrix(ptrMT,n);
    countPosNumColMatrix(ptrMT,n);

    delete[] ptrMT;
}