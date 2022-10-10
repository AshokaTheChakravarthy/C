#include <assert.h>
#include "operation.h"
#include <stdio.h>

int main()
{
        int answer;
        float volume;

    // test for sum of digits

    assert(sum_of_digits(12345) == 15 );
    assert(sum_of_digits(23) == 5 );

    // test for reversed number
    assert(reverse_the_number(12345) == 54321);

    // test for occurrence of a number

    assert(occurence_of_a_number(12233333, 3) == 5);


    // test for a given number palindrome or not

    assert(is_palindrome(1223) == 1);
    assert(is_palindrome(1221) == 0);

    // test for first n prime numbers
    assert(first_n_primenumbers(7) == 0);

    // test for sum of n numbers
    assert(sum_of_series(4,2) == 2468);

    //test for number is armstrong or not
    assert(is_armstrong(153) == 0);
    assert(is_armstrong(143) == 1);

    // test for numbers amicable or not

    assert(is_amicable(220, 284) == 0);

    // test for elctricity bill
    assert(charge_of_electricity_used(325) == 400);

 //   answer = menu_driven_for_arithmetic_operations(2, 3);
  //  printf("%d \n", answer);

    volume = volume_of_given_shape();
    printf(" VOLUME is %f ", volume );

    return 0;
}


