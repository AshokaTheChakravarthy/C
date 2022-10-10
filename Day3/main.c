#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "operation.h"

int main()
{
    int array[ARRAY_SIZE];
    int max , min , new_size, set_union_size, set_intersection_size, sum ;
    int array1[ARRAY_SIZE] = {1, 2, 8, 3, 3, 4, 5, 7,6, 6} ;
    int array3[MERGE_ARRAY_SIZE];
    int array_inter_1[ARRAY_SIZE] = {1,2, 3, 4, 5, 6, 9, 10, 11, 12};
    int string_length;
    char str[ARRAY_SIZE] = "Sun" ;
    char str1[ARRAY_SIZE] = "Ashoka" ;
    char rev_str[ARRAY_SIZE];
    int a[ARRAY_SIZE][ARRAY_SIZE], b[ARRAY_SIZE][ARRAY_SIZE],c[ARRAY_SIZE][ARRAY_SIZE], d[ARRAY_SIZE];
    int cmp_a[ARRAY_SIZE][ARRAY_SIZE], cmp_b[ARRAY_SIZE][ARRAY_SIZE];
    int k;
    int sparse[ROW][COL] = {{0, 0, 0}, {1, 2, 3}, {0, 0 , 0}, {0, 0, 0}, {2, 3, 4}};

    // testing for insert array elements
    assert(insert_elements(array , ARRAY_SIZE));
    assert(insert_elements(array , 0) == INVALID);


    //testing for displaying the array elements
    assert(display_elements(array, ARRAY_SIZE));

    // testing for descending order arrangement
    assert(descending_order(array, ARRAY_SIZE));

    assert(display_elements(array, ARRAY_SIZE));

    // testing for ascending arrangement

    assert(ascending_order(array, ARRAY_SIZE));

   assert(display_elements(array, ARRAY_SIZE));

   //testing for finding max and min element in the array

   assert(max_and_min(array , ARRAY_SIZE, &max , &min ));

    assert(max == 78 );
    assert(min == 0);


    // testing to delete a element

 /* assert(delete_element(array, ARRAY_SIZE, 78));
   //  assert(display_elements(array, ARRAY_SIZE));

     // testing for delete duplicate



     new_size = delete_duplicate(array1, ARRAY_SIZE);
     assert(display_elements(array1, new_size));
     */

    //testing for merging arrays
     assert(merge_arrays(array, ARRAY_SIZE, array1, ARRAY_SIZE, array3, MERGE_ARRAY_SIZE));
     assert(display_elements(array3, MERGE_ARRAY_SIZE));

     // testing for set union

     set_union_size = set_union(array, ARRAY_SIZE, array1, ARRAY_SIZE, array3, MERGE_ARRAY_SIZE);
     assert(display_elements(array3, set_union_size));

    set_intersection_size = set_intersection(array_inter_1, ARRAY_SIZE, array1, ARRAY_SIZE, array3, 50);
     assert(display_elements(array3, set_intersection_size));
   //  assert(linear_search(array_inter_1, ARRAY_SIZE, 2) == 1);

      display_elements(array_inter_1, ARRAY_SIZE);
     assert(SOP_consequetive_elements( array_inter_1, ARRAY_SIZE, &sum));
     printf("%d", sum);

        // testing for finding string length
     assert(finding_string_length(str, string_length) == 3);

     // testing for scanning character
     assert(scaning_a_character(str1, 'k') == 1);
     display_string(str1, 5);

     // reverse a string
     string_length = rev_string(str1, rev_str);
     display_string(rev_str, string_length );

     // search an element in an array

     assert(search(array_inter_1, ARRAY_SIZE, 7)== 0);
    // testing set intersection
        k =    set_intersection(array1,ARRAY_SIZE, array_inter_1, ARRAY_SIZE, d, ARRAY_SIZE);
       display_elements(d, k);
       // testing A-B  .. .. elements in A not in B
       k = A_B(array1,ARRAY_SIZE, array_inter_1, ARRAY_SIZE, d, ARRAY_SIZE);
       display_elements(d, k);

       // testing B-A .. .. elements in B not in A

         k = B_A(array1,ARRAY_SIZE, array_inter_1, ARRAY_SIZE, d, ARRAY_SIZE);
       display_elements(d, k);

        // testing for constructing a matrix
        construct_matrix(ROW,COL, a);
        display_matrix(ROW, COL, a);

        construct_matrix2(ROW, COL, b);
        display_matrix(ROW, COL, b);

        // adding two matrices
        add_matrices(ROW, COL, a, b , c);
        display_matrix(ROW, COL, c);

        // testing for comparing two matrices
        construct_matrix(ROW,COL, a);
        construct_matrix(ROW,COL, b);

        assert(compare_matrices(ROW,COL, a,b) == SAME);

        // checking for matrix is sparse or not

        assert(sparse_matrix(ROW, COL, sparse) == SPARSE);
        assert(sparse_matrix(ROW, COL,c) == NOT_SPARSE);





    return 0;
}
