#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "basic_operation.h"

int main()
{
    int power,result;
    float sum;
    // testing for fibanocci series
    assert(fibanocci(15));
    printf("\n");

    // testing for printing pattern
    assert(print_pattern2(ROW, COL));

   //testing for sum of two digits is 7 eg: 43, 61
    sum_of_two_seven(100);

    // testing for power of a number like 2^3 , 4^6 base ^ exponent
    assert(power_of_number(2,3) == 8);

    // power of a number using recursive function
  /* power =  power_of_number_recursive(2,3);
   printf("%d", power);
   assert(power == 8); */
   assert(power_of_number_recursive(2,3) == 8);

   // testing for factorial of a number using recursive fn

    assert(factorial_recursive(5) == 120);

   sum =  evaluate_expression(3,EXP,4);
    printf("%f", sum);

    // testing for concatination of two integers using macro
   assert(concat_int(2,3));

    // testing for square of a number using macro
    assert(square_number_using_macro(4) == 16);

    //result = trigonometric_logical_operations(1);

   // printf("%f ", result);

   // assert(binary_decimal(1100) == 12);
   printf(" %d ", binary_decimal(1100));
    return 0;
}
