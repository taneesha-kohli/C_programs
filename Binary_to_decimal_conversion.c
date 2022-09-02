#include<stdio.h>
int main()
{
  int arr[20],num,sum=0,j,a;
  printf("\nHow many binary bits do  you want to convert in decimal?");
  scanf("%d",&num);
  j=(num-1);
  for(int i=0;i<num;i++)
  {
      printf("Enter the bit:");  
      scanf("%d",&arr[i]);
  }

      for(int i=0;i<num;i++)
  {
      a=(1<<j);
     if(j==0)
     {
         a=1;
     }
     sum=sum+arr[i]*a;
      j--;
  }
  printf("\nDecimal Number:%d\n",sum);
 
    return 0;
}
