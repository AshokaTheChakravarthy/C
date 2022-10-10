
struct _add_
{
	int a;
	int b;
	int sum;

};



typedef struct _add_ Add;

Add insert(int a, int b);

Add add1(Add );

struct _students_
{
	int roll_no;
	char name[10];
	int age;
	int marks;


};

typedef struct _students_ Student ;

Student insert_student_details(int roll_no, char std_name[], int age, int marks);
void insert_student_details_array(Student  stud[], int size);

int display_student_details(Student stud[], int size);


struct _complex_number_
{

    int real;
    int imag;
};


typedef struct _complex_number_ Complex;

/*
void insert_complex(Complex cmp[]);

void display_complex(Complex cmp[]);

Complex add_complex(Complex cmp[], Complex Sum);

Complex diff_complex(Complex cmp[], Complex diff);

Complex multiply_complex(Complex cmp[], Complex multiply);
*/
//------------------------------------##-----------------------------------------
Complex ad1(Complex complex_1, Complex complex_2, Complex Sum);

Complex insert_complex_1(Complex cmp);

void display_complex_1(Complex cmp);

Complex diff_complex_1(Complex complex_1, Complex complex_2, Complex diff);

Complex multiply_complex_1(Complex complex_1, Complex complex_2, Complex multiply);


//------------------------------------------##---------------------------------


struct _item_
{
    char item_name[20];
    int price;
    int quantity;
    int subtotal;
    int Total;
    int discount;

};

typedef struct _item_ Item;

//char  item_name(int i, int *length);

int item_price(int i);

void insert_items(Item It[], int total_items);

void display_items(Item It[], int total_items);

void cart(Item It[],int total_items);

Item bill_desk(Item It[], int total_items, Item t);


void display_total(Item t);
Item discount(Item t);

//-----------------------------------------##--------------------------------------------
