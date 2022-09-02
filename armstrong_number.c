
#include<stdio.h>
int main()
{

  int num,r,arr[50],n,i=0,sum=0,a;
  printf("How number digit do you want to print?");
  scanf("%d",&n);

  printf("Enter the digit:");
  scanf("%d",&num);
  a=num;
  while (num!=0)
  {
    //   for(int i=0;i<n;i++)
    //   {
    r=num%10;
    arr[i]=r;
    if(n==1)
    {
        arr[i]=(r);
    }
    if(n==2)
    {
        arr[i]=r*r;
    }
    if(n==3)
    {
        arr[i]=r*r*r;
    }
    if(n==4)
    {
        arr[i]=r*r*r*r;
    }
    if(n==5)
    {
        arr[i]=r*r*r*r*r;
    }
    if(n==6)
    {
        arr[i]=r*r*r*r*r*r;
    }
    if(n==7)
    {
        arr[i]=r*r*r*r*r*r*r;
    }
    if(n==8)
    {
        arr[i]=r*r*r*r*r*r*r*r;
    }
    if(n==9)
    {
        arr[i]=r*r*r*r*r*r*r*r*r;
    }
    sum=sum+arr[i];
    i++;
    num=num/10;  
      
 
  }
   for(int i=0;i<n;i++)
      {
          printf("%d\n",arr[i]);
      }
      printf("\nsum =%d\n",sum);
      if(sum==a)
      {
          printf("\nthis is armstrong number\n");
      }
      else
      {
          printf("\nNot armstrong\n");
      }
    return 0;
}