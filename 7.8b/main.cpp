#include <iostream>
#include<array>

using namespace std;

int main()
{
    const size_t gradesSize=8;
     array<double,gradesSize>grades={};
    for(size_t i=0;i<20;i++)
      grades[4]=3.114;
    cout<<grades[4]<<endl;
}
