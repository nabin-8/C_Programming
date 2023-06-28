#include<stdio.h>

int main()
{
    /*      Array
        1).Array ia a linear collection of similar elements.
        2).Array is also known as subscript variable.

    */
    // Lets take an example to understand array
    // Solve this question
    /*
        Write a program to calculate average of 100 numbers.
        How many variables you define 100?
        Its very difficult to define 100 variables.
        so array can solve this problem here how ||
    */

    //int a[100]; We decleare 100 variable
    // If we need 10000 variables here is how
    // int b[10000];

    int a[8],i,sum=0;
    float avg,per;
    printf(":~~~~~~~~~~~~~~~~~~~~~~~~~:\n");
    printf("Enter 8 marks:\n");
    for(i=1;i<=8;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=8;i++)
        sum =sum+a[i];
    avg=sum/8.0;
    per=((float)sum/800)*100;
    printf("\nSum is %d",sum);
    printf("\nAverage is %f",avg);
    printf("\nYour Marks in Percentage is:%f",per);
    printf("\n");




    return 0;
}
