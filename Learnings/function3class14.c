#include <stdio.h>
int add(); // TNRS

int main()
{
    /*
      Way To Define Function
        1) Take Nothing, Returns Nothing (TNRN)
        2) Take Somthing, Returns Nothing (TSRN)
        3) Take Nothing, Returns Somthing (TNRS)
        4) Take Somthing, Returns Somthing(TSRS)

    */

                // TNRS

            int add()
            {
                int a,b,c;
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                c =a+b;
                return c;
            }

            //int s;
            //s=add();
            //printf("sum is %d",s);

  /*
                    return
                1. It returns value.
                2.It return control.
                    We cannot return more then
                    one value using return keyword.
                                    */




return 0;
}
