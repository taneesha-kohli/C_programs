
#include<stdio.h>
int main()
{
    int num,q,r,arr[100],a;
    printf("Enter the number of which you want to covert in binary:\t");
    scanf("%d",&num);
     a=num;
  
    do{
        for(int i=0;i<=7;i++)
        {
      r=a%2;
     arr[i]=r;             
      a=a/2;                    
        }                           
    }while(a!=0);
     for(int i=7;i>=0;i--)
        {
            printf("%d",arr[i]);
        }
      printf("\n");
       
    
    return 0;
}
