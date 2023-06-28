#include <stdio.h>
int main()
{
int num;
printf("Integer occupies =>%d byts\n",sizeof(num));
printf("double constant occupies => %d byts\n",sizeof(16.18));
printf("long int data type qualifier occupies =>%d byts\n",sizeof(15L));
printf("float data type occupies =>%d byts\n",sizeof(15.3f));


return 0;
}

