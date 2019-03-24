#include <iostream>
using namespace std;
class Time;
class Date
{
public:
    Date(int,int,int);
    friend Time;
private:
     int day;
     int month;
     int year;
};
Date::Date(int d,int m,int y)
{
    int day=d;
    int month=m;
    int year=y;
}
class Time
{
public:
    Time
    void display(const Date&);
private:
    int hour;
    int minute;
    int sec;
};
Time::time(int h,int m,int s)
{
    hour=h;
    minute=m;
    sec=s;
}
void Time::display(const Date &d)
{
    cout<<d.day<<" "<<d.month<<" "<<d.year<<endl;
    cout<<hour<<" "<<minute<<" "<<sec<<endl;

}
int main()
{
    Time t(10,13,56)
    Date d(12,25,2004)
    t.display(d);
    
}








