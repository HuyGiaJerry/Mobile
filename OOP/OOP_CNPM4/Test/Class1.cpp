#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define max 100
using namespace std;
void Bai1_1()
{
    float d_toan,d_ly,d_anh;
    float tongdiem;
    cin >> d_anh >> d_ly >> d_anh;
    tongdiem = d_anh + d_ly + d_toan;
    cout << "Tong Diem: " << tongdiem;
    int k;
    float d_uutien;
    do
    {
        cout << endl <<"Nhap vao k: ";
        cin >> k; 
    } while (k>3 || k<1);
    if(k == 1) d_uutien = 1;
    else if(k == 2) d_uutien = 0.5;
    else  d_uutien = 0;
    float ketqua = d_uutien + tongdiem;
    cout << ketqua; 
}
void Bai1_2()
{
    int a,b,c;
    do
    {
        cin >> a >> b >> c;
    }
    while(a+b<c || a+c<b || b+c<a);
    int chuvi = a+b+c;
    cout << "Chu vi: "<<chuvi<< endl;
    float p = chuvi/2;
    float dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Dien Tich: "<<dienTich << endl;
}
void Bai1_3()
{
    int n;
    do
    {
        cin >> n;
    }
    while(n>100 || n<1);
    for(int i=0;i<n;i++)
        cout << i << " ";
    // Tong so chan
    int tongOdd =0;
    for(int i=0;i<n;i++)
    {
        if(i%2 ==0)
            tongOdd += i;
    }
    cout << endl << tongOdd;
    // TBC
    int dem=0;
    float sum=0;
    for(int i=1;i<n;i++)
    {
        if(i%2==0 && i%3==0)
        {
            sum += i;
            dem++;
        }
    }
    (dem==0)? cout<<"Khong co phan tu chan chia het cho 3"<<endl:cout<< endl <<"TBC cac so chan: "<< sum/dem;
}
void Bai1_5()
{
    int n;
    do
    {
        cin >> n;
    } while (n<0 || n>30);
    int salary = n * 400;
    cout << endl << salary;
    int a;
    int addSalary;
    cout << endl <<"Nhap vao so gio lam them: ";
    cin >> a;
    if(a >50) addSalary = a * 200;
    else if(a>0 && a<= 50) addSalary = a * 250;
    int realSalary = addSalary + salary;  
    cout << "Tong thu nhap: " << realSalary;
}
void Bai1_6()
{
    int n;
        do
    {
        cout << "Nhap thoi gian : ";
        cin >> n;
    } while (n<=0 || n>60);
    int m;
    cout << "Nhap vao so thiet bi: ";
    cin >> m;
    int sumTime = n* m;
    cout << sumTime;   
    int tienTong =0; 
    if( n < 100 && n > 0)  tienTong = m * 800;
    else if (n >= 100) tienTong = m *900;
    cout << endl <<"Tien Tong:"<<tienTong;
}
void Bai1_7()
{
    int x,y;
    do
    {
        cout << "Nhap vao x va y: ";
        cin >> x >> y;
    } while (x>=y);
    cout <<endl<<"Tong "<<x<< " va "<<y<<" la: "<<x+y;
    int sum =0;
    for(int i=x;i<=y;i++)
        sum+= i;
    cout << endl <<sum;
    cout << endl << "Cac so chan trong khoang tu "<<x<<" den "<<y<<" la : ";
    for(int i=x;i<=y;i++)
        if(i%2==0)
            cout << i <<" ";
    
}
void Bai1_8()
{
    int n;
    do
    {
        cout << "Nhap vao n: ";
        cin >> n;
    } while (n < 2 || n > 5);
    int arr[max][max];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "Arr"<<"["<<i<<"]"<<"["<<j<<"]"<<"= ";
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout <<endl;
    }
    int k;
    cout << "Nhap hang k: ";
    cin >> k;
    int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[k][j] > 0)
                count++;
        }
    
    cout << count;
}
void Bai1_9()
{
    int n;
    do
    {
        cout << "Nhap vao n: "<< endl;
        cin >>n;
    } 
    while (n<=1 || n>500);
    for(int i=0;i<n;i++)
            if(i%2==0)
                cout << i<<" ";
    int x;
    do
    {
        cout << endl<<"Nhap x: ";
        cin >> x;
    } while (x>n || x<0);
    int sum=0;
    int count=0;
    float avg =0;
    for(int i=x;i<n;i++)
        if(i%2==0)
        {
            sum+= i;
            count++;
        }
    avg = (float)sum/count;
    cout << endl<<"TBC cac so chan tu "<<x<<" den "<< n<<" la : "<<avg;
}
void Bai1_10()
{
    int n;
    cin >> n;
    float matrix[max][max];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "Matrix"<<"["<<i<<"]"<<"["<<j<<"]" <<" = ";
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << matrix[i][j] <<" ";
        cout << endl;
    }
    cout << "Cac gia tri duong cua Ma tran: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(matrix[i][j] > 0)
                cout << matrix[i][j]<<" ";
    }
    int min = 1e8;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((int)matrix[i][j] % 2==0)
            {
                if(matrix[i][j] < min)
                    min = matrix[i][j];
            }
        }
    }
    cout << endl<<"Min Odd number in matrix : "<<min;
}
void Bai1_11()
{
    int n;
    cin >> n;
    float arr[max];
    for(int i=0;i<n;i++)
    {
        cout << "Arr"<<"["<<i<<"]"<<" = ";
        cin >> arr[i];
    }
    cout << endl<<"Mang sau khi nhap la: "<<endl;
    for(int i=0;i<n;i++)
        cout << arr[i] <<" ";
    cout << endl << "Danh sach cac so am co trong mang: "<<endl;
    for(int i=0;i<n;i++)
        if(arr[i] < 0)
            cout << arr[i] <<" ";
    int count =0;
    for(int i =0;i<n;i++)
    {
        if(arr[i] >30 && arr[i] <150.5 )
            count ++;
        
    }
    cout << endl<<"Co "<<count << " so thoa man > 30 va <150.5 !";
       
}
void outputMang(float arr[],int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}
void Bai1_12()
{
    int n;
    cin >>n;
    float arr[max];
    for(int i=0;i<n;i++)
    {
        cout << "Arr"<<"["<<i<<"]"<<" = ";
        cin >> arr[i];
    }
    cout << endl<<"Mang sau khi nhap la: "<< endl;
    for(int i=0;i<n;i++)
        cout << arr[i] <<" ";
    // Sap xep mang
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1] > arr[j])
            {
                float temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl<<"Mang sau khi dc sap xep la : "<<endl;
    outputMang(arr,n);
}
void Bai1_13()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >>n;
    } while (n<1 || n>100);
    cout << "Day so tu 1 den "<< n<<" la :"<<endl;
    for(int i=1;i <= n;i++)
        cout << i <<" ";
    cout << endl <<"Cac so chia het cho 7 tu 1 den "<< n<< " la :"<<endl;
    for(int i=1;i<=n;i++)
        if(i%7==0)
            cout << i << " ";
    // TBC ca so chan chia het cho 7
    int count =0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%7==0 && i%2==0)
        {
            sum += i;
            count++;
        }
    }
    cout << endl<<"TBC cac so chan va chia het cho 7 tu 1 den "<<n<<" la :"<< (float)sum/count;
    
}
int checkPrime(int num)
{
    if(num <2) return 0;
    if(num ==2) return 1;
    for(int i=2;i<sqrt(num);i++)
        if(num % i==0)
            return 0;
    return 1;
}
void Bai1_14()
{
    int n;
    cin >> n;
    float T = 3*(pow(n,2))*2*(pow(n,2))+1;
    cout << "T = "<<T <<endl;
    // Cac so chan tu 1 den n
    for(int i=0;i<n;i++)
        if(i%2==0)
            cout<<i<<" ";
    // Ktra so nguyen to 
    checkPrime(n) ? cout << endl << n <<" la so nguyen to !" : cout << endl << n << " khong phai la so nguyen to !"; 
}
int main()
{
    // Bai1_1();
    // Bai1_2();
    // Bai1_3();
    // Bai1_5();
    // Bai1_6();
    // Bai1_7();
    // Bai1_8();
    // Bai1_9();
    // Bai1_10();
    // Bai1_11();
    // Bai1_12();
    // Bai1_13();
    Bai1_14();

    
}