# include<stdio.h>
#include<math.h>


int main(){
    int num1, num2, sum ,nb1;
    char op,q,o;
    float um1,um2, sum1;


    printf("Enter Operator(+, -, *, /,v,i,s,a, p1): ");
  scanf("%c", &o);

    if(o < 5){
        scanf("%c", &op);


    printf("hellow world\n");
    printf("Enter Operator(+, -, *, /,v,i,s,a, p1): ");


    //scanf("%c", &op);
    switch (op) {

    case '+':
        // 1
        //find sum of 2 numbers
        printf("Enter Two integer:\n");
    scanf("%d ",&num1);
    scanf("%d",&num2);
    printf("Sum of Two integer is :%d\n", num1 + num2);
    break;

    case'-':
        // 2
        //find subtraction of 2 integer and floating numbers
        printf("Enter integer Number:\n");
        scanf("%d",&num1);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Subtract of Integer and Float Number:%f\n",um1 -num1);
        break;


  }


} else{

    scanf("%c", &op);
    printf("hell0");


}
return 0;
}

