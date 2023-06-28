#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   char chr[20];
   FILE *fptr;

   fptr = fopen("C:\\new\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter num: ");
   scanf("%d",&num);


   fprintf(fptr,"%d",num);
   printf("Enter Your Name: ");
   scanf("%c",&chr);
   fprintf(fptr,"%c",chr);

   fclose(fptr);

   return 0;
}
