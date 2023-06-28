
#include <stdio.h>
// #include<math.h>

int  main() {
    while(1<2){
    int num1, num2, sum ;
    char op,q,o;
    float um1,um2, sum1;
    printf("*****************************************************************************************************************\n");
           printf("1.find sum of 2 integer numbers.               (+) "); printf("11.find product of 2 integer numbers.             (g)\n");
           printf("2.find subtract of 1 integer 1 float numbers.  (-) "); printf("12.Swap two Numbers Using Temporary Variable.     (h)\n");
           printf("3.find product of 2 float numbers.             (*) "); printf("13.find product of 1 integer and 1float numbers.  (i)\n");
           printf("4.find volume of a cube.                       (/) "); printf("14.find division of 1 integer 1 float numbers.    (j)\n");
           printf("5.find sum of 1 integer 1 float numbers.       (a) "); printf("15.find average of 2 integer numbers.             (k)\n");
           printf("6.find subtract of two integer numbers.        (b) "); printf("16.find surface area of a sphere.                 (l)\n");
           printf("7.find average of 2 float numbers.             (c) ");  printf("17.find division of 2 float numbers.              (m)\n");
           printf("8.find s=u t+ 1/2 at2.                         (d) ");  printf("18.find division of 2 integer numbers.            (n)\n");
           printf("9.find sum of 2 float numbers.                 (e) ");  printf("19.find average of (1int,1float) numbers.         (o)\n");
           printf("10.find subtract of 2 float numbers.           (f) ");  printf("20.Swap Numbers without Using Temporary Variable. (p)\n");
           printf("*****************************************************************************************************************\n\n");









    printf("Enter Operator(+, -, *, / , a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p): ");
  scanf("%c", &op);





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

    case'*':// 3
        //find The Product of Two Float Numbers
         printf("Lets, find The Product of Two Float Numbers:\n");
         printf("Enter two Float Numbers:\n");
         scanf("%f",&um1);
         scanf("%f",&um2);
         printf("Product of Two Float Numbers:%f\n",um1 *um2);
         break;

    case'/':
        // 4
        printf("Find Volume of Cube:\n");
        printf("Enter Length of the Cube's Side:\n");
        scanf("%f",& um1);
        um2 = um1*um1*um1;
        printf("Length of Cube's Side:%fcm^3\n",um2);
        break;


   case'a':
        // 5
        //find sum of 2 integer and floating numbers
        printf("Enter integer Number:\n");
        scanf("%d",&num1);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Sum of Integer and Float Number:%f\n",um1 +num1);
        break;


case'b':
        // 6
        //find subtraction of 2 integer and floating numbers
        printf("Enter Two integer Number:\n");
        scanf("%d",&num1);
        scanf("%d",&num2);
        printf("Subtract of Two Integer Numbers:%d\n",num1 -num2);
        break;


case 'c':
        // 7
        //find sum of 2 numbers
        printf("Enter Two Float Numbers:\n");
    scanf("%f ",&um1);
    scanf("%f",&um2);
    sum1= um1+um2;
    printf("Average of Two Float Number is :%f\n", sum1/2);
    break;

    //8 d

    case'e':
        // 9
        //find sum of 2  floating numbers
        printf("Enter Float Number:\n");
        scanf("%f",&um2);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Sum of Float Number:%f\n",um1 +um2);
        break;


     case'f':
        // 10
        //find subtract of 2  floating numbers
        printf("Enter Float Number:\n");
        scanf("%f",&um2);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Subtract of Float Number:%f\n",um1 -um2);
        break;

    case'g':// 11
        //find The Product of Two Integer Numbers
         printf("Lets, find The Product of Two Float Numbers:\n");
         printf("Enter two Integer Numbers:\n");
         scanf("%d",&num1);
         scanf("%d",&num2);
         printf("Product of Two Float Numbers:%d\n",num1 *num2);
         break;


         //12 h

    case'i':
        // 13
        //find Product of 2 integer and floating numbers
        printf("Enter integer Number:\n");
        scanf("%d",&num1);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Product of Integer and Float Number:%f\n",um1 *num1);
        break;


     case'j':
        // 14
        //find Division of 2 integer and floating numbers
        printf("Enter integer Number:\n");
        scanf("%d",&num1);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Division of Integer and Float Number:%f\n",um1 /num1);
        break;



     case 'k':
        // 15
        //find Average of of 2 integer numbers
        printf("Enter Two Integer Numbers:\n");
    scanf("%d ",&num1);
    scanf("%d",&num2);
    sum= num1+num2;
    printf("Average of Two Float Number is :%d\n", sum/2);
    break;

    //16 l


    case'm':
        // 17
        //find subtract of 2  floating numbers
        printf("Enter Float Number:\n");
        scanf("%f",&um2);
        printf("Enter Float number:\n");
        scanf("%f",&um1);
        printf("Subtract of Float Number:%f\n",um1 /um2);
        break;


    case 'n':
        // 18
        //find sum of 2 numbers
        printf("Enter Two integer:\n");
    scanf("%d ",&num1);
    scanf("%d",&num2);
    printf("Sum of Two integer is :%d\n", num1 / num2);
    break;



    //o


    //p


   default:
      printf("Error! operator is not correct\n");

  }







//printf("**************************************************\n");

 char z;
 printf("Y to continue\n");

 scanf("%c", &z);
 scanf("%c", &z);
 if(z =='y')
    {
    main();
 }
 else{
    printf("Exit\n");
    break;
 }


}

  return 0;
}

