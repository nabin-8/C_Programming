#include <stdio.h>

int main()
{
int o;
printf("\nWhich of the website you visit the most?");
printf("\n Select 1 for FACEBOOK select 2 for Yahoo!, 3 for GOOGLE");
printf("\n1 =>FACEBOOK \n2 =>Yahoo! \n1 =>GOOGLE");
printf("\nEnter your Choice:");
scanf("%d", & o);
switch (o)
{
case 1 :
printf("\n You Use FACEBOOK");
break;

case 2 :
printf("\n You Use Yahoo!");
break;

case 3 :
printf("\n You Use Google");
break;

default:
printf("You Have entered an invalid option");
}

return 0;
}

