#include <iostream>

using namespace std;

int qualityPoints(int);
int main()
{
    int number;
    for(int loop=1;loop<=5;loop++)
        cout<<"Enter the grades:";
    cin>>number;
    cout<<number<<"The result is"<<qualityPoints<<endl;
    cout<<endl;

}
int qualityPoints(int x)
{
    int a=0;
    {if(90<x<100)
        a=4;
 else
    if(80<x<89)
        a=3;
 else
    if(70<x<79)
        a=2;
 else
    if(60<x<69)
        a=1;
    }
    cout<<"The result is"<<a<<endl;
        return a;
}
