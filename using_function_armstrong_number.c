
#include<stdio.h>
int armstrong (int,int);
int main()
{


/* in armstron number if we have entered 3 digit so all numbers in this 3 digit number will multiply the power 3
let :we have digit 345 so this is 3 digit number so all digit(3,4,5)will multiply with number of digit=3
so ((3*3*3)+(4*4*4)+(5*5*5)) in this format number will multiply and than will add 
and if sum of (3*3*3)+(4*4*4)+(5*5*5)==to the digit(345) so this will become a armstrong number
like 371: (3*3*3)+(7*7*7)+(1*1*1)==371  so 371 is armstrong number
153 is also armstrong*/




//   int num,n;
//   printf("How number digit do you want to print?");
//   scanf("%d",&n);

//   printf("Enter the digit:");
//   scanf("%d",&num);
// armstrong(num,n);
armstrong(153,3);
  armstrong(371,3);
  return 0;
}
int armstrong (int num,int n)
{
   int r,arr[50],i=0,sum=0,a;
  a=num;

    for(i;i<n;i++)
    {
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
    num=num/10;  
    }

      printf("\nsum of %d's each numbers %d power is:%d\n",a,n,sum);
      if(sum==a)
      {
          printf("\n%d is armstrong number\n",a);
      }
      else
      {
          printf("\nNot armstrong\n");
      }

}