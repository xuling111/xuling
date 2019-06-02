#include <iostream>
#include "CommissionEmployee
using namespace std;


CommissionEmployee::CommissionEmployee( const string &first,
   const string &last, const string &ssn, int month, int day, int year,
   double sales, double rate )
   : Employee( first, last, ssn, month, day, year )
{
   setGrossSales( sales );
   setCommissionRate( rate );
}
void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
