#include<bits/stdc++.h>
#include<iostream>
#define m 100
using namespace std;

void Bai1()
{
    // In cùng 1 dòng
    cout << "Xin Chao ";
    cout << "Cac Ban !"<< endl;
    // In mỗi từ trên 1 dòng 
    string str = "Xin Chao Cac Ban !";
    // Tách chuỗi thành từng từ 
    istringstream iss(str);
    string word;
    // In ra từng trên từng dòng 
    while(iss >> word)
        cout<< word << endl;
}

void Bai2()
{
    for(int i='a';i<'z';i++)
    {
        cout << char(i) << " = ";
        cout << i <<" | ";
    }
}
void Bai3()
{
    int a,b;
    cout << "Nhap vao 2 so a , b: ";
    cin >> a >> b;
    // in ra tổng , hiệu , tích
    cout << "Tong :" << a+b << endl;
    cout << "Hieu :" << a-b << endl;
    cout << "Tich :"<< a*b << endl;
    // In ra quan hệ a và b
    if (a>b) cout << a <<" > "<<b <<endl;
    else if(a==b) cout << a <<" = "<<b<<endl;
    else cout << a << " < " <<b <<endl;
}
void Bai4_5()
{
    // tổng từ 1 đến 10 
    int sum =9;
    for(int i=1;i<=10;i++)
        sum += i;
    cout << "Tong tu 1 den 10 la: "<< sum << endl;
    // a mũ b
    int a,b;
    cin >> a >> b;
    float c = pow(a,b);
    cout << a << "^" <<b << "="<<c;
}
void Bai6()
{
    string str ;
    cout << "Nhap vao 1 xau ky tu: "<< endl;
    getline(cin,str);
    // Đếm có bao nhiêu từ trong chuỗi 
    // int countWord =0;
    // bool check = false;
    // for(char ch : str)
    // {
    //     if(isspace(ch))
    //         check = false;
    //     else
    //     {
    //         if(!check)  // Vì check = false nên ! check = true nên if sẽ chạy
    //         {
    //             countWord ++;
    //             check = true;
    //         }
    //     }
    // }
    // cout << endl <<"Co "<<countWord << " tu trong chuoi "<< str;
    // Kiểm tra chuỗi đối xứng 
    int size = str.size();
    cout << size;
    int check = (size/2) ;
    int count = 0;
    for(int i=0;i<size/2;i++)
         if(str[i] == str[size-i-1])
                count ++;
    (count == check) ? cout << endl <<"Chuoi " <<"| " <<str <<" |"<< " doi xung! " : cout << endl<<" Chuoi " << str << " Khong doi xung !";
}
int fibo(int num)
{
    if(num ==0 or num ==1)
        return 1;
    else 
        return fibo(num -1) + fibo(num -2);
}
void Bai7()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    cout << endl<<fibo(n);
}
void Bai10()
{
    int n;
    cin >> n;
    // Phan a
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout << "* ";
        cout << endl;
    }
    // Phan b
    cout << endl;
    for(int i =n;i>0;i--)
    {
        for(int j=0;j<i;j++)
            cout << "* ";
        cout << endl;
    }
}
void maxmin_ValueArr(int arr[],int n)
{
    int max = -1e7;
    for(int i=0;i<n;i++)
        if(arr[i] > max)
            max = arr[i];
    int min =  1e7;
    for(int i=0;i<n;i++)
        if(arr[i] < min)
            min = arr[i];
    cout << endl <<" MAX VALUE IN ARR: "<< max;
    cout << endl << " MIN VALUE IN ARR: "<< min;
}
int sumArr(int arr[],int n)
{
    int sum =0;
    for(int i =0;i<n;i++)
        sum += arr[i];
    return sum;
} 
void Bai11()
{
    int arr[m];
    int n;
    cin >> n;
    // Nhap gia tri cua mang 
    for(int i=0;i<n;i++)
    {
        cout << "Arr " <<i<<" = ";
        cin >> arr[i]; 
    }
    // Ham 1
    maxmin_ValueArr(arr,n);
    
    // Ham 2 
    cout << endl <<" SumValueArr = "<<sumArr(arr,n);
}

void Bai12()
{
    int n;
    do
    {
        cout << "Nhap n nguyen duong : ";
        cin >> n;
    }while(n<=0);
    // Tính số n của dãy fibonaxi VD: 1 1 2 3 5 8 13 ... 
    cout << endl << "Phan tu thu n cua day fibo: "<< fibo(n);
}
int main()
{
    // Bai1();
    // Bai2();
    // Bai3();
    // Bai4_5();
    // Bai6();
    // Bai7();
    // Bai10();
    // Bai11();
    Bai12();
}
