#include <stdio.h>

int main()

{
    printf("\n RECURSION");

                // What is Recursion?
        /*
        i) Function calling itself is called recursion.
        ii) A recursive method solves a problem by
            calling a copy of itself to work an a
            smaller problem.
        iii)It is important to ensure that the
            recursion terminates.
        */
        int k;
        k=f1(3);
        printf("\n%d",k);

    return 0;
}

int f1(int n)
{
    int s;
    if(n==1)
        return 1;
    s= n+f1(n-1);
        return(s);
}
