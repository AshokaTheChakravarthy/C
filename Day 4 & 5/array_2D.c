
#include "array_2D.h"

int insert_elements(int row, int col, int arr[][col])
{

    int i,j;

    for(i=0; i< row ; i++)
    {

        for(j=0 ; j< row; j++)
        {
            arr[i][j] = rand() % 10 ;

        }
    }
    return 1;
}

int display_elements(int row , int col  ,int arr[][COL])
{

    int i, j ;
    for(i=0; i< row ; i++)
    {

        for(j=0 ; j< row; j++)
        {
           printf("%d \t", arr[i][j]);

        }
        printf("\n");
    }


}

int max_of_sum_of_columns(int row, int col, int arr[][col], int *max)
{
    int i,j, col_no;

    for(i=0; i< col; i++)
    {
        sum = 0;
        for(j=0; j< row; j++)
        {
            sum += arr[j][i];
            col_no = i;
        }
       if(*max < sum)
         *max = sum;

    }

    return col_no;

}
