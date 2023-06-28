#include<stdio.h>
#include<conio.h>

int main()
{
    system("color 0a");
    int i=5,j=2,k,l,m;
    for(i=1; i<=5; i--){
        for(j=i; j<=5; j++){
            printf("%c",'A'-1 +j);
        }
        printf("\n");
    }



    return 0;
}
