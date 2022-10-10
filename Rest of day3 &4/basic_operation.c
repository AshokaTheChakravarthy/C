#include <stdio.h>
#include <math.h>
#include "basic_operation.h"


int fibanocci(int n)
{
    int next, first = 0, second = 0, third = 1;
    printf("%d  %d  %d  ", first, second, third);
    while(next < n)
    {
        next = first + second + third ;
        first = second;
        second = third ;
        third = next;
        printf("%d  ", next);
    }
    return 1;

}

int print_pattern(int row, int col)
{
    int i,j, k;
    for(i=row; i > 0 ; i--)
    {

        for(j = row ; j > i;j-- ) printf(" ");
        for(k=1; k<=i; k++) printf("*");
        printf("\n");

    }
    return 1;

}

int print_pattern2(int row, int col)
{
    int i,j, k;
    for(i=0; i < row ; i++)
    {

        for(j = 0 ; j < i;j++ ) printf(" ");
        for(k=1; k<=col - i; k++) printf("*");
        printf("\n");

    }
    return 1;

}

int sum_of_two_seven(int n)
{
    int i, a = 11, sum, rem, temp;
    for(i=11; i< n; i++)
    {   sum = 0;
        temp = a;   // since a gets changed in the below lines assign to temp
        while(a > 0)
        {
           rem = a % 10;
           sum += rem;
           a /= 10;
        }
        if(7 == sum)
            printf("%d ", temp);
       a = ++temp;                      // reassigning the incremented temp
    }
    return 1;
}

int power_of_number(int base, int exponent)
{
    int  power = 1;
    while(exponent > 0)
    {
        power *=base;
        --exponent;
    }
    return power;
}

float power_of_number_recursive(int base, int exponent)
{

    if(exponent == 0) return 1;
    else return (base * power_of_number_recursive(base, --exponent));
}

float factorial_recursive(int num)
{
    if(num  == 1) return 1;
    return (num * factorial_recursive( num - 1));

}

float evaluate_expression(float x, float exp, int n)
{
    float s =0;
    s = power_of_number_recursive(x,exp) / factorial_recursive(exp);  // integer divided by integer will give integer eg: 4/3 = 1 irrespective of the storing element
                                                                        // if s is of float type the s will store 1.000 not 1.333
    if(n == 0) return 0;                                               // for that reason the return type of power and factorial fn should be float
    else {
            exp = exp + 2 ;                                 // increment exponent by 2
    return (s + evaluate_expression(x, exp, --n));          // x + x^3 / 3! + ...
    }
}

int concat_int(int m, int n)
{
  /* int result;
   result = CONCATINATE_INTEGER(m,n);
   return result; */
   return CONCATINATE_INTEGER(m,n);
}

int square_number_using_macro(int n)
{
    return SQUARE(n);
}

float trigonometric_logical_operations(int choice)
{
    float num, x;
    int base, exponent;
   /* printf("enter 1 to find square root \n \
           enter 2 to find natural logx \n \
           enter 3 to find log10x \n \
           enter 4 to find power of a variable\n \
           enter 5 to find cos(x) \n \
           ");
    scanf("%d", &choice); */

    switch(choice)
    {
        case 1 : printf("enter the number to find square root\n");
                    scanf("%f", &num);
                   return sqrt(num);
        case 2: printf("enter the value to find natural log\n");
                scanf("%f", &x);
                return log(x);
        case 3 : printf("enter the value to find  log10x \n");
                    scanf("%f", &x);
                    return log10(x);
        case 4 : printf("enter base and exponent to find power\n");
                    scanf("%d%d", &base, &exponent);
                    return power_of_number_recursive(base, exponent);
        case 5 : printf("enter a value to find cos(x) \n");
                    scanf("%f", &x);
                    return cos(x);
        default: printf("enter a correct choice\n");
                    break;

    }
    return 1;
}
int binary_decimal(int binary)
{
    int decimal = 0, i = 0, rem;

    while(binary > 0)
    {
        rem  = binary % 10;
        binary /= 10;
        decimal += rem * power_of_number(2, i) ;
        i++;
    }

 return decimal;

}
