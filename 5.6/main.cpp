#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int x;
    int count=0;
    int total =0;
    cout<<"Enter integers(9999 to end): "<<endl;
    cin>>x;

    while(x!=9999)
    {
        total+=x;
        count++;
        cin>>x;
    }

    cout<<"average is"<<total<<endl;

return 0;
}
