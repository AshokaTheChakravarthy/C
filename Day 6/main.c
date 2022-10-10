#include <stdio.h>
#include "operation.h"

int main()
{
	Add display, sum;
	Student std[10];
	Complex Sum, cmp[2], diff, multiply, complex_1, complex_2;
    Item It[5], t;



	display = insert(2,3);
	sum = add1(display);
	printf("%d %d ", display.a, display.b);
	printf("%d ", sum.sum);

	// insert student details
	insert_student_details_array(std, 10);
	display_student_details(std, 10);

    //add difference and multiplication of complex number
 /*   insert_complex(cmp);
    display_complex( cmp);
	Sum = add_complex(cmp, Sum);
	printf(" %d + i %d ", Sum.real, Sum.imag);

	diff = diff_complex(cmp, diff);
	printf(" %d +i %d ", diff.real, diff.imag);

    multiply = multiply_complex(cmp, multiply);
    printf(" %d + i %d ", multiply.real, multiply.imag);    */

    //add difference and multiplication of complex number
//---------------------------##------------------------------------
   complex_1 = insert_complex_1(complex_1 );
    display_complex_1(complex_1);

    complex_2.real = 4;
    complex_2.imag = 5;

    Sum = ad1(complex_1, complex_2, Sum);
    display_complex_1(Sum);

    diff = diff_complex_1(complex_1, complex_2, diff);
    display_complex_1(diff);

    multiply = multiply_complex_1(complex_1, complex_2, multiply);
    display_complex_1(multiply);

    //-------------------------------------------------------##-----------------------------------------

    insert_items(It, 5);
    display_items(It, 5);

  /*  cart(It, 5);
    cart(It, 5);
    cart(It, 5);
    cart(It, 5);
    cart(It, 5);
  */

    cart1(It, 5,0, 10);
    cart1(It, 5, 1, 12);
    cart1(It, 5, 2, 5);
    cart1(It, 5, 3, 10);
    cart1(It, 5, 4, 5);

    display_cart(It, 5);

    t = bill_desk(It, 5, t);
    display_total(t);

    //-------------------------------##--------------------------------------------------------------



	return 0;
}
