#define NOT_FOUND 0
#define FOUND 1

struct _student_
{
    char stud_name[20];
    int roll_no;
    int marks;



};

typedef struct _student_ Student;

Student * insert_student_data( int N);  // return address of the structure allocated

void display_students_data(Student *arr, int N);

int search_by_roll_no(Student *arr, int N, int roll_no);

int search_by_name(Student *arr, int N, char str[]);

Student * search_highest_scored(Student *arr, int N);  // return ..address of the student to display

void display_by_name(Student *arr, int N, char ch);


//-------------------------------##-----------------------------------------------------------

struct _point_
{
    int x;
    int y;
    int weight;
};

typedef struct _point_ Point;

Point * insert_points(Point *p, int N );

void display_points(Point *p, int N);

void find_horiz_vertical_lines(Point *p, int N, int *horiz_lines, int *verti_lines);

Point * lowest_weight(Point *p, int N);


