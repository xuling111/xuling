#include <iostream>
#include<iomanip>

using namespace std;
int inversion(int);
int main()
{
    int a=0;
    cout<<"Enter one integer:";
    cin>>a;
    cout<<"The result is"<<inversion<<endl;
}
int inversion(int n)
{
    int b=0;
    {
        b*=10;
        b+=n%10;
        n/=10;
    }

    return b;
}
