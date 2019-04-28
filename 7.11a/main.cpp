#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
    const size_t countsSize=10;
    array<unsigned,countsSize>counts={};
    for(size_t i=0;i<10;i++)
        cout<<counts[i]<<endl;

}
