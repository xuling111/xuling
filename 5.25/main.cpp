#include <iostream>

using namespace std;

int main()
{
    int a;
    int x;
    int y;
    cout<<"Enter five nums(1-30):";

    for(x=1;x<=5;x++)
    {
        cin>>a;
        for(y=1;y<=a;y++)
        {
            cout<<'*';
        }
        cout<<endl;

    }
    return 0;
}
