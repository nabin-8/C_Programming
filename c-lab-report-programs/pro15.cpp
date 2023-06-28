#include <stdio.h>
int main()
{
int marks , total,i;
float average;
total = 0;
i=1;
while (i<=5)
{
printf("\nEnter matks of%d subject:",i);
scanf("%d",&marks);
total= total + marks;
i++;
}
average = (float)total/5;
printf("\n The sum =%d\t and Average of marks of five subjects is %f", total ,average);
return 0;
}

