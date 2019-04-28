#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
    int largest;
    int smallest;
    array<double,99>w={1,2,3};
    for(size_t i=0;i<99;i++)
    {
        if(w[i]<smallest)
            cout<<w[i]<<smallest;
        else if
            (w[i]>largest)
        cout<<w[i]<<largest;
    }

}
