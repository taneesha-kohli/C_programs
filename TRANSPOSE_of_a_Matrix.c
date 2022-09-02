#include<stdio.h>
int main()
{
    int mat[20][20],r,c,tmat[20][20];
    printf("\nHow many rows do you want?\n");
    scanf("%d",&r);
    printf("\n How many column do you want?\n");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter [%d][%d] Element :",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nYour Entered matrix is-----\n");
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
      for(int i=0;i<r;i++)  // 3        6 7 8 9  
    {
        for(int j=0;j<c;j++)  //4       1 2 3 4 
        {
            tmat[j][i]=mat[i][j];    
        }
    }
    printf("\nTransposed matrix is----------\n");
       for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%5d",tmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}