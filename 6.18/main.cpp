#include <iostream>

using namespace std;

int integerPower(int,int);
int main()
{
    int base;
    int exponent;
    cout<<"Enter base and exponent:";
    cin >>base>>exponent;
    cout<<"result is" <<integerPower(base,exponent)<<endl;
}
int integerPower(int base,int exponent)
{
    int product=1;
    for(int i=1;i<=exponent;i++)
        product*=base;
    return product;

}
