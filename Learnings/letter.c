#include<stdio.h>
#include<conio.h>
void main()
{
    system("color 0a");
    int i, j,n;
    for(i=1;i<=5;i++)
    { n=65;
        for(j=1;j<=i;j++)
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
}
