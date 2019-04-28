#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<double,12>monthlyTemperatures={};
    int i;
    for(size_t i=0;i<12;++i)
        cout<<"Enter 12 integers:";
    cin>>i;
    cout<<monthlyTemperatures[i]<<endl;
}
