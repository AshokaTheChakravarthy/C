#include <stdio.h>
#include "operation.h"

int insert_elements(int arr[], int size)
{

    int i;
    if(size <= 0 ) return INVALID;
    for(i = 0; i< size ; i++)
        arr[i] = rand() % 100 ;

    return 1;

}

int display_elements(int arr[], int size)
{

    int i;
    if(size <= 0) return INVALID ;
    for(i=0; i< size ; i++) printf("%d\t", arr[i]);
    printf("\n");
    return 1;
}

int descending_order(int arr[], int size)
{

    int i,j , temp;


    if(size <= 0) return INVALID ;  // check the size of the array not equal to zero
    printf("\n");
    for(i=0; i< size ; i++)        // compare each element with the below elements
    {
       for(j = i+1 ; j < size ; j++)
       {

        if(arr[j] > arr[i])        // if arr[1] > arr[0]  then swap
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
       }
    }

    return 1;

}

int ascending_order(int arr[], int size)
{

    int i,j , temp;


    if(size <= 0) return INVALID ;  // check the size of the array not equal to zero
    printf("\n");
    for(i=0; i< size ; i++)        // compare each element with the below elements
    {
       for(j = i+1 ; j < size ; j++)
       {

        if(arr[j] < arr[i])        // if arr[1] < arr[0]  then swap
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
       }
    }

    return 1;

}


// to find max  and min in an array

int max_and_min(int arr[], int size, int *max, int *min )
{
    int i ;
    *max = *min = arr[START_INDEX];
    if(size <= 0) return INVALID ;

    for(i=1 ; i< size; i++)
    {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min ) *min = arr[i];


    }
    return 1;

}

// to delete the specific element

int delete_element(int arr[], int size , int element_to_be_deleted)
{

    int i ;
     for(i=0 ; i< size ; i++)
     {
         if(arr[i] == element_to_be_deleted) arr[i] = 0 ;
     }
    return 1;
}

// to delete the repeated elements

int delete_duplicate(int arr[], int size)
{

    int i ,j , k;
    for(i=0; i< size ; i++)
    {
        for(j = i+1 ; j< size ; j++ )
        {
            if(arr[i] == arr[j])        // comparing the adjacent elements  if equal then
            {
                for(k=j ; k < size ; k++)  //replace the next elements by one position
                    arr[k] = arr[k+1];
                size--;                     // since one duplicate element is removed,the size reduces, so reduce the size so to avoid garbage value to
                                            // enter in the last array elements
            }
        }
    }
   return size;
}

// merging arrays
/*1. make sure valid arrays are passed
  2. make sure size of new array is greater than or equal to the sum of lengths of two arrays



*/

int merge_arrays(int array1[],int size_1, int array2[], int size_2, int new_array[], int size_3)
{
    int i, j, k, n;

    if(size_1 <= 0 || size_2 <= 0 || size_3 <= 0)
        return INVALID;

    if(size_3 < (size_1 + size_2))
        return INVALID;
    for(i=0; i < size_1 ; i++)
    {
        new_array[i] = array1[i];      // copy first array into new array

    }
    n = i;
    for(j = i, k = 0 ; j< n + size_2 ; j++ , k++)
    {
        new_array[j] = array2[k] ;                  // continue copying from the latest index position
    }
    return 1;
}

// to find union of a set

int set_union(int array1[], int size_1 , int array2[], int size_2, int new_array[], int size_3 )
{
        merge_arrays(array1, size_1 , array2, size_2,  new_array, size_3 );      // merge the given arrays
        size_3 = delete_duplicate( new_array, size_3);                          // delete the repeated elements

        return size_3;

}

 /*  int set_intersection(int arr[], int size, int arr1[], int size1, int arr2[], int size2)
{

    int i, max, j, k = 0, l;
    if(size1 <= 0 || size2<= 0 || size<= 0) return INVALID;

  // max =  max_of_sizes(size1, size1);
    size = delete_duplicate(arr, size);
    size1 = delete_duplicate(arr1, size1 );

    for(i = 0; i < size; i++ )
    {
        for(j=0; j< size1 ; j++ )
        {
            for(l = 0 ; l< k ; l++)
            {
                if(arr[l] == arr2[l] )  break;
            }

            if(arr[i] == arr1[i])
            {
                arr2[k] = arr[i];  // this can be written as arr2[k++] = arr[i]
                k++;
            }
        }
    }
    printf("This is intersectioned elements\n");
    size2 = k;

    return size2;
}
 */
