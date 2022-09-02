#include<stdio.h>
int choice,currency,a,b,user;
float euro,dollar,rupay1,rupay2,do_eu,eu_do,kilogram,gram,kg,g;
float km,meter,centimeter,feet,inches,milimeter,f,c,fahrenhite,celsius;
void rupee();
void rupee2();
void dol();
void eur();
void f_c();
void kg_g();
void unit();
void main()
{

  do
  {
 int num;
 
  printf("\n\n                  ********** MENU ***********           \n\n");
  printf("(A). Press 1 for converting the euro and dollar currency in rupee\n");
  printf("(B). Press 2 for converting the rupees in euro and dollar\n");
  printf("(C). Press 3 for converting dollar in euro\n");
  printf("(D). Press 4 for converting euro in dollar\n");//
  printf("(E). Press 5 for converting fahrenhite to celsius and celsius to fahrenhite\n");
  printf("(F). Press 6 for converting kg to g and g to kg\n");
  printf("(G). Press 7 for converting km to in (m,cm,feet,inches,mml)\n");

  printf("\nEnter your choice:\n");
  scanf("%d",&num);

  if(num==1)
  {
      rupee();
printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
    
   
  }
  if(num==2)      
  {
      rupee2();
      printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  
   
  }
  if(num==3)
  {
    dol();
    printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  }
  if(num==4)
  {                            
    eur();
    printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  }
  if(num==5)
  {
      f_c();
printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  }
  if(num==6)
  {
      kg_g();
printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  }
  if(num==7)
  {
      unit();
printf("\nDo you want continue?(1=YES/0=NO)\n");
scanf("%d",&user);
  }
}while(user!=0);
}
void rupee()
{

printf("\nwhich currency you want to convert in rupee?(1=euro/2=dollar)\n");
scanf("%d",&choice);
if(choice==1)
{
 printf("\nHow many euro you want to convert in rupee?\n");
 scanf("%d",&currency);
 rupay1=84.42*currency;
 printf("\n%.2f rupee in %d euro\n",rupay1,currency);
}
if(choice==2)
{
    printf("\nHow many dollar you want to convert in rupee?\n");
    scanf("%d",&currency);
    rupay2=74.84*currency;
    printf("\n%.2f rupee in %d dollar\n",rupay2,currency);

}
}
void rupee2()
{

 printf("\nin which currency you want to convert rupee? (1=euro/2=dollar)\n ");
 scanf("%d",&choice);
 if(choice==1)
 {
  printf("\nHow many rupee you want to convert in euro?\n");
  scanf("%d",&currency);
  euro=currency/84.42;
  printf("\n%.2f euro in %d rupee\n",euro,currency);
 }
 if(choice==2)
 {
     printf("\nHow many rupee you want to convert in dollar?\n");
     scanf("%d",&currency);
     dollar=currency/74.84;
     printf("\n%.2f dollar in %d rupee\n",dollar,currency);
 }
}
void dol()
{
printf("\nHow many dollar you want to convert in euro?\n");
scanf("%d",&a);
eu_do=74.48*a/84.42;
printf("\n%.3f euro in %d dollar\n",eu_do,a);

}
void eur()
{
  printf("\nHow many euroes you want to convert in dollar?\n");
  scanf("%d",&b);
do_eu=84.42*b/74.48;
printf("\n%.3f dollar in %d euro\n",do_eu,b);
}
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
       fahrenhite=(c*9/5)+30;
       printf("%.1f :fahrenhite\n",fahrenhite);
   }
    }
      void kg_g ()
    {
    printf("Press 1 for converting kg to gram:\n");
    printf("Press 2 for converting gram to kg:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the kg value which you want to convert in gram:\n");
        scanf("%f",&kg);
        gram=1000*kg;
        printf("%.1f :g\n",gram);
    }
    if(choice==2)
    {
        printf("Enter the gram value which you want to convert in kg:\n");
        scanf("%f",&g);
        kilogram=g/1000;
        printf("%.1f :kg\n",kilogram);
    }
    }
    void unit()
{
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


