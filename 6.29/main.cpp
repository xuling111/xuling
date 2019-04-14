#include <iostream>
#include<iomanip>

using namespace std;
bool isPreime(int);
int main()
{
    int cout=1;
    cout<<"The prime numbers from 1 to 10000 are:"<<endl;
    cout<<setw(6)<<2;
    for(int loop=3;loop<10000;loop+=2)
    {
      if(isprime(loop))
      {
        cout++;
        cout<<setw(6)<<loop;
        if(cout%10==0)
            cout<<'\n';
      }
    }
    cout<<endl<<"Total of"<<cout<<"Prime numbers between 1 and 10000."<<endl;
}
bool isPrime(int n)
{
    for(int loop2=2;loop2<=n/2;loop2++)
    {
        if(n%loop2==0)
            return false;
    }
    return true;
}


