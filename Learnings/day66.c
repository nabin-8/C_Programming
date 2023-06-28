#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main ()
{
    struct Books Book1;
    struct Books Book2;

    //book specification 1
    strcpy(Book1.title, "C programming");
    strcpy(Book1.author, "Nuha Alliu");
    strcpy(Book1.subject, "C programming totorial");
    Book1.book_id = 6495407;

    //book specification 2
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Nabin Acharya");
    strcpy(Book2.subject, "Telecom Billing Totorial");
    Book2.book_id = 6495700;


    /* print Book1 info */
 printf( "Book 1 title : %s\n", Book1.title);
 printf( "Book 1 author : %s\n", Book1.author);
 printf( "Book 1 subject : %s\n", Book1.subject);
 printf( "Book 1 book_id : %d\n", Book1.book_id);

 /* print Book2 info */
 printf( "Book 2 title : %s\n", Book2.title);
 printf( "Book 2 author : %s\n", Book2.author);
 printf( "Book 2 subject : %s\n", Book2.subject);
 printf( "Book 2 book_id : %d\n", Book2.book_id);

printf("/n The size of structure is:- %d",sizeof(Book1));
 return 0;

}
