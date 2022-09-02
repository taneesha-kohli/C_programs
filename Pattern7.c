#include<stdio.h>
int main()
{
/*  1    3    5
    7    9   11
   13   15   17 */
 
 int r,c,k=1;

 printf("How many rows do you want?");
 scanf("%d",&r);
 printf("How many columns do you want?");
 scanf("%d",&c);
 for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf("%5d",k);
          k=k+2;
     }
    
     printf("\n");
 }
    return 0;
}