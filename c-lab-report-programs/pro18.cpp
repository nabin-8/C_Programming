#include<stdio.h>
 int main()
 {
 int n, i;
 float sum = 0;
 printf("Enter n:");
 scanf("%d", &n);
 for(i=1; i<=n; i=i+1)
 sum = sum + 1.0 /i;
 printf("sum = %f", sum);
 return 0;
  }
