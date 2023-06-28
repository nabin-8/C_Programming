#include <stdio.h>
int main(){

    int i,j,lines;
    printf("How many Columns you want?");
    scanf("%d",&lines);
    for(j=1; j<=lines;j++){
    for(i=1; i<=lines;i++){
        if(i>=lines+1-j)
            printf("%d",i);
        else
            printf(" ");
    }
    printf("\n");
    }
return 0;
}
