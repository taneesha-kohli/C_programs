/*Write a c program to print the diagonal elements of a 4*4 matrix */
#include<stdio.h>
int main()
{
    int arr[4][4];
    printf("Enter 4*4 elements:");
  

        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("\nEnter the [%d][%d] element :",i,j);
                scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour entered matrix is----------------------\n");
       for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("%2d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\nDiagonal matrix is------------------------\n");
            for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                  if(i==j)
                  {
                      printf(" %d",arr[i][j]);
                  }
                  else
                  {
                      printf(" -");
                  }
            }
            printf("\n");
        }
    
    return 0;
}