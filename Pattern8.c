#include<stdio.h>
int main()
{
/*1  2  3  4  5
  2  4  6  8 10
  3  6  9 12 15
  4  8 12 16 20
  5 10 15 20 25*/
    
    int r,c,k=1;

 printf("How many rows do you want?");
 scanf("%d",&r);
 printf("How many columns do you want?");
 scanf("%d",&c);
 for(int i=1;i<=r;i++)
 {
     for(int j=1;j<=c;j++)
     {
         printf("%3d",i*j);
     }
     printf("\n");
 }
    return 0;
}