#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,f=0,d;
    printf("How many array elements do you want to print?");
    scanf("%d",&n);
 arr=(int*)calloc(n,sizeof(int));
 if(arr==NULL)
 {
     printf("can't possible dinamically allocation\n");
 }
 for(int i=0;i<n;i++)
 {
     printf("Enter the %d element",i+1);
     scanf("%d",&arr[i]);
 }
 printf("Of which element you want to find duplicate?");
 scanf("%d",&d);
for(int i=0;i<n;i++)
{
   
        if(d==arr[i])  
        {
            f++;
        }   
   
}
printf("%d number occured %d times\n",d,f);
 free(arr);
    return 0;
}