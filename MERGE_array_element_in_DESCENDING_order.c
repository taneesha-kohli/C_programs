#include<stdio.h>
int n;
int main()
{
    int arr1[20],arr2[20],n,marr[20],a=0,temp;
  printf("Enter same size array----\n");
  printf("\nEnter the size for both array\n");
  scanf("%d",&n);
  printf("\nEnter the elements for first array:\n");
  printf("----------------------------------------\n");
  for(int i=0;i<n;i++)
  {
      printf("Enter the %d element :",i);
      scanf("%d",&arr1[i]);
  }
  printf("\nEnter the elements for second array:\n");
  printf("----------------------------------------\n");
 for(int i=0;i<n;i++)
  {
      printf("Enter the %d element :",i);
      scanf("%d",&arr2[i]);
  }
  
  for(int i=0;i<n;i++)
  {
    marr[i]=arr1[i];
  }
 for(int i=n;i<(n+n);i++)
 {
  marr[i]=arr2[a];
  a++;
 }

for(int i=0;i<(n+n);i++)
{
    for(int j=i+1;j<(n+n);j++)
    {
       if(marr[i]<marr[j])
       {
           temp=marr[i];
           marr[i]=marr[j];
           marr[j]=temp;
       } 
    }
}


 printf("\nmerged elements in Descending order-----\n\n");
 for(int i=0;i<(n+n);i++)
 {
     printf("%5d",marr[i]);
 }
 printf("\n\nmerged elements in descending order------\n\n");
 for(int i=((n+n)-1);i>=0;i--)
 {
     printf("%5d",marr[i]);
 }
  printf("\n\n");
    return 0;
}