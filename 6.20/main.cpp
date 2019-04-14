#include <iostream>

using namespace std;
bool multiple(int,int);
int main()
{
    int x;
    int y;
    cout<<"Enter two integers:";
    cin>>x>>y;

}

for(int i=1;i<=3;i++)
   {

    if(multiple(x,y))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
   }

 bool multiple(int x,int y)
{
    return(y%x);
}
