#include <assert.h>
#include "op.h"

int main()
{
    // testbench to uppercase to lower case
    assert( upper_to_lower('A') == 'a' );
    assert( upper_to_lower('S') == 's' );

    // testbench to area of a circle


    //assert( area(5) == 78.549995);

    //test bench for simple interest

    assert( simple_interest(10000, 2, 3) == 600 );

    // test bench for compound interest

    assert(compound_interest(10000, 2, 3) == 609 );

    // test bench for temperature conversion

    assert( celcius_to_fahrenheit(27) == 300 ) ;
   // assert( fahrenheit_to_celcius(300) == 27) ;

   // testbech for 2^N

   assert( two_power(3) == 8) ;

   //test bench for even or odd
   assert( even_or_odd(5) == 1 );
   assert( even_or_odd(6) == 0 );

   // test bench for leap year

   assert(leap_year(2016) == 0);


    return 0;
}
