#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
    char address[50];
};

int main()
{
    struct student s[48], temp;
    int n,i,j;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name, roll, marks and address:\n");
        scanf("%s%d%f%s",&s[i].name,&s[i].roll, &s[i].marks,&s[i].address);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].marks<s[j].marks)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

            }
        }
    }
    printf("Name\tRollno\tmarks\tAddress\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%f\t%s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);

    }
    return 0;
}
