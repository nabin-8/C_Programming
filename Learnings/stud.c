#include<stdio.h>

int main(){
    float num1,num2,num3,num4,num5,ope,per=500;

    printf("******************************************\n");
    printf("Enter Subject Marks\n");

    printf("Mathematics:\n");
    scanf("%f",& num1);
    printf("CFA:\n");
    scanf("%f",& num2);
    printf("SOT:\n");
    scanf("%f",& num3);
    printf("ENG:\n");
    scanf("%f",& num4);
    printf("BIO:\n");
    scanf("%f",& num5);
    printf("Mathematics: %f| CFA: %f| SOT: %f| ENG: %f| BIO: %f|\n\n",num1,num2,num3,num4,num5);
    ope = num1+num2+num3+num4+num5;
    printf("Your Total Marks is: %f\n\n",ope);
    printf("******************************************\n");

    per = (ope*100) /per;
    printf("Your PERCENTAGE is: %f\n",per);

    if(per >=70){
        printf("FIRST DEVISION: %f\n",per);

    }
    else if(per >=50){
        printf("Second DEVISION: %f\n",per);
    }
    else{
        printf("Third Devision: %f",per);
    }




    return 0;

}
