#include <stdio.h>


    struct student
    {
        int roll;
        char name[20];
        float marks;
        float address;
    };
    int main ()
    {
        struct student s[15];
        int i;
        float temp;
        for(i=0;i<5;i++)
        {
            printf("\n Enter Information about student%d", i+1);
            printf("\nName:\t");
            scanf("%s", s[i].name);
            printf("\nr=Roll:\t");
            scanf("%d",&s[i].roll);
            printf("\nMarks:\t");
            scanf("%f",&s[i].marks);
            printf("\nMarks:\t");


        }
}
