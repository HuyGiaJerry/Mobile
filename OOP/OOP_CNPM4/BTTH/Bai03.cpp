#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Time
{
private:
    double second, minute, hour;
public:
    Time();
    Time(double a, double b, double c);
    friend istream &operator>>(istream &in, Time &t);
    friend ostream &operator<<(ostream &out, const Time &t);
    double getHour();
    double getMinute();
    double getSecond();
    Time maxTime(Time *t, int n);
    ~Time();
};
Time::Time() {}
Time::Time(double second, double minute, double hour)
{
    this->second = second;
    this->minute = minute;
    this->hour = hour;
}
istream &operator>>(istream &in, Time &t)
{
    cout << endl << "Nhap hour: ";   
    in >> t.hour;
    cout << endl << "Nhap minute: ";  
    in >> t.minute;
    cout << endl << "Nhap second: ";
    in >> t.second;
    return in;
}
ostream &operator<<(ostream &out, const Time &t)
{
    out << endl <<"<-- " << t.hour << " hours " << t.minute << " minutes " << t.second << " seconds";
    return out;
}
double Time::getHour()
{
    return hour;
}
double Time::getMinute()
{
    return minute;
}
double Time::getSecond()
{
    return second;
}
Time Time::maxTime(Time *t, int n)
{
    Time maxT = t[0];
    for (int i = 1; i < n; i++)
    {
        if ((t[i].getHour() > maxT.getHour()) || (t[i].getHour() == maxT.getHour() && t[i].getMinute() > maxT.getMinute()) || (t[i].getHour() == maxT.getHour() && t[i].getMinute() == maxT.getMinute() && t[i].getSecond() > maxT.getSecond()))
            maxT = t[i];
    }
    return maxT;
}
Time::~Time()
{
    cout << endl  << "Doi tuong da dc huy !"; 
}
int main()
{
    int n;
    cout << endl << "Nhap n: ";
    cin >> n;
    Time *t = new Time[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl << "\tNhap Time " << i + 1 << " : ";
        cin >> t[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl << "\tTime " << i + 1 << " : ";
        cout << t[i];
    }
    Time TimeMax = TimeMax.maxTime(t,n);
    cout << TimeMax;
    delete[] t;
    return 0;
}
