// write a progam to find power of a given number.

#include <stdio.h>
#include <math.h>
int main()
{
	float n, m, p;
	printf("Enter two numbers:\n");
	scanf("%f%f", &n, &m);
	p =pow(n,m);
	printf("Power=%f", p);
	return 0;
}
