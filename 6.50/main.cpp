#include <iostream>

using namespace std;

int main()
{
    int count;
    cout<<"Enter a integer for count:";
    cin>>count;

cout<<"\n\nvalue of count before call to tripByValue()is:"
<<count<<"\nvalue of count(int main)after tripByValue()is:"
<<count;
cout<<"\n\nValue of count before call to tripleByReference()is:"<<count<<endl;
tripleByReference(count);
cout<<"Value of count(int main)after call to;
<<"tripleByReference()is:"<<count<<endl;
}
int tripleByValue(int value)
{
    return value*=3;
}
void tripleByReference(int &valueRef)
{
    valueRef*=3
}
