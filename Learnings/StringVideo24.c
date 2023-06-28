#include<stdio.h>

            //String

    /*
        1=> String ia a sequence of characters, terminated
            at null character.
        2=> String are handled in char array.
    */

    /*
        Inatilization char array during decleration
        char str[10]={'B','H','O','P','A','L'};
    */

int main()
{
    char str[11]={'N','B','I','N','A','C','H','A','R','Y','A'};
    int i;
    for(i=0;i<=10;i++)
        printf("%c",str[i]);
    return 0;
}
