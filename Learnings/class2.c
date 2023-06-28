#include<stdio.h>
#include<math.h>

int main(){
    long nn,n,n1,n2,n3,n4,n5;
    printf("Enter Six Digit Integer:\n");
    sacnf("%d",&nn);
    n=nn;

    n1=n% 10;
    n2=n% 10;
    n3=n% 10;
    n4=n% 10;
    n5=n% 10;
    n=n/10;
    printf("Reverse = %1%1%1%1%1%1",n1,n2,n3,n4,n5,n);




    //int x,y,z;
   // printf("***program ***\n");
    //printf("Enter Base Value X\n");
    //scanf("%d",&x );
    //printf("Enter the power value Y\n");
    //scanf("%d",&y );
    //z= pow(x,y);
    //printf("The Value of Z=%f", pow(x,y));
    //printf("The Value %d^%d is %f", x,y,pow(x,y));

// unit 1 all exercise



    return 0;

}
