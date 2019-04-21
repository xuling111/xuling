#include <iostream>

using namespace std;

inline double circleArea(const double side)
{
    return 3.14*side*side;
}
int main()
{
    double sidevalue;
    cout<<"Enter the side length of the circle:";
    cin>>sidevalue;
    cout<<"Volume of circle with side"
    <<sidevalue<<"is"<<circleArea(sidevalue)<<endl;
}
