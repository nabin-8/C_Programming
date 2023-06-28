#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char str[11]={'N','A','B','I','N','A','C','H','A','R','Y','A'};
    int i;
    for(i=0;str[i];i++);
    printf("Length of your name is:%d",i);
    */

            //String Constant//String Literal
            // "NABINACHARYA"


   // char str[30];
   // printf("Enter Your name: \n");
    //scanf("%s",str);
    //printf("%s",str);


    /*
        i) Scanf is not capable to input multiple strings.
        ii) becase space, tab, new line character are derimites.
        iii) we will not use scanf for string input

        gets();

        gets()is capable to input multi word string.
    */

/*
    char str[30];
    printf("Enter your name: ");
    gets(str);

    printf("%s",str);

        gets();
        is not reliable to use because it access
        elligal memory access.
        now its solution is here-
  */

  /*
        fgets();

    We use fgets() function
    fgets(arrayname,arraysize,stdin)
  */

  char str[30];
    printf("Enter your name: ");
    fgets(str,30,stdin);

    printf("%s",str);


    /*
            string.h hedder file fro string

        int strlen(char*);          => Calculate length
        char* strcpy(char*,char*);  =>Copy
        char* strcat(char*,char*);  =>Concatinate
        char* strcmp(char*,char*);  =>comparision
    */

    /*
            Function call by passing string

        char str[20];
        fgets(str,20,stdin);
        f1(str);


        void f1(char s[])
        {

        }
    */

    /*
            Handling multiple string

            char s[4][10] ={'Nepal','Kathmandu','Hello'};
    */

    return 0;
}
