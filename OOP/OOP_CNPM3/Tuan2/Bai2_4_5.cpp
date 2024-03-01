#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define f(a,b) for(int a=0;a<b;a++)
using namespace std;
void inputArr(int *ptrArr,int n)
{
    f(i,n)
    {
        cout << "Arr["<<i<<"]= ";
        cin >> ptrArr[i];
    }
}
void outputArr(int *ptrArr,int n)
{
    f(i,n)
        cout << ptrArr[i] <<" ";
}
void oddNumArr(int *ptrArr,int n)
{
    int maxOdd= INT_MIN;
    cout << endl;
    f(i,n)
    {
        if(ptrArr[i] %2==0)
        {
            cout << ptrArr[i] <<" ";
            maxOdd = max(maxOdd,ptrArr[i]);
        }
    }
    (maxOdd != INT_MIN) ? cout << endl << "Max oddnumner in array = "<<maxOdd : cout << endl << "Khong co so chan nao trong mang !";
}
void avgNum(int *ptrArr,int n)
{
    float sum =0 ;
    float avg;
    f(i,n)
        sum += ptrArr[i];
    avg = sum/n;
    cout << endl<<"AVG ARR = " << avg ;
}
void minPositive(int *ptrArr,int n)
{
    int minPos = INT_MAX;
    f(i,n)
        if(ptrArr[i] >0)
            if(ptrArr[i] < minPos)
                minPos = ptrArr[i];
    cout <<endl << "MIN POSITIVE NUMBER IN ARRAY: " << minPos;
}
int main()
{
    int n;
    cout << endl<<"Nhap n:";
    cin >>n;
    int *ptrArr = new int[n];
    inputArr(ptrArr,n);
    outputArr(ptrArr,n);
    oddNumArr(ptrArr,n);
    avgNum(ptrArr,n);
    minPositive(ptrArr,n);
    delete[] ptrArr;
}