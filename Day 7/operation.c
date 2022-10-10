#include <stdio.h>
#include <stdlib.h>
#include "operation.h"


int * Store_data(int N)
{
    int *arr;
    int i;

    arr = (int *)malloc(sizeof(int) * N);
    for(i=0; i< N; i++)
        *(arr + i) = rand() % 5;

    return arr;


}

int * store_data_1(int N)
{
    int *arr;
    int i,num;
    arr = (int *) malloc(sizeof(int) *N);
    for(i=0; i<N ; i++)
    {
        printf("Enter a the %dth %d digit number\n", i+1, N);
        scanf("%d", &num);
        *(arr + i) = num;
    }
    return arr;
}

void display_data(int *arr, int N)
{
    int i;
    for(i=0; i< N; i++)
        printf("\n%d ", *(arr + i));


}

int search_element(int *arr, int N, int element)
{
    int i;
    for(i=0; i< N; i++){
        if(*(arr + i)== element) return 1;
    }
    return 0;
}

int min_max(int *arr, int size, int *max, int *min)
{
    int i;
    *max = *min = *arr;
    for(i=1; i<size; i++)
    {
        if(*(arr + i) > *max) *max = *(arr + i) ;
        if(*(arr + i) < *min ) *min = *(arr + i);
    }
    return 0;
}

int sum_array(int *arr, int size)
{
    int i, sum =0;
    for(i=0; i<size; i++)
        sum += *(arr + i);

    return sum;
}

int sum_even_odd(int *arr, int size, int *sum_even, int *sum_odd)
{
    int i;
    *sum_even = *sum_odd = 0;

    for(i=0; i<size; i++)
    {
        if(*(arr + i) % 2 == 0)
            *sum_even +=  *(arr + i);
        else
            *sum_odd +=  *(arr + i);
    }
    return 1;
}

int array_palindrome(int *arr, int size)
{
    int i,j;
    for(i=0, j=size-1; i <size ; i++,j--)
    {
        if(*(arr+i) != *(arr + j)) return 0;
    }
    return 1;

}

int * deallocate(int *arr)
{
    free(arr);
    return arr;
}
