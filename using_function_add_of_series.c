#include<stdio.h>
void series (int);
int main()
{
int num;
printf("till where you want to add the series in this form(1!/1*2!/2*):");
scanf("%d",&num);
series(num);
series(4);
    return 0;
}
void series (int num)
{
  int mul=1,devide=0,result=0,a;
  a=num;
  for(int i=num;i>=1;i--)
  {
      for(int j=i;j>=1;j--)
      {
      mul=mul*j;
      }
      devide=mul/a;
      result=result+devide;
      a--;
      mul=1;
  }
  printf("\nsum of the series:%d\n",result);
}