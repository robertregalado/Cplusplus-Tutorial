#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 5;
    int b = 7;
    printf("Value of a and b before swap: %d and %d\n", a, b);
    swap(&a, &b);
    printf("Value of a and b after swap: %d and %d\n", a, b);
    return 0;
}

void swap(int* aptr, int* bptr){
    // print("Value of a and b before swap: %d and %d\n", a, b);
    int temp;
    temp = *aptr; // a = 5, temp = 5, b = 7
    *aptr = *bptr; // a = 7, temp = 5, b = 7
    *bptr = temp; // a = 7, temp = 5, b = 5
    // print("Value of a and b after swap: %d and %d\n", a, b);
}
