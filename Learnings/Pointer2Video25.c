#include <stdio.h>

int main()
{
    //Extended Concept of pointer
        //* is level of pointer

        /*
            int x=5;
            int *p,**q,***r;
            p=&x;
            q=&p;
            r=&q;

            pointer can lower level address only.
        */


            //Pointers Arithmetic

            /*
                int a,b,*p,*q;
                p=&a;
                q=&b;

                We cannot do        What we can do is:
                this is Error           p+2
                    p+q                 p-3
                    p/q                 q-p
                    p*q
                    p*5
                    p/6

                This Expression is:
                   int p+1      =>1004
                   char p+1     =>1002
                   double p+1   =>1008

            */

    return 0;
}
