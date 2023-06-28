#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, sum,sum2,sum3,sum4;
    printf("Enter first Number\n");
    scanf("%d",&n1);
    printf("Enter Second Number\n");
    scanf("%d",&n2);
    sum = n1+n2;
    sum2 = n1-n2;
    sum3 = n1*n2;
    sum4 = n1/n2;

    printf("\nThe sum of %d + %d = %d",n1, n2, sum);
    printf("\nThe Subtraction of %d - %d = %d",n1, n2, sum2);
    printf("\nThe Multplication of %d * %d = %d",n1, n2, sum3);
    printf("\nThe Divission of %d / %d = %d",n1, n2, sum4);

}
