#include<stdio.h>

void add(); //function decleration to access all
void add(int,int); //(TSRN)

int main(){ // main function is (TNRS)
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
//add();


            //TSRN

        void add2(int a,int b)
        {
            int c;
            c= a+b;
            printf("Sum is %d",c);
        }
        int x,y;
        printf("Enter tow numbers: \n");
        scanf("%d%d",&x,&y);
        add2(x,y); // call by value

return 0;
}
