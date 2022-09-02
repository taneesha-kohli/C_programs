#include<stdio.h>
int main()
{ // 1st jan of 1900 is monday;
    int year,a,user;
while(user!=0)
{
    printf("Enter the year max than 1900 to know the day in 1 jan of that year:");
    scanf("%d",&year);
    if(year%4!=0)
    {
    year=year-1900;
     a=(365*year)%7; 
    }
    if(year%4==0)
    {

      year=year-1900;
     a=((365*year)+1)%7; //2018  
    }
    if(year%100==0&&year%400==0)
    {
    year=year-1900;
     a=((365*year)+1)%7;
     
    }
 
   
    if(a==0)
    {
        printf("monday\n");
    } 
    if(a==1)
    {
        printf("tuesday\n");
    } 
        if(a==2)
    {
        printf("wednesday\n");
    } 
        if(a==3)
    {
        printf("thursday\n");
    } 
    if(a==4)
    {
        printf("friday\n");
    } 
    if(a==5)
    {
        printf("saturday\n");
    } 
        if(a==6)
    {
        printf("sunday\n");
    } 
    printf("\npress 0 for exit 1 for continue\n");
    scanf("%d",&user);

         }


   
    return 0;
}

