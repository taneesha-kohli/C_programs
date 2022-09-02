#include<stdio.h>
void main()
{
int days,day,week,year,month;
printf("Enter the days:\n");
scanf("%d",&days);
 year=days/365;  
printf("\nYear  :%d\n",year);
month=(days-(365*year))/30;
printf("Month :%d\n",month);
week=(days-(30*month))/7;
printf("Week  :%d\n",week);
day=days-(7*week);
printf("Day   :%d\n",day);


}