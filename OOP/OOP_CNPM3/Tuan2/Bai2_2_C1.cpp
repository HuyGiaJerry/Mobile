//  Cách 1: 
#include<iostream>
#include<bits/stdc++.h>
#define f(a,b) for(int a=0;a<b;a++)
using namespace std;

void inputMatrix(int **ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
        {
            cout << "Matrix[" << i << "][" << j << "] = ";
            cin >> ptrMT[i][j];
        }
    }
}
void displayMatrix(int **ptrMT,int row,int col)
{
    f(i,row)
    {
        f(j,col)
            cout << ptrMT[i][j]<<"\t";
        cout << endl;
    }
}
void countPosNumColMatrix(int **ptrMT,int row,int col)
{
    int cnt = 0;
    int k;
    cout << endl<<"Input Col k ( 0 < k < "<<row <<" ): "; 
    cin >> k;
    f(i,row)
        if(ptrMT[i][k] >0)
            cnt++;
    
    cout << endl << "Positive Number Col "<<k<<" in Matrix = "<<cnt;
}
int main()
{
    int n,row,col;
    do
    {
        cout << endl<< "Input n:";
        cin >>n;
    } while (n<2 || n>5);
    row = col = n;
    // Cấp phát động cho ma trận 
    int **ptrMT = new int*[row];
    f(i,n)
        ptrMT[i] = new int[col];

    inputMatrix(ptrMT,row,col);
    displayMatrix(ptrMT,row,col);
    countPosNumColMatrix(ptrMT,row,col);
    // Xóa ma trận động 
    f(i,row)
        delete[] ptrMT[i];

    delete[] ptrMT;
}