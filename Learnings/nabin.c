#include<stdio.h>

int main(){


    char cal;
  double num1, num2;
  printf("Enter Operator(N, S, H)");
  scanf("%c", &cal);
  //printf("Enter two Numbers:");
  //scanf("%lf %lf", &num1, &num2);
  switch(cal){
  case 'N':
      printf("I AM Here. Nabin");
      break;
      case 'S':
      printf("Ohoo!! I am Here Sairaj.");
      break;
      case 'H':
      printf(" Kt ko pachi na laga");
      break;
      case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
  default:
    printf("Melana Melana!!");

  }
    return 0;
}
