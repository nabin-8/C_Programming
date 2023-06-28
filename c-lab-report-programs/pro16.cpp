#include<stdio.h>
int main()
{
long int decnum,binnum,rev=0,q=1, rem, i =1;
printf("\n Enter decimal number:\t");
scanf("%Id", &decnum);
while(q!=0)
{
q= decnum / 2;
rem= decnum %2;
decnum = q;
rev = rev + rem*i;
i= i*10;
}
printf("\n The corresponding binary number is:%Id", rev);
return 0;
}
