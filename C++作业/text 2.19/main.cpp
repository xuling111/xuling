#include <iostream>

using namespace std;

int main()
{
   int x = 0;
   int y = 0;
   int z = 0;
   int sum = 0;
   int average = 0;
   int product = 0;
   int smallest = 0;
   int largest = 0;

   cout << " Input three different integers ";
   cin >> x >> y >> z;

   sum = x + y + z;
   average = ( x + y + z ) / 3;
   product = x * y * z;

   if ( x <= y && x <= z )
      cout << " Smallest = " << x <<endl;

   if ( x >= y &&  y <= z )
      cout << " Smallest = " << y <<endl;

   if ( x <= y &&  x >= z )
      cout << " Smallest = " << z <<endl;

   if ( x >= y && x >= z )
      cout << " Largest = " << x <<endl;

   if ( x <= y && y >= z )
      cout << " Largest = " << y <<endl;

   if ( x <= y && y <= z )
      cout << " Largest = " << z <<endl;

   cout << " Sum is " << sum << endl;
   cout << " Average is " << average << endl;
   cout << " Product is " << product << endl;
} // end function main
