#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
    array<double,11>a={1,2.1,3.3,4,5,6,6,6,7,8,9};
    array<double,34>b={};
    for(double& b:a)
        cout<<b<<endl;

}

