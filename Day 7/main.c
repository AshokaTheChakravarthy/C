#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "operation.h"

int main()
{
    int *arr;
    int min, max;
    int sum_even, sum_odd;
    int *palindrome;

    arr = Store_data(10);
    display_data(arr, 10);
    assert(search_element(arr, 10, 3) == 1);

    min_max(arr, 10, &max, &min);
    assert(max == 4);
    assert(min == 0);

    assert(sum_array(arr, 10) == 27 );

    sum_even_odd(arr, 10, &sum_even, &sum_odd);
    assert(sum_even == 20);
    assert(sum_odd == 7);

    palindrome = store_data_1(5);
    assert(array_palindrome(palindrome, 5));

    arr = deallocate(arr);
    palindrome = deallocate(palindrome);
    return 0;
}
