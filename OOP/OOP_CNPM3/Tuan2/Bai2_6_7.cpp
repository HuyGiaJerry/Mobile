#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a=0;a<b;a++)
using namespace std;

void inputMatrix(int *ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
        {
            cout << "Matrix["<<i<<"]"<<"["<<j<<"] = ";
            cin >> *(ptrMT+i*col+j);
        }
    }
}
void outputMatrix(int *ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
            cout << *(ptrMT+i*col+j)<<"\t";
        cout << endl;
    }
}
void oddNumMatrix(int *ptrMT,int row,int col)
{
    cout << endl << "Danh cac so chan trong ma tran la: ";
    f(i,row)
    {
        f(j,col)
        {
            if(*(ptrMT+i*col+j) %2 ==0)
                cout << *(ptrMT+i*col+j) <<"\t";
        }
    }
}
void evenNumMatrix(int *ptrMT,int row,int col)
{
    cout << endl << "Danh cac so le trong ma tran la: ";
    f(i,row)
    {
        f(j,col)
        {
            if(*(ptrMT+i*col+j) %2 !=0)
                cout << *(ptrMT+i*col+j) <<"\t";
        }
    }
}
void sumDiagonalMatrix(int *ptrMT,int row,int col)
{
    int sumDiagonal =0;
    f(i,row)
        f(j,col)
            if(i==j)
                sumDiagonal += *(ptrMT+i*col+j);
    cout << endl << "Tong duong cheo chinh = "<< sumDiagonal;
}
void avgColKMatrix(int *ptrMT,int row,int col)
{
    int k;
    do
    {
        cout << endl << "Nhap cot k: ";
        cin >> k;
    } while (k<0 || k>=col);
    float sum =0;
    float avg;
    f(i,row)
        f(j,col)
            sum += *(ptrMT+i*col+k);
    avg = sum/row;
    cout << endl <<"AVG Col "<<k<<" Matrix = " << avg;
}
int main()
{
    int row,col;
    cout << "Nhap row: ";
    cin >> row;
    cout << "Nhap col: ";
    cin >> col;
    int *ptrMT = new int [row*col];
    inputMatrix(ptrMT,row,col);
    // outputMatrix(ptrMT,row,col);
    // oddNumMatrix(ptrMT,row,col);
    // sumDiagonalMatrix(ptrMT,row,col);
    avgColKMatrix(ptrMT,row,col);
    delete[] ptrMT; 
}