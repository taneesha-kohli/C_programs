#include<stdio.h>
int main()
{
    int n;
    printf("\nHere you can add two matrices----------");
printf("\nEnter same size matrices (r==c):");
printf("\nEnter the size :");
scanf("%d",&n);
int arr1[n][n],arr2[n][n],rarr[n][n]; //because we have to need same row and same column ,in rarr[] we will 
                    // store the addition of both matrices ,because matrix are of n size so
                              //rarr[]will also of n size
printf("\n Enter the elements for first matrix:\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("Enter the [%d][%d] element :",i,j);
        scanf("%d",&arr1[i][j]);
    }
}
printf("\n Enter the elements for second matrix\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
         printf("Enter the [%d][%d] element :",i,j);
        scanf("%d",&arr2[i][j]);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)                          
    {
        rarr[i][j]=arr1[i][j]+arr2[i][j];
    }
    
}
printf("\n\n");
printf("\nAddition of both matrices is------\n\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("%5d",rarr[i][j]);
    }
    printf("\n");
}
printf("\n\n");
return 0;
}