#include<stdio.h>
#include<string.h>

void main(){

    char str1[20], str2[20];
    int i,j;
    printf("Enter a String");
    gets(str1);
    for(i=strlen(str1)-1, j=0,i>=0;i--,j++)
        str2[j]=str1[i];
    str2[j]='\0';
    if(strcamp(str1,str2)==0)
    printf("Palindrome");
    eles
    printf("Not Palindrome");

return 0;

}
