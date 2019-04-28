#include <iostream>
#include<array>

using namespace std;
int main()
{
    const size_t valuesSize=5;
    array<int,valuesSize>values={};
    for(size_t i=0;i<5;i++)
        values[i]=8;
    cout<<values[0]<<values[1]<<values[2]
    <<values[3]<<values[4]<<endl;
}
