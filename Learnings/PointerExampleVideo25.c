#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Two Numbers: \n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);

    return 0;
}

void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
