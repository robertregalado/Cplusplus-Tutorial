#include<stdio.h>

int main(){
    int i = 76;
    int j = 786;
    printf("The address of i is %u\n",&i);
    printf("The address of j is %u\n",&j);
    printf("============================\n");
    printf("The value of i is %d\n",*(&i));
    printf("The value of j is %d\n",*(&j));

    // Declaring a pointer
    int r = 43;
    int *o = &r;
    printf("The value of r is %d: \n", *o);
    printf("The address of r is %u: \n", o);
    printf("The address of o is %u: \n", &o);
    printf("The value of o is %d: \n", *(&o));
    return 0;

}