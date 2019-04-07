#include <iostream>
#include<string>

using namespace std;
int main()
{
    int number;
    int counter=0;
    int largest=0;
    int blargest=0;
    cout<<"Enter ten numbers: ";
    while(counter<=10)
    {
        cin>>number;
    if(number>largest)
        largest=number;

        if((number!=largest)&&(number>blargest))
        blargest=number;
        counter++;
    }
    cout<<largest<<endl;
    cout<<blargest<<endl;
        return 0;
}
