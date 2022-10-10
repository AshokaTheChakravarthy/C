#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operation.h"
Student * insert_student_data(int N)
{
    int i;
    Student *arr;
    char str[20];
    arr = (Student *) malloc(sizeof(Student) * N);

    for(i=0; i<N; i++)
    {
        printf("Enter %d student name\n", i+1);
        scanf("%s", (arr + i)->stud_name );
        printf("Enter %d student roll no\n", i+1);
        scanf("%d", &(arr + i)->roll_no );
        printf("Enter %d student marks\n", i+1);
        scanf("%d", &(arr + i)->marks);

    }
    return arr;


}

void display_students_data(Student *arr, int N)
{
    int i;
    printf("Student name\tRoll No\tmarks\n");
     for(i=0; i<N; i++)
     {

         printf("%s\t%d\t%d\n", (arr+i) -> stud_name, (arr+i) -> roll_no, (arr+i) -> marks);
     }

}

int search_by_roll_no(Student *arr, int N, int roll_no)
{
    int i;
    for(i=0; i<N; i++)
    {
        if(roll_no == (arr + i) -> roll_no ){
            display_students_data(arr + i, 1);
            return FOUND;
        }
    }
    return NOT_FOUND;

}
int search_by_name(Student *arr, int N, char str[])
{
    int i;
    for(i=0; i< N; i++)
    {
        if(!strcmp((arr + i) -> stud_name, str))
        { display_students_data( arr + i, 1);
            return FOUND;
        }
    }
    return NOT_FOUND;
}

Student * search_highest_scored(Student *arr, int N)
{
    int k = 0, i;
    int max;

    max = arr -> marks;
    for(i=1; i<N; i++)
    {
        if(max < (arr+i) -> marks )
        {
            max = (arr + i) -> marks ;
            k =i;
        }
    }
 return (arr + k);
}

void display_by_name(Student *arr, int N, char ch)
{
    int i;
    for(i=0; i< N; i++)
    {
        if((arr + i)-> stud_name[0] == ch)   // condition can be included for small letter and Big letter eg: ch + 32,  ch - 32
        {
            display_students_data((arr+i), 1);
        }
    }
}


//------------------------------------##------------------------------------------------------------

Point * insert_points(Point *p, int N )
{
    int i;
    p = (Point *) malloc(sizeof(Point) *N ) ;

    for(i = 0; i<N; i++)
    {
        printf("Enter point coordinates (x, y) and weight to be inserted");
        scanf("%d%d%d", &(p + i)->x, &(p + i)->y, &(p + i)->weight);

    }
    return p;
}

void display_points(Point *p, int N)
{
    int i;
    for(i=0; i< N; i++)
    {
        printf("Points are (%d , %d) weight %d\n", (p + i)->x, (p + i)->y, (p + i)->weight);
    }
}

void find_horiz_vertical_lines(Point *p, int N, int *horiz_lines, int *verti_lines)
{
    int i, j;
    *horiz_lines = *verti_lines = 0;
    for(i= 0; i< N; i++)
    {
       for(j=i+1; j<N; j++)
       {
        if(((p+i)->y == (p+j)->y )&& ((p+i)->x == (p + j)->x ))  // check if same point is repeated
            continue;
        if((p+i)->y == (p+j)->y)   // if y coordinates are equal then its a horizontal line
            (*horiz_lines)++;
        if((p+i)->x == (p + j)->x)    // if x coordinates are equal then its a vertical line
                (*verti_lines)++;

       }
    }
}

Point * lowest_weight(Point *p, int N)
{
    int i,k;
   int  min_weight = p->weight;
    for(i=1; i<N; i++)
    {
        if(min_weight > (p+i)->weight)
        {
            min_weight = (p+i)->weight;
            k=i;
        }
    }
    return p+k ;
}
