#include<stdio.h>
int main()
{
 int week;
 printf("Enter the day:\n");
 scanf("%d",&week);
 switch (week)
 {
 case 1:
     printf("This is Monday\n");
     break;
case 2:
printf("this is tuesday\n");
break;
case 3:
printf("this is wednesday\n");
break;
case 4:
printf("This is thrusday\n");
break;
case 5:
printf("This is friday\n");
break;
case 6:
printf("this is saturday\n");
break;
case 7:
printf("this is sunday\n");
 break;
 default:
printf("Not Matched\n");
     break;
 }
     return 0;
}