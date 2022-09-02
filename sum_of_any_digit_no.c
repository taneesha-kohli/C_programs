#include<stdio.h>
#define PI 3.14
int main()
{

  /* program to sum of given digit numbers*/
    int num,q,r,sum=0;
    printf("Enter the digit of 5 number:\n");
    scanf("%d",&num);
    
  while(q!=0)
  {  
    r=num%10;  //10  67678 0.6 
    sum=sum+r;
    printf("%d",r);
  
   q=num/10;    
   num=q;
  }
    printf("sum:%d\n",sum);
    return 0;
}