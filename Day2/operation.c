
#include <stdio.h>
#include "operation.h"


int sum_of_digits(int number)
{

    int reminder = 0, sum = 0;

    while( number > 0 )
    {

        reminder = number % 10 ;   // finding reminder for eg: 12 %10 -> 2 thereby taking out the last digit
        sum += reminder;            // adding the taken out digits
        number /= 10;                   // dividing a number gives quotient eg: 12/10 -> 1

    }
    return sum;
}

int reverse_the_number(int number)
{

    int reminder, reversed_number = 0;

    while(number > ZERO )
    {

        reminder = number % TEN  ;
        reversed_number = reversed_number * TEN + reminder ;
        number /= TEN ;


    }
    return reversed_number;
}

int occurence_of_a_number(int number, int required_number)
{
    int reminder, counter = 0;
   // static int one, two, three, four, five, six, seven, eight, nine, zero1;

    while(number > 0)
    {

        reminder  = number % 10;

        if(reminder == required_number)
        {
            counter++;


       /* switch(reminder)
        {

            case 1 : one++;
                    break;
            case 2 : two++;
                    break;
            case 3 : three ++;
                    break;
            case 4 : four++;
                    break;
            case 5 : five++;
                    break;
            case 6 : six++;
                    break;
            case 7 : seven++;
                    break;
            case 8 : eight++;
                    break;
            case 9 : nine++;
                    break;
            default : zero1++;
                    break;
        }   */
        }
        number /= 10 ;
    }

    return counter;
}

int is_palindrome(int number)
{

    if(reverse_the_number(number) == number)   // if the given number is palindrome the return 0
            return ZERO;
    else
        return 1;  // if the given number is not palindrome the return 1

}

int is_prime(int number)
{
    int i;
    for(i=2 ; i<= number/2 ; i++)
    {
       if(number % i == 0 ) return 0 ;   // return 0 if it is not a prime eg: 2 is completely divides 12
    }
    return 1;     // if the number is not divisible by any then its a prime number
}

int first_n_primenumbers(int n)
{

    int   number = 2;
    while(n > ZERO)
    {


    if(is_prime(number))
    {
        n--;
        printf("%d\t", number);
    }
    number++;
    }
    return 0;
}

int sum_of_series(int n, int number)
{
    int sum = 0, series = 0;
    while( n > 0)
    {

        n--;
        series = series * 10 + number ;
        sum += series;
    }

    return sum;
}

int is_armstrong(int n)
{
    int sum =0 ,number = n, reminder =0 ;
    while( n > 0)
    {
        reminder = n % 10 ;
        sum = sum + CUBE(reminder) ;
        n /= 10 ;
    }
    if(sum == number) return 0;
    return 1;

}

/*int cube_of_a_number(int n)
{

    return (n * n * n) ;
}       */

int is_amicable(int m, int n)
{

    if(divisor_sum(m) == n && divisor_sum(n) == m)
        return 0;

    return 1;

}

int divisor_sum(int n)
{
    int i, sum = 0;
    for(i=1; i<= n/2; i++)

    {
      if(n % i == 0)
                sum = sum + i ;

    }
    return sum;
}

int charge_of_electricity_used(int units_used)
{

    int extra_units_used, charge;

    if(units_used< 0)
    {
        return INVALID;
    }
    if(units_used < 200)
    {
        charge = units_used * 1 ;
        return charge;

    }
    else if(units_used >200 && units_used < 300)
    {
        extra_units_used = units_used - 200 ;
        charge = extra_units_used * 1.5 + 200 * 1;
        return charge;
    }
    else if( units_used > 300)
    {
        extra_units_used = units_used - 300 ;
        charge = extra_units_used * 2 + 100 * 1.5 + 200 * 1 ;
        return charge;
    }
    return 0;
}

int menu_driven_for_arithmetic_operations(int a, int b)
{
    int option;
    printf("\nenter 1 to add numbers \n enter 2 to subtract numbers \n enter 3 to multiply numbers\n ");
    scanf("%d", &option);
    switch (option)
    {
        case 1 : return a + b;
        case 2 : if (a > b || a == b) return a - b ;
                 else return INVALID;
        case 3 : return a * b ;
        default : printf("choose a correct option");
                break;



    }
           return 1;

}

float volume_of_given_shape()
{

    int option;
    float side, length, breadth, radius, height;
    printf(" enter 1 to find volume of CUBE \n enter 2 to find volume of CUBOID \n enter 3 to find volume of SPHERE \n enter 4 to find volume of CYLINDER \n \
enter 5 to find volume of CONE \n");
scanf("%d", &option);

switch (option)
{

    case 1 : printf("enter length of side of a cube \n");
             scanf("%f", &side);
             return (side * side * side);
            // return VOLUME_CUBE(side);
    case 2 : printf(" enter length, breadth, height of a cuboid \n");
             scanf("%f%f%f", &length, &breadth, &height);
             return (length * breadth * height);
             //return VOLUME_CUBOID(length, breadth, height);
    case 3 : printf("enter radius of a sphere\n");
             scanf("%f", &radius);
            return ( PI * CUBE(radius) * 4 / 3);
            //return VOLUME_SPHERE(radius);
    case 4 : printf("enter radius of the base and height of the cylinder \n ");
             scanf("%f%f", &radius, &height);
             return (PI * SQUARE(radius) * height);
             //return VOLUME_CYLINDER(radius, height);
    case 5 : printf("enter radius of the base and height of the cone \n");
             scanf("%f%f", &radius, &height);
             return (PI * SQUARE(radius) * height /3);
            // return VOLUME_CONE(radius, height);
    default : printf("choose a valid option \n");
            break;


}
return 1;
}
