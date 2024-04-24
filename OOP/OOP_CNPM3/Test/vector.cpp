#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> my_vec = {24,12,25,100,-10,2,11};
    // 1, assign(quantity,value)  Fill lấp đầy 5 khoảng trống =  giá trị 12 
    // my_vec.assign(5,12);

    // Cách in 1 
    cout << endl << "\t---IN 1---" << endl;
    for(int x : my_vec)
        cout << right << "|" << setw(10) <<  x ;
    // Cách in 2 
    cout << endl << "\t---IN 2---" << endl;
    for(int i=0;i<my_vec.size();i++)
        cout << "|" << setw(10) << my_vec[i] ;
    // Cách in 3 
    cout << endl << "\t---IN 3---" << endl;
    for(auto i = my_vec.begin(); i< my_vec.end();i++)
        cout << "|" << setw(10) << *i ;
    // 2, push_back(value) insert new value in end of vector 
    my_vec.push_back(100);

    cout << endl << "Value in the last vetor: " << my_vec[my_vec.size() -1 ];
    cout << endl << "Vector after insert new value"<<endl;
    for(int x : my_vec)
        cout << right << "|" << setw(10) <<  x ;
    // 3, pop_back() delete value in end of  vector
    my_vec.pop_back();

    cout << endl << "Vector after delete last value"<<endl;
    for(int x : my_vec)
        cout << right << "|" << setw(10) <<  x ;
    
    // 4, begin() và end() lp trả về 1 kiểu dữ liệu mà nó chỉ biểu diễn cho điểm đầu và cuối cung trong vector  
    sort(my_vec.begin(),my_vec.end());
    cout << endl << "\tMy vector after sort" << endl ;
    for(auto i = my_vec.begin(); i< my_vec.end();i++)
        cout << "|" << setw(10) << *i ;
    // 5, erase(position) delete value at position 
    my_vec.erase(my_vec.begin()+2);
    cout << endl << "\tVector after delete at begin + 2 " << endl;
    for(int x : my_vec)
        cout << right << "|" << setw(10) <<  x ;
    // 6, emplace(position,value) insert value in position in vector, emplace_back(value) insert at end
    my_vec.emplace(my_vec.end() - 2,20);
    cout << endl << "Vector after insert at position" << endl;
    for(int x : my_vec)
        cout << right << "|" << setw(10) <<  x ;
    // 7, swap(vector) chuyển 2 vector cho nhau 
    vector<int> v1,v2;
    for(int i=0;i<3;i++)
    {
        int n;
        cout << endl << "Input value of vector1 " << i+1 << ": ";
        cin >> n;
        v1.push_back( n);
    }
    for(int i=0;i<3;i++)
    {
        int n;
        cout << endl << "Input value of vector2 " << i+1 << ": ";
        cin >> n;
        v2.push_back( n);
    }
    cout << endl << "\t---Vector 1---" << endl ;
    for(int x : v1)
        cout << x << " ";
    cout << endl << "\t---Vector 2---"<< endl;
    for(int x : v2)
        cout << x << " ";
    v1.swap(v2);
    cout << endl << "\t---Vector 1 after swap---"<<endl;
    for(int x : v1)
        cout << x << " ";
    cout << endl << "\t---Vector 2 after swap---"<<endl;
    for(int x : v2)
        cout << x << " ";
    return 0;
}