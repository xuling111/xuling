#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"Enter three integers:";
    cin>>a>>b>>c;
    if((a*a+b*b==c*c))
        cout<"It is a right triangle:";
    else
        if((a*a+c*c)==b*b)
        cout<<"It is a right triangle:";
    else
       if((b*b+c*c)==a*a)
        cout<<"It is a right triangle:";
    return 0;
}
