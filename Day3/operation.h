
#define ARRAY_SIZE 10
#define INVALID -1
#define START_INDEX 0
#define MERGE_ARRAY_SIZE 20
#define FOUND 1
#define NOT_FOUND 0
#define COL 5
#define ROW 5
#define SAME 1
#define NOT_SAME 0
#define SPARSE 1
#define NOT_SPARSE 0

int insert_elements(int arr[], int size);

int display_elements(int arr[], int size);

int ascending_order(int arr[], int size);

int descending_order(int arr[], int size);

int max_and_min(int arr[], int size, int *, int * );

int delete_element(int arr[],int size, int );

int delete_duplicate(int arr[], int size);

int merge_arrays(int arr[], int size, int arr1[], int size1, int arr2[], int size2);

int set_union(int arr[], int size, int arr1[], int size1, int arr2[], int size2);


int max_of_sizes(int size1, int size2);

int linear_search(int arr[],int size, int number);

int SOP_consequetive_elements(int arr[],int size, int *sum);

int finding_string_length(char str[], int string_length);

int scaning_a_character(char str[], char character);

int display_string(char str[], int str_length);

int search(int arr[], int size, int element);

int insert(int arr[], int index, int data);

int set_intersection(int arr[], int size, int arr1[], int size1, int arr2[], int size2);

int A_B(int arr[], int size, int arr1[], int size1, int arr2[], int size2);

int B_A(int arr[], int size, int arr1[], int size1, int arr2[], int size2);

int construct_matrix(int row, int col,int arr[][COL]);

int display_matrix(int row, int col, int arr[][col]);

int construct_matrix2(int row, int col,int arr[][col]);

int add_matrices(int row, int col, int a[][col], int b[][col], int c[][col]);

int compare_matrices(int row, int col, int a[][col], int b[][col]);

int sparse_matrix(int row, int col, int a[][col]);  // number of zero elements are greater than non zero elements

