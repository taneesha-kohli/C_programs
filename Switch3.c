#include<stdio.h>
int main()
{
   char ch='\0' ;
   switch (ch)
   {
   case NULL:  // we know NULL=\0   its mean first printf will execute , but we know \0 is escape character and escape character performs their operation not prints but it can posible using \\ double slash like this \\0 it will print Empty \0 but because we wrote \0 so output will only Empty  
       printf("Empty \0");

       break;
   case ' ':
   printf("Empty Empty");
   break;
   case 0:
   printf("empty 0");
   break;

   default:
   printf("Nothing");
       break;
   }
    return 0;
}