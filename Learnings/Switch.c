#include <stdio.h>

int main(){

    char opt;
    while(1)
    {
        printf("\nEnter Number(1,2,3,4(exit): \n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        printf("Hellow a");
        break;
    case 2:
        printf("Hellow b");
        break;
    case 3:
        printf("Hellow c");
        break;
    case 4:
        exit(0);
    default:
        printf("Hello default");
    } //End of switch
    } //End of while loop



return 0;
}
