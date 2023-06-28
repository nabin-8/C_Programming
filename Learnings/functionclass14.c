#include<stdio.h>

int main(){
    // This is a function class 14
    /*Function is a block of code, which has
     some name for identification.

            FUNCTION
     i)Even in the smallest c program , there is
        at least one function
     ii)All function name must be unique
     iii)one function name must be main()
        you can define function in any sequence
      iv)No keyword is function
      V) main function call by OS*/

    /*
    Function are of two types.
        1.Predefine functions.
                scanf(), Printf(), getch(), exit()
                puts(), gets(), malloc(), calloc()

                printf()= stored in c.library

        2.UserDefine Functions.
            main()
    */

    /*
        Program with multiple function
    */

    // if function is not call it dose not execute



    /*

            Way To Define Function
        1) Take Nothing, Returns Nothing (TNRN)
        2) Take Somthing, Returns Nothing (TSRN)
        3) Take Nothing, Returns Somthing (TNRS)
        4) Take Somthing, Returns Somthing(TSRS)

    */


                //TNRN

       void add() //Empty parenthesis means TN(Takes Nothing)
        {
            int a,b,c;
            printf("Enter two numbers: ");
            scanf("%d%d",&a,&b);
            c =a+b;
            printf("Sum is %d",c);
                //No return keyword means RN(Return Nothing)
                // Void is Return Type
        }


add();

return 0;
}
