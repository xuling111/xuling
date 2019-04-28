#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    const long rolls=36000;
    const int size=13;
    int expected[size]={0,01,2,3,4,5,6,5,4,3,2,1};
    int x;
    int y;
    int sum[size];
    srand(time(0));
    for(long i=1;i<=rolls;i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[x+y]++;
    }
    cout<<setw(10)<<"sum"<<setw(10)<<"Total"<<setw(10)
    <<"Expected"<<setw(10)<<"Actual\n"<<fixed<<showpoint;
    for(int j=2;j<size;j++)
        cout<<setw(10)<<j<<setw(10)<<sum[j]
        <<setprecision(3)<<setw(9)<<100.0*expected[j]/36<<"%"<<setprecision(3)
        <<setw(9)<<100.0*sum[j]/rolls<<"&";
}

