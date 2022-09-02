#include<stdio.h>
int main()
{
int a,b;
printf("\n Enter the first number:");
scanf("%d",&a);
printf("\n Enter the second number:");
scanf("%d",&b);

switch (a>b)
{

  case 0:
  printf("%d is max\n",b);

    break;
    case 1:
    printf("%d is max\n",a);
    break;


}
    return 0;
}