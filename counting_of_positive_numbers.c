#include<stdio.h>
int main()
{
   int num,total=0;
   printf("\nHow many nubers do you want to print?");
   scanf("%d",&num);
   int arr[num];
   for(int i=1;i<=num;i++)
   {
     printf("Enter the %d number:",i);
     scanf("%d",&arr[i]);
   }
      for(int i=1;i<=num;i++)
   {
       if(arr[i]%2==0)
       {
         total++;
         printf("%d\t",arr[i]);
        
       }
   }

      printf("\n\n%d Positive number\n",total);
   
    return 0;
}

