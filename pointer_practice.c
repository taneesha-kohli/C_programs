#include<stdio.h>
int main()
{
   int num,sum=0;
   printf("till where you want to  print  the series?") ;
   scanf("%d",&num);
   for(int i=1;i<num;i++)
   {
   sum=sum+(i/i);
   
   }
   printf("%d",sum);
    return 0;
}