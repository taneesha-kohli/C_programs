#include<stdio.h>
int main()
{


   // first [array denotes element in row ][second array denotes elements in column]
// here [3] 3 row element and [4] mean element in 4 column 
// in this form 1 2 3 4 
 //              2 3 4 5
    //          3 4 5 6  this is arr[3][4]

printf("\nThis is 2d array here all element will store in row and column form-------\n");
int r,c;
printf("\nHow many rows you want?\n");
scanf("%d",&r);
printf("\nHow many columns you want?\n");
scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("\nEnter [%d],[%d] element:",i,j);
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%3d",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}