#include<stdio.h>
void unit()
{
    float km,meter,centimeter,feet,inches,milimeter;
int choice;
printf("Press the given number for converting KM value in((1=m)/(2=cm)/(3=feet)/(4=inches)/(5=mml):\n");
scanf("%d",&choice);
if(choice==1)
{
    printf("Enter the value in km for converting in m:\n");
    scanf("%f",&km);
    meter=km*1000;
    printf("%.1f :m\n",meter);
}
if(choice==2)
{
    printf("Enter the value in km for converting in cm:\n");
    scanf("%f",&km);
    centimeter=(km*1000)*100;
    printf("%.1f :cm\n",centimeter);
}
if(choice==3)
{
    printf("Enter the value in km for converting in feet :\n");
    scanf("%f",&km);
    feet=((km*1000)*100)/30.48;
    printf("%.1f :feet\n",feet);
}
if(choice==4)
{
    printf("Enter the value in km for converting in inches:\n");
    scanf("%f",&km);
    inches=((km*1000)*100)/2.54;
    printf("%.1f :inches\n",inches);
}
if(choice==5)
{
    printf("Enter the value in km for converting in milimeter:\n");
    scanf("%f",&km);
    milimeter=((km*1000)*100)*10;
    printf("%.1f :mml\n",milimeter);
}
}
int main()
{
 
unit();
    return 0;
}