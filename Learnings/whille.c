#include<stdio.h>

int main(){

    int n ,s=0,r,step;
    printf("Enter the number:\n");
    scanf("%d",& n);
    while(n>0){
        r=n%10;
        s = s+r;
        n/=10;
        step=step++;
    }


    printf("S of the degit: %d",s);

    return 0;


}
