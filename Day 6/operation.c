#include <stdio.h>
#include <string.h>
#include "operation.h"


Add insert(int a, int b)
{
	Add local_add;
	local_add.a = a;
	local_add.b = b;

	return local_add;
}
Add add1(Add  local_add)
{
	local_add.sum = local_add.a + local_add.b ;
	return local_add;
}


Student insert_student_details(int roll_no, char std_name[], int age, int marks)
{
	Student stud;

	stud.roll_no = roll_no;
	strcpy(stud.name, std_name);
	stud.age = age;
	stud.marks = marks;

	return stud;

}

void insert_student_details_array(Student stud[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		stud[i].roll_no = 1001 ;
		strcpy(stud[i].name, "Ashoka");
		stud[i].age  = 23;
		stud[i].marks = 70;
	}


}

int display_student_details(Student stud[], int size)
{ 	int i;
	for(i = 0; i< size; i++)
	{
		printf( "student roll no : %d \
			Student name : %s \
			Student age : %d\
			Student marks : %d \n", stud[i].roll_no, stud[i].name, stud[i].age, stud[i].marks);
	}
	return 1;
}


/*
void insert_complex(Complex cmp[])
{
int    i=0;
    cmp[i].real = 2;
    cmp[i].imag = 3;
    cmp[i+1].real = 10;
    cmp[i+1].imag = 12;



}

void display_complex(Complex cmp[])
{
  int  i=0;
    printf(" %d + i %d ", cmp[i].real, cmp[i].imag);
    printf(" %d + i %d ", cmp[i+1].real, cmp[i+1].imag);

}

Complex add_complex(Complex cmp[], Complex Sum)
{
   int i=0;
   int  sum_real, sum_imag;
   Sum.real = cmp[i].real + cmp[i+1].real ;
   Sum.imag = cmp[i].imag + cmp[i+1].imag;
 return Sum;

}

Complex diff_complex(Complex cmp[], Complex diff)
{
    int i=0;

    diff.real = cmp[i].real - cmp[i+1].real;
    diff.imag = cmp[i].imag - cmp[i+1].imag;
    return diff;

}

Complex multiply_complex(Complex cmp[], Complex multiply)
{
    int i=0, temp;

    multiply.real = cmp[i].real * cmp[i+1].real - cmp[i].imag *cmp[i+1].imag ;
    multiply.imag = cmp[i].real * cmp[i+1].imag + cmp[i].imag * cmp[i+1].real;

    return multiply;

}
*/

// ----------------------------------------##-----------------------------------------------

Complex  insert_complex_1(Complex cmp)
{
    cmp.real = 2;   // input can be taken from the user
    cmp.imag = 3;
   return cmp;

}

void display_complex_1(Complex cmp)
{
     printf(" %d +i %d ", cmp.real, cmp.imag);


}
Complex ad1(Complex complex_1, Complex complex_2, Complex Sum)
{
    Sum.real = complex_1.real + complex_2.real;
    Sum.imag = complex_1.imag + complex_2.imag;
    return Sum;

}

Complex diff_complex_1(Complex complex_1, Complex complex_2, Complex diff)
{
    diff.real = complex_1.real - complex_2.real;
    diff.imag = complex_1.imag - complex_2.imag;
    return diff;

}

Complex multiply_complex_1(Complex complex_1, Complex complex_2, Complex multiply)
{
     multiply.real = complex_1.real * complex_2.real - complex_2.imag * complex_1.imag ;
     multiply.imag = complex_1.imag * complex_2.real + complex_1.real * complex_2.imag;
     return multiply;

}

//------------------------------------------------##-----------------------------------------------

/* char * item_name(int i, int *length)
{
    char str[20];
    printf("enter %dth item name\n", i);
    gets(str);
    return str;

}
*/

int item_price(int i)
{
    int price;
    printf("enter %dth item price\n", i);
    scanf("%d", &price);
    return price;
}

void insert_items(Item It[], int total_items)
{
    int i;
    char str[20];

    for(i=0; i< total_items; i++)
    {
        printf("enter %dth item name\n", i);
        scanf("%s", str);
        strcpy( It[i].item_name ,str );
       It[i].price = item_price(i);                       // per kg
    }


}



void display_items(Item It[], int total_items)
{
    int i;
    printf("Item Name\tPrice\n ");
    for(i=0; i< total_items; i++)
    {
        printf("%s\t\t%d\n", It[i].item_name, It[i].price);
    }

}
void cart(Item It[], int total_items)
{
    int i, quantity;
    printf("Choose the item to put into billdesk 0 , 1, 2, 3, 4\n");
    scanf("%d", &i);
    if(i>=0 && i<total_items)
    {
    printf("Enter the quantity of %s Item taken in KG\n", It[i].item_name);
    scanf("%d", &quantity);
    It[i].quantity = quantity;
    return 0;
    }
    printf("Choose the correct Item\n");
    return 0;

}

void cart1(Item It[], int total_items, int index, int quantity)
{
   if(index > total_items) printf("Item is not available\n");
    It[index].quantity = quantity;
}

void display_cart(Item It[], int total_items)
{
    int i, subtotal;
    printf(" Item Name\tPrice\tQuantity\tSubtotal\n");
    for(i=0; i<total_items; i++)
    {
        It[i].subtotal = It[i].price * It[i].quantity;
      printf("%s\t\t%d\t%d\t\t%d\n", It[i].item_name, It[i].price, It[i].quantity, It[i].subtotal  );
    }
}

Item bill_desk(Item It[], int total_items, Item t)
{
    int i=0;
    t.Total = 0;
    for(i = 0; i< total_items; i++)
    {
      t.Total  +=   It[i].subtotal ;
    }
    return t;
}

void display_total(Item t)
{
    printf("---------------------------------------------------------------------\n");
    printf("TOTAL : %d \n", t.Total);
    printf("\n");
    t = discount(t);
    printf("discount : - %d \n", t.discount );
    printf("---------------------------------------------------------------------\n");
    t.Total = t.Total - t.discount ;
    printf("GRAND TOTAL : %d \n", t.Total);

}

Item discount(Item t)
{
    if(t.Total < 1000) t.discount = t.Total * 0.05;
    else if(t.Total <5000) t.discount = t.Total * 0.1 ;
    else t.discount = t.Total * 0.15 ;

    return t;
}


//------------------------------##----------------------------------------------------------


