#include<stdio.h>
void duplicate(int,int[]);
void unique(int,int[]);
int main()
{
    int n,arr[50];
    printf("\n\nHow many array elements do you want to Enter?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }

    duplicate(n,arr);
    unique(n,arr);
    
    return 0;
}
void duplicate(int n,int arr[])
{
    int farr[20],c=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        farr[i]=c;
        c=1;
    }
    printf("\nDuplicate number are---------\n");
     for(int i=0;i<n;i++)
    {
        if(farr[i]==2)
        {
           printf("%3d",arr[i]) ;
        }
    }
}
void unique(int n,int arr[])
{
     int farr[20],c=0;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(arr[i]==arr[j])
             {
                 c++;
             }
         }
         farr[i]=c;
         c=0;
     }
     printf("\n\nUnique numbers are-----------------\n");
      for(int i=0;i<n;i++)
    {
        if(farr[i]==1)
        {
            printf("%3d",arr[i]);
        }
    }
    printf("\n\n");
}