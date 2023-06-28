#include <stdio.h>
int main ()
{
int nums[100], i,j,n,temp;
printf("\nHow many numbers you want to short?:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d", &nums[i]);
printf("\n The number before shorting are:\n");
for(i=0;i<n;i++)
printf("%d\t", nums[i]);
for(i=0; i<n -1; i++)
{ for(j=i+1;j<n;j++)
{ if(nums[i]>nums[j])
{
temp=nums[i];
nums[i]=nums[j];
nums[j]=temp;

}
}
}
printf("\n The number is ascending order are:\n");
for(i=0;i<n;i++)
printf("%d\t",nums[i]);


return 0;}

