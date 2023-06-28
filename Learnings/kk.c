#include<stdio.h>
#include<conio.h>

int main (){

    int a,b,c=1,l;
    system("color 0a");
    printf("Enter row\n");
    scanf("%d",&l);
    for(a=1;a<=l;a++){
        printf("\n");
        for(b=1;b<=a;b++){
            printf("%2d ",c);
            c++;
        }

    }
    getch();
    return 0;

}
