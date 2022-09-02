#include<stdio.h>
int main()
{ 
    int arr[20][20],r,c,sum[20][20];
 printf("How many rows do you want ?");
 scanf("%d",&r);
 printf("How many columns do you want ?");
 scanf("%d",&c);
 printf("Enter the number in (r*c) form \n");
 for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf("Enter the number:");
         scanf("%d",&arr[i][j]);
     }
 }
printf("\nEnter the numbers for second matrix in same for as first matrix (r*c):\n");
int ar[r][c];
 for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf("Enter the number:");
         scanf("%d",&ar[i][j]);
 }
 }

  for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf(" %d ",arr[i][j]);
     }
     printf("\n");
 }
printf("\n");
   for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf(" %d ",ar[i][j]);
     }
     printf("\n");
 }
 printf("\n\n");
    for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
  sum[i][j]=arr[i][j]-ar[i][j];
   printf(" %d  ",sum[i][j]);
     }
     printf("\n");
 }
    return 0;
}