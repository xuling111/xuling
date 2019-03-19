#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cout << " Enter five integers: ";
    cin >> a >> b >> c >> d >> e;

    if ( a <= b && a <= c && a <= d && a <= e )
        cout << " Smallest = " << a <<endl;
    if ( a >= b && b <= c && b <= d && b <= e )
        cout << " Smallest = " << b <<endl;
    if ( a <= b && a >= c && c <= d && c <= e )
        cout << " Smallest = " << c <<endl;
    if ( a <= b && a <= c && a >= d && d <= e )
        cout << " Smallest = " << d <<endl;
    if ( a <= b && a <= c && a <= d && a >= e )
        cout << " Smallest = " << e <<endl;

    if ( a >= b && a >= c && a >= d && a >= e )
        cout << " Largest = " << a <<endl;
    if ( a <= b && b >= c && b >= d && b >= e )
        cout << " Largest = " << b <<endl;
    if ( a >= b && a <= c && c >= d && c >= e )
        cout << " Largest = " << c <<endl;
    if ( a >= b && a >= c && a <= d && d <= e )
        cout << " Largest = " << d <<endl;
    if ( a >= b && a >= c && a >= d && a <= e )
        cout << " Largest = " << e <<endl;

} // end function main
