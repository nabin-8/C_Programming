#include<stdio.h>

int main(){


    char cal;
  double num1, num2;
  printf("Enter Operator(+, -, *, /)");
  scanf("%c", &cal);
  printf("Enter two Numbers:");
  scanf("%lf %lf", &num1, &num2);
  switch(cal){
  case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
      case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
      case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
      case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
  default:
    printf("Wrong Input");

  }
    return 0;
}

