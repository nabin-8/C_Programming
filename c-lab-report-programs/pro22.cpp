#include <stdio.h>
int main ()
{

int i, sum;
int marks[5];
float average;
sum =0;
for(i=0; i<5;i++)
{
printf("Enter marks for subject %d: ",i+1);
scanf("%d", &marks[i]);

}
for(i=0; i<=5; i++)
{
sum =sum +marks[i];
}
average = sum/5.0;
printf("Average : %.2f", average);
return 0;}

