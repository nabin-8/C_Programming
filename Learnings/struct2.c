#include <stdio.h>

struct book
{
    char name[20];
    int pages;
    float price;
};

int main()
{
    struct book b[2], *bptr;
    float temp;
    bptr=b;
    for(bptr=b;bptr<b+2;bptr++)
    {
        printf("Enter name:\t");
        scanf("%s",bptr->name);
        printf("\n Enter no. of pages:\t");
        scanf("%d",bptr->pages);
        printf("Enter the price:\t");
        scanf("%f",&temp);
        bptr->price=temp;

        }
    printf("\n Name\t\tNo. of pages\tprice\n");
    for(bptr=b;bptr<b+2;bptr++)
    {
        printf("\n%s\t\t%d\t\t%f\n", bptr->name,bptr->pages,bptr->price);
        printf("%s\t\t%d\t\t%f",(*bptr).name, (*bptr).pages, (*bptr).price);
    }

    return 0;

}

