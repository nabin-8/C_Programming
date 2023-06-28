
#include<stdio.h>
#include<conio.h>

int main(){

    system("color 0a");
    int i,j;
    for(i = 1; i<=5; i++){

        for (j =1;j<=i; j++){
            printf("%c",'A'-1 +j);
        }
        printf("\n");
    }

    return 0;

}
