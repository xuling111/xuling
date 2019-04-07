#include <iostream>
#include<string>

using namespace std;
int main()
{
    int number;
    int largest=0;
    int counter=0;
    cout<<"Enter ten numbers: ";
    while(counter<10)
    {
        cin>>number;
        if(number>largest)
            largest=number;
        counter++;
    }
    cout<<largest<<endl;
    return 0;
}


