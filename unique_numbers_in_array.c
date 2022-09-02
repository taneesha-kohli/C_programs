#include<stdio.h>
int main()
{
    int n,arr[20],arr1[20],c=0;
  
    printf("\nHow many array elements do you want to store?\n");
    scanf("%d",&n);


  
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element :",i+1); 
        scanf("%d",&arr[i]);
    }                                       
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)   
    {
        if(arr[i]==arr[j])  // 1,2,3,1,2,1,3,4,1  // 1,2,3,1,2,1,3,4,1 
        {
            c++;          // frequency of first element
        }
    }

    arr1[i]=c; 
                       //store first element frequency in other array
 c=0;                   // because we have to count next element frequency with refresh counting to 0
      
}
 printf("\n\nUnique numbers are:\n") ;
for(int i=0;i<n;i++)
{
    if(arr1[i]==1)     // arr1 is holded the frequency of all elements 
    {                    //arr1[i] mean arr1[0] mean frequency of first element, if frequency of first element
printf("%3d",arr[i]);   // is ==1 than print first element mean arr[i] ,which point to first element of array
}
}
printf("\n\n");
    return 0;
}