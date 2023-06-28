# include<stdio.h>


main(){
  while (1 < 2){


    float num1, num2, result;
    char op;

    printf("ENTER THE FIRST NUMBER\n");
    scanf("%f",& num1);

    printf("ENTER THE OPERATION +,-,*,/,p:\n");
    scanf(" %c",& op);

    printf("ENTER THE SECOND NUMBER\n");
    scanf("%f",& num2);

    switch(op){

    case'+':
  result = num1 + num2;
  printf("%f", result);
  break;

  case'-':
  result = num1 - num2;
  printf("%f", result);
  break;

  case'*':
  result = num1 * num2;
  printf("%f", result);
  break;

  case'/':
  result = num1 / num2;
  printf("%f", result);
  break;

    case'p':
  result = (num1 * num2)* 0.01;
  printf("%f", result);
  break;

  defult :
  printf("THE NUMBER IS NOT VALID");

  getch();

  }

    char a;
        printf("<---Enter \'N\' to quit and \'Y\' to convet again--->\n");
        scanf("%c", &a);
        scanf("%c", &a);
        if ((a == 'y') || (a == 'Y'))
        {
            a = 'y';
        }
        else
        {
            printf("Exit");
            break;
        }

}
       return 0;

}
