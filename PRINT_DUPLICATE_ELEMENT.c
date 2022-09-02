#include<stdio.h>
int main()
{
    int n,arr[50],farr[50],c=1;   // farr[]= array which is holding the frequency of elements
    printf("\nHow many array elements do you want to store?\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)  // [1,2,1,3,4,5,6,7]
       {
           if(arr[i]==arr[j])
           {
        c++;
           }
       }
       farr[i]=c;
       c=1;    
    // because we have to count next element frequency //
   //if we will not initialise c=1 so next element frequency will add with before element's frequency
   
   }
 printf("\n\nDuplicate elements are------------------------\n");
 for(int i=0;i<n;i++)
   {
    if(farr[i]==2) // it will check all element frequency 
    {
        printf("%3d",arr[i]);  //if frequency==2 than we will print that element
    }  
   } 

   printf("\n\n");
 
    return 0;
}