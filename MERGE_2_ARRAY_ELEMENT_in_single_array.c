#include<stdio.h>
int n;
int main()
{
    int arr1[20],arr2[20],n,marr[20],a=0;
  printf("Enter same size array----\n");
  printf("\nEnter the size for both array\n");
  scanf("%d",&n);
  printf("\nEnter the elements for first array:\n");
  for(int i=0;i<n;i++)
  {
      printf("Enter the %d element :",i);
      scanf("%d",&arr1[i]);
  }
  printf("\nEnter the elements for second array:\n");
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
 printf("\nmerged elements are-----\n");
 for(int i=0;i<(n+n);i++)
 {
     printf("%3d",marr[i]);
 }
  printf("\n\n");
    return 0;
}