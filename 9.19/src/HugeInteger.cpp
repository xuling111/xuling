#include <iostream>
#include "HugeInteger.h"
using namespace std;


HugeInteger::HugeInteger( long value )
{

   for ( int i = 0; i < 40; i++ )
      integer[ i ] = 0;


   for ( int j = 39; value != 0 && j >= 0; j-- )
   {
      integer[ j ] = static_cast< short >( value % 10 );
      value /= 10;
   }
HugeInteger::HugeInteger( const string &string )
{
   input( string );
}


HugeInteger HugeInteger::add( HugeInteger op2 )
{
   HugeInteger temp;
   int carry = 0;


   for ( int i = 39; i >= 0; i-- )
   {
      temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;


      if ( temp.integer[ i ] > 9 )
      {
         temp.integer[ i ] %= 10;
         carry = 1;
      }
      else
         carry = 0;
   }

   return temp;
}
HugeInteger HugeInteger::add( int op2 )
{
   return add( HugeInteger( op2 ) );
}
HugeInteger HugeInteger::add( const string &op2 )
{
   return add( HugeInteger( op2 ) );
}

HugeInteger HugeInteger::subtract( HugeInteger op2 )
{

   if ( isLessThan( op2 ) )
   {
      cout << "Error: Tried to subtract larger value from smaller value."
         << endl;
      return HugeInteger( "0" );
   }
   HugeInteger result( "0" );


   bool minusOne = false;


   for ( int i = 39; i >= 0; i-- )
   {

      int topValue = integer[ i ];
      int bottomValue = op2.integer[ i ];


      if ( minusOne )
      {
         if ( topValue == 0 )
            topValue = 9;
         else
         {
            topValue -= 1;
            minusOne = false;
         }
      }


      if ( topValue >= bottomValue )
         result.integer[ i ] = topValue - bottomValue;
      else
      {
         topValue += 10;
         minusOne = true;
         result.integer[ i ] = topValue - bottomValue;
      }
   }

   return result;
}


HugeInteger HugeInteger::subtract( int op2 )
{

   return subtract( HugeInteger( op2 ) );
}


HugeInteger HugeInteger::subtract( const string &op2 )
{
   return subtract( HugeInteger( op2 ) );
}
bool HugeInteger::isEqualTo( HugeInteger x )
{
   for ( int i = 39; i >= 0; i-- )
      if ( integer[ i ] != x.integer[ i ] )
         return false;

   return true;
}
bool HugeInteger::isNotEqualTo( HugeInteger x )
{
   return !( isEqualTo( x ) );
}
bool HugeInteger::isGreaterThan( HugeInteger x )
{
   return ( x.isLessThan( *this ) );
}
bool HugeInteger::isLessThan( HugeInteger x )
{
   for ( int i = 0; i < 40; i++ )
      if ( integer[ i ] > x.integer[ i ] )
         return false;
      else if ( integer[ i ] < x.integer[ i ] )
         return true;

   return false;
}
bool HugeInteger::isGreaterThanOrEqualTo( HugeInteger x )
{
   return ( !isLessThan( x ) );
}
bool HugeInteger::isLessThanOrEqualTo( HugeInteger x )
{
   return ( isEqualTo( x ) || isLessThan( x ) );
}
bool HugeInteger::isZero()
{
   for (int i = 0; i < 40; i++ )
      if ( integer[ i ] != 0 )
         return false;

   return true;
}
void HugeInteger::input( const string &val )
{

   for ( int i = 0; i < 40; i++ )
      integer[ i ] = 0;


   int length = val.size();

   for ( int j = 40 - length, k = 0; j < 40; j++, k++ )

      if ( isdigit( val[ k ] ) )
         integer[ j ] = val[ k ] - '0';
}
void HugeInteger::output()
{
   int i;

   for ( i = 0; ( integer[ i ] == 0 ) && ( i <= 39 ); i++ )
      ;

   if ( i == 40 )
      cout << 0;
   else
      for ( ; i <= 39; i++ )
         cout << integer[ i ];
}
