#include<stdio.h>
#include<conio.h>

void main(){
    int a=0, b=1, c, i, n;
    printf("\n enter series:");
    scanf("%d", &n);
    printf("\n Fibonacci series:");
    printf("%d %d\t", a,b);

    for (i =0; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t", c);
    }

    getch();


}
