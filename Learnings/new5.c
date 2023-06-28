#include<stdio.h>


void main(){

    printf("hello\n");
    int a ;
    short b;
    double c;
    int* ptr;
    char d;
    ptr =&a;
    printf("%d\n", sizeof((a)));
    printf("%d\n", sizeof((b)));
    printf("%d\n", sizeof((c)));
    printf("%u\n",&d);
    printf("%d\n",a);
    printf("%d\n",*ptr);

    b=10;
    c =(a==1)? 20:30;
    printf("%d", c);



}
