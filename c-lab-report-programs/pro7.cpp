#include <stdio.h>
int main()
{
int sec, mil, hr, rsec;
printf("Enter the time in second\n");
scanf("%d",&sec);
hr =sec/3600;
rsec =sec%3600;
mil=rsec/60;
sec =rsec%60;
printf("\n %d hour, %d Minutes, %d Seconds", hr,mil,sec);

return 0;
}
