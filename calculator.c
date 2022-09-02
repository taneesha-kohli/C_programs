#include<stdio.h>
void main()
{
  void calculator()
  {
  char operator;
  float a,b;
 printf(" \n                      TWO NUMBER CALCULATOR  \n");
 printf("\n ******* Here you can perform (+,-,*,/) all these calculation *******\n");
  printf("\nEnter the operator (+,-,*,/) \n");
   scanf("%c",&operator);
   printf("Enter the first operand(number):\n");
  scanf("%f",&a);
  printf("Enter the second operand(number):\n");
  scanf("%f",&b);
  switch(operator)
  {
    case '+':
    printf("%.1f+%.1f = %.2f\n",a,b,a+b);
    break;
    case '-':
    printf("%.1f-%.1f = %.2f\n",a,b,a-b);
    break;
    case '*':
     printf("%.1f*%.1f = %.2f\n",a,b,a*b);
     break;
     case '/':
    printf("%.1f/%.1f = %.2f\n",a,b,a/b);
    break;
    
  }
}