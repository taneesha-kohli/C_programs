#include<stdio.h>
int main()
{
    int n,arr[20],c=1,arr1[20];
    printf("How many elements do you want to store in array?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
     {
            if(arr[i]!=-1)     // we will ignore duplicate elements counting again 
            {    
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;  // in whose places we will get the duplicate of number there we will store -1
            }               // as that -1 element will not come in array element for counting again 
        }                    // because we have counted similar element already ,
            }       /* we can store any other character in the place of -1 or in the place of duplicate value*/
        arr1[i]=c;
        c=1;
    }
    printf("\nDuplicate elements are-----------\n");
    for(int i=0;i<n;i++)
     {
         if(arr[i]!=-1)  // we will print duplicate elements accept to -1 because this is not real element 
         {                  // we wrote -1 to ignore recounting of single element 
             if(arr1[i]>=2)  
             {
             printf("%3d",arr[i]);
             }
         }
     }
     printf("\n\n");
    return 0;
}