int max_of_sizes(int size1, int size2)
{

    if(size1 >= size2) return size1;
    else return size2;
}

int linear_search(int arr[], int size, int number)
{

    int i,j;
    for(i = 0 ;i < size ; i++)
    {
        if(arr[i] == number)  return FOUND;
    }
    return NOT_FOUND;
}

int SOP_consequetive_elements(int arr[],int size, int *sum )
{
    int i;
    for(i=0; i< size - 1 ; i++)   *sum += arr[i] * arr[i+1] ;

    return 1;

}

int finding_string_length(char str[], int string_length)
{
     int i = 0;
     string_length = 0;
     while(str[i] != NULL)
     {
         i++;
         string_length++;
     }
    return string_length;
}

int scaning_a_character(char str[], char character)
{
        int i=0, flag = 0;
        while(str[i] != NULL)
        {
            if(str[i] == character) flag = 1;
            if(str[i] > 96 && str[i] < 123) str[i] -= 32;
            i++;
        }

    if(flag == 1) return FOUND;
    return NOT_FOUND;
}
int display_string(char str[], int str_length)
{    int i = 0;
    while(str[i] != NULL)
    {
        printf("%c", str[i]);

        i++;

   }
   return 1;
}

int rev_string(char str[], char rev_str[])
{

    int i = 0, string_length;
    string_length = strlen(str);
    while(str[i] != NULL)
    {
       rev_str[string_length--] = str[i++];

    }
    return i-1;
}


int search(int arr[], int size, int element)
{
        int i;
    for(i=0; i< size; i++)
    {
        if(element == arr[i])
            return 1;
    }
    return 0;
}

int insert(int arr[], int index, int data )
{

    arr[index] = data ;
    return 1;
}

int set_intersection(int arr[], int size, int arr1[], int size1, int arr2[], int size2)
{
    int k = 0,i;
    for(i=0; i< size; i++){
        if(search(arr1, size1, arr[i]) && (!(search(arr2, k, arr[i]))))
        insert(arr2, k++, arr[i] );

    }
    return k;

}

int A_B(int arr[], int size, int arr1[], int size1, int arr2[], int size2)
{
    int i, k = 0;
    for(i = 0; i< size ; i++)
    {
        if(!search(arr1, size1, arr[i]))
            arr2[k++] = arr[i];
    }
 return k;
}

int B_A(int arr[], int size, int arr1[], int size1, int arr2[], int size2)
{
    int i, k = 0;
    for(i = 0; i< size1 ; i++)
    {
        if(!search(arr, size, arr1[i]))
            arr2[k++] = arr1[i];
    }
 return k;
}

int construct_matrix(int row, int col,int arr[][col])
{
    int i,j, k=0;
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        arr[i][j] = i + j ;
    }

 return 1;
}

int construct_matrix2(int row, int col,int arr[][col])
{
    int i,j, k=0;
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        arr[i][j] = i + j + 1 ;
    }

 return 1;
}
int display_matrix(int row, int col, int arr[][col])
{
    int i,j;
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
       printf(" %d " ,arr[i][j] );
       printf("\n");
    }
    return 1;
}

int add_matrices(int row, int col, int a[][col], int b[][col], int c[][col])
{
    int i,j;
     for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
            c[i][j] = a[i][j] + b[i][j];
    }

 return 1;
}

int compare_matrices(int row, int col, int a[][col], int b[][col])
{
int i,j;
     for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            if( a[i][j] != b[i][j]) return NOT_SAME;
        }
    }
    return SAME;
}

int sparse_matrix(int row, int col, int a[][col])
{
    int i,j, count = 0;
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(a[i][j] == 0)
                count++;
        }
    }
    if(count > ((row * col)/2)) return SPARSE;
return NOT_SPARSE;

}
