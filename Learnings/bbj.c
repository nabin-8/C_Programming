#include<stdio.h>
#include<conio.h>

int main()
{
    system("color 0f");
    int i=5,j=2,k,l,m;
    for(i=6; i>=1; i--){
        for(j=i; j<=5; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d\n",i+j-1);

        }
        printf("\n");
    }
    return 0;
}
