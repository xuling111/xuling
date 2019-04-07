#include <iostream>
#include<string>
using namespace std;
int main()
{
    double a=0;
    double b=0;
    double c=0;
    double m=0;
    double n=0;
    double p=0;
    cout<<"Enter three integers: ";
    cin>>a>>b>>c;


    if(a>b&a>c)
    {
        m=b+c;
        if (m>a)
    cout<<"Yes: ";
        else
        cout<<"No ";
    }
    if(b>a&b>c)
    {
        n=a+c;
       if (n>b)
        cout<<"Yes: ";
        else
        cout<<"No: ";
    }
    if(c>a&c>b)
    {
        p=a+b;
        if (p>c)
        cout<<"Yes: ";
        else
        cout<<"No: ";
    }
    return 0;
}
