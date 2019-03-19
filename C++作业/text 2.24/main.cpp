#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << " Input one integer ";
    cin >> number;

    if ( number % 2 == 0 )
        cout << " It's even number " <<endl;
    if ( number % 2 != 0 )
        cout << " It's odd number " <<endl;
} // end function main
