#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a=0;a<b;a++)
using namespace std;

void inputArr(float *ptrArr,int n)
{
    f(i,n)
    {
        cout << "Arr " << i << " = ";
        cin >> *(ptrArr+i);
    }
}
void displayArr(float *ptrArr,int n)
{
    f(i,n)
        cout << *(ptrArr+i) << "\t";
}
void displayPosNumArr(float *ptrArr,int n)
{
    cout << endl << "Danh sach cac so duong: " <<endl;
    f(i,n)
        if(*(ptrArr+i) > 0)
            cout << *(ptrArr+i) << "\t";
}
void avgNumArr(float *ptrArr,int n)
{
    float sum =0;
    int cnt =0;
    float avg;
    f(i,n)
        if(*(ptrArr+i) > 0)
        {
            sum += *(ptrArr+i);
            cnt++;
        }
    avg = sum/cnt;
    cout << endl<<"AVG POSITIVE NUM = "<<avg;
    
}
int main()
{
    int n;
    cout << endl << "Input n:";
    cin >> n;
    // Cấp phát mảng động = new 
    float *ptrArr = new float[n];
    inputArr(ptrArr,n);
    displayArr(ptrArr,n);
    displayPosNumArr(ptrArr,n);
    avgNumArr(ptrArr,n);

    delete[] ptrArr; 
}