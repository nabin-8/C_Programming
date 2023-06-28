// program to find simple intrest

#include <stdio.h>
int main()
{
	float p, r, t, i;
	printf("Enter principle, time, and rate:\n");
	scanf("%f%f%f", &p, &t, &r);
	i =(p*t*r)/100;
	printf("Interest =%f", i);
return 0;
}
