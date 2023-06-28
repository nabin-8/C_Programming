#include<stdio.h>

int main()
{
    // two dimantial array

    int a[3][4];
    int i,j;
    ptintf("Enter 12 Numbers:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
            scanf("%d",&a[i][j]);
        printf("\n");

    }
return 0;
}
