#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char a[30],b[30];
    int i;
    printf("Enter your first name: ");
    scanf("%s",&a);
    printf("Enter your second name: ");
    scanf("%s",&b);
    i=strcmp(a,b);
    if(i==0)
        printf("they are equal");
    else if(i==-1)
        printf("%s < %s",a,b);
    else
        printf("%s > %s",a,b);
    getch();
}
