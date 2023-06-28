#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp =fopen("C:\\new\\test2.txt", "w+");
    if(fp==NULL)
    {
        printf("Error opening file");
        return(1);
    }
    printf("Starting Writing \n");
    while((ch=getchar())!= '\n')
    {
        fputc(ch,fp);
    }
    printf("File written");
    fclose(fp);
    return 0;
}
