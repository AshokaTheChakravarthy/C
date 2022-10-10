#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "operation.h"

int main()
{
    Student *arr;
    char str[] = "Ashoka";
     Student *search;

    Point *p;
    int horiz, verti;
    Point *min_weight;



   /* arr =  insert_student_data( 3);

    display_students_data(arr, 3);

    assert(search_by_roll_no(arr, 3, 2) == 1);

    assert(search_by_name(arr, 3, str)== 1);

    search = search_highest_scored(arr, 3);
    display_students_data(search, 1);

    display_by_name(arr, 3, 'A');

    free(arr);
    */

    p = insert_points(p, 5);
    display_points(p, 5);

    // assuming all points are connected, finding out horizontal and vertical lines

    find_horiz_vertical_lines(p, 5, &horiz, &verti);
    printf("horizontal lines : %d\t Vertical Lines : %d\n", horiz, verti);

    min_weight = lowest_weight(p, 5);
    display_points(min_weight, 1);



    return 0;
}
