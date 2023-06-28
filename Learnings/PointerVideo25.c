#include <stdio.h>

// Pointer *
//&x is just a way to represent address of variable a.
//&x is treated as a constant &x is not a variable
        /*
                What is Pointer?
            A pointer ia a variable which contains address of
            another variable.

            int *p;
            p=&x;
            p points to x
        */

int main()
{
    int x=5;
    int *j; //*j is a pointer variable
    j=&x;
    printf("%d %d %d",j,&x,x);
    printf("\n %d %d %d",*j,*&x,&j);
    return 0;
}

/*
    1) Ordinary variable size is depend upon its data Type.
    2) Pointer variable is not depend upon its data type.
        Pointer store address of datatype or memory location
        that is always integer.
*/


