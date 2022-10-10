#include "op.h"

char upper_to_lower(char input)
{
    return (input += 32);
}

float area(unsigned int radius)
{

    const float pi = 3.142;
    return pi*(radius*radius);
}

unsigned int simple_interest(unsigned int amount, unsigned int term, unsigned int RateOfInterest)
{

    return (amount * term * RateOfInterest) / 100 ;
}

unsigned int compound_interest(unsigned int amount, unsigned int term, unsigned int RateOfInterest)
{

    static int CI;
    int SI;
    SI = (amount * RateOfInterest) / 100 ;
    CI += SI ;
    amount += SI ;
    term--;

    return term == 0 ? CI : compound_interest(amount, term, RateOfInterest) ;
}

int  celcius_to_fahrenheit(int temperature)
{

    return temperature + 273 ;
}

int fahrenheit_to_celcius(int temperature )
{

    return ((temperature - 32 )* 5 )/ 9 ;
}

int two_power(int N)
{

    return 2 << (N - 1 );
}

int even_or_odd(unsigned int number)
{

    return (number % 2 == 0 )  ? 0 : 1 ;

}

unsigned int leap_year(unsigned int year)
{

    return (((year % 4 )&& ((year % 400)) == 1) || (year % 100) != 0) ? 0 : 1 ;
}


