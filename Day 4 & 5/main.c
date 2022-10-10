#include <stdio.h>
#include <stdlib.h>
#include "array_2D.h"
#include <assert.h>

int main()
{

    int arr[ROW][COL], sum = 0;
    // testing for max of sum of columns
    assert(insert_elements(ROW, COL,arr ));

    assert(display_elements(ROW, COL, arr));
    assert( max_of_sum_of_columns( ROW, COL, arr ));
    sum =  max_of_sum_of_columns( ROW, COL, arr );


    return 0;
}
