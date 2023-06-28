
#include<stdio.h>

int main(){

    int n, d, s=0;
    int temp;

    printf("Enter number\n");
    scanf("%d",& n);
    temp = n;
    while(n!=0)
    {
        d =n% 10;
        s += d*d*d;
        n/=10;

    }
    if(temp ==s)
        printf("\n armstrong number");
    else
    printf("\nnotarmstrong number");

    return 0;


}
