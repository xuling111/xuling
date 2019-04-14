#include <iostream>
#include<cmath>
using namespace std;
double hypotenuse(double,double);
int main()
{
    double x;
    double y;
    double z;
    cout<<"Enter two integers:";
    cin>>x>>y;
    cout<<"The result is"<<hypotenuse(x,y)<<endl;
}
double hypotenuse(double x,double y)
{
double z;
z=(x*x+y*y);
cout<<sqrt(z)<<endl;
return sqrt(z);
}

