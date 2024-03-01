#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a = 0;a<b;a++)
using namespace std;

void inputMatrix(float *ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
        {
            cout << "Matrix[" << i << "][" << j << "] = ";
            cin >> *(ptrMT+i*col+j);
        }
    }
}
void displayMatrix(float *ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
            cout << *(ptrMT+i*col+j)<<"\t";
        cout << endl;
    }
}
void avgNumMatrix(float *ptrMT,int row,int col)
{
    float sum=0;
    f(i,row)
        f(j,col)
            sum += *(ptrMT+i*col+j);
    
    cout << endl<<"AVG NUMBER MATRIX = "<< sum/(row*col);
}
void productNumRowMatrix(float *ptrMT,int row,int col)
{
    int k;
    do
    {
        cout << endl << "input row k: ";
        cin >> k;
    }
    while(k<0 || k>=row);
    float pro=1;
        f(j,col)
            pro *= *(ptrMT+k*col+j);
    cout << endl << "productNumRowMatrix = " << pro;
    
}
int main()
{
    int row,col;
    cout << endl<<"input row: ";
    cin >>row;
    cout << endl <<"input col: ";
    cin >>col;
    float *ptrMT = new float[row*col];
    inputMatrix(ptrMT,row,col);
    displayMatrix(ptrMT,row,col);
    avgNumMatrix(ptrMT,row,col);
    productNumRowMatrix(ptrMT,row,col);

    delete[] ptrMT;
}