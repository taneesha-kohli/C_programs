
#include<stdio.h>
int main()
{
    float f,c,fahrenhite,celsius;
    int choice; 
    void f_c()
    {
    printf("Press 1 for converting fahrenhite to celius:\n");
    printf("Press 2 for converting celcius to fahrenhite:\n");
   scanf("%d",&choice);
   if(choice==1)
   {
    printf("Enter the fahrenhite value:\n");
    scanf("%f",&f);
   celsius=(f-32)*5/9;
   printf("%.1f :celsius\n",celsius);
    
   }
   if(choice==2)
   {
       printf("Enter the value of celsius:\n");
       scanf("%f",&c);
       fahrenhite=c*(9/5)+30;
       printf("%.1f :fahrenhite\n",fahrenhite);
   }
    }
    return 0;
}