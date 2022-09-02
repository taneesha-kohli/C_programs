#include<stdio.h>
char add[80],name[15],date[10];
long int account,mob;
void menu();
void new_acc();
void update();
void withdrawal();
void transfer();
void main()
{
    int choice;
  
printf("\n           BANK MANAGEMENT SYSTEM\n");
printf(" ********************************************\n");
printf("    **************WELCOME****************\n");
printf(" ********************************************\n\n");
menu();
printf("\nEnter Your choice:");
scanf("%d",&choice);
if(choice==1){
    new_acc();
}
if(choice==2){
    update();
}
if(choice==3){
    withdrawal();
}
if(choice==4){
    transfer();
}
}
void menu(){
printf("1 . Create New Account\n");
printf("2 . Update Account\n");
printf("3 . Withdrawal\n");
printf("4 . Transfer Money\n");
printf("5 . Delete Account\n");
}
void new_acc(){
     char user,ch[100];
    char dob[20],sign[10];
    FILE *ptr;
ptr=fopen("Bank_data.txt","w+");

    printf("Enter the date:\n");
    gets(date);
    gets(date);
     puts(date);
    
printf("\nEnter Your Full address:\n"); 
gets(add);
puts(add);
printf("Enter Your DOB:");
gets(dob);
puts(dob);

printf("Enter Your Name:");
scanf("%s",&name);
printf("Enter your Mobile Number:");
scanf("%ld",&mob);
printf("Your signature here:");
scanf("%s",&sign);
fprintf(ptr,"%s,%s,%s,%s,%s,%ld",add,dob,name,sign,date,mob);
    printf("Proceeding-----------------------------------\n");
    printf("Your New Account is successfully Created!!!!!!!!!!\n");
    fclose(ptr);
rewind(ptr);
ptr=fopen("Bank_data.txt","r");
if(ptr==NULL)
{
    printf("Error\n");
}
else
{
while ((fscanf(ptr,"%s\n",ch))!=EOF)
{
    printf("\n%s\n",ch);
}
}
fclose(ptr);
}
void update(){
FILE *ptr;
  int change;
  char ch[100];
ptr=fopen("Bank_data.txt","w+");
  
printf("\n which type of changes do You want to in Your Account:?\n");
printf("1 . For changing the name\n");
printf("2 . For changing mobile Number\n");
printf("3 . For changing address\n");
printf("Enter Your choice :");
scanf("%d",&change);
if(change==1){
    gets(date);
        printf("Date:\n");
    gets(date);
    printf("Enter Your name:\n");
    scanf("%s",&name);
printf("Enter Your Account No.\n");
    scanf("%ld",&account);
fprintf(ptr,"%s,%s,%ld",date,name,account);

printf("proceeding-------------------------\n");
printf("Your account is updated:\n");
fclose(ptr);
rewind(ptr);
ptr=fopen("Bank_data.txt","r");
if(ptr==NULL)
{
    printf("Error\n");
}
else
{
while ((fgets(ch,100,ptr))!=EOF)
{
    printf("\n%s\n",ch);
}
}
}
if(change==2){
    gets(date);
   printf("Date:\n");
    gets(date);
printf("Enter Your name:\n");
scanf("%s",&name);
printf("Enter Your Account Number:\n");
scanf("%ld",&account);
printf("Enter Your Mobile Number:\n");
scanf("%ld",&mob);
fprintf(ptr,"%s,%s,%ld,%ld",date,name,account,mob);
printf("proceeding-------------------------\n");
printf("Your Account is updated\n");
fclose(ptr);

}
if(change==3){
    gets(date);
    printf("Date:\n");
    gets(date);
    printf("Enter Your Address:\n");
    gets(add);
   printf("Enter Your name:\n");
scanf("%s",&name);
 printf("Enter Your Account Number:\n");
scanf("%ld",&account);
fprintf(ptr,"%s,%s,%s,%ld",date,name,add,account);
printf("proceeding-------------------------\n");
printf("Your Account is updated\n");
fclose(ptr);
rewind(ptr);
ptr=fopen("Bank_data.txt","r");
if(ptr==NULL)
{
    printf("Error\n");
}
else
{
while ((fscanf(ptr,"%s",ch))!=EOF)
{
    printf("\n%s\n",ch);
}
}
}
fclose(ptr);

}
void withdrawal(){
    int ammount;
    char bank[20],sign[15],ch[100];
    FILE *ptr;
    ptr=fopen("Bank_data.txt","w+");
    gets(date);
printf("Date:\n");
gets(date);
printf("Your bank name:\n");
gets(bank);
printf("Enter Your account Number:\n");
scanf("%ld",&account);
printf("Enter Your name\n");
scanf("%s",&name);
printf("Enter ammount for withdrawal:\n");
scanf("%d",&ammount);
printf("Your signature:\n");
scanf("%s",&sign);
fprintf(ptr,"%s,%s,%s,%s,%d,%ld",name,bank,sign,date,ammount,account);
printf("Proceeding---------------------------------\n");
printf("Please collect Your ammount:\n");
fclose(ptr);
   rewind(ptr);
   ptr=fopen("Bank_data.txt","r");
    if(ptr==NULL)
    {
        printf("Error\n");
    }
    else
    {
    while ((fscanf(ptr,"%s\n",ch))!=EOF)
    {
        printf("\n%s\n",ch);
    }
    }
    fclose(ptr);
}
void transfer(){
     FILE *ptr;
    int ammount;
    char sign[15],name1[20],name2[20],ch[100];
    long int acc1,acc2;
   
    ptr=fopen("Bank_data.txt","w+");
    printf("Enter your name:\n");
    scanf("%s",&name1);
    printf("Enter your Account number:\n");
    scanf("%ld",&acc1);
    printf("Enter the name of whose you want to transfer money:\n");
    scanf("%s",&name2);
    printf("Enter the name of whose you want to transfer money:\n");
    scanf("%ld",&acc2);
    printf("Enter the ammount:\n");
    scanf("%d",&ammount);
    printf("Your signature:\n");
    scanf("%s",&sign);
    fprintf(ptr,"%s,%s,%s,%d,%ld,%ld",name1,name2,sign,ammount,acc1,acc2);
    printf("Proceeding--------------------------------\n");
    printf("Your cash is successfully transfered to---------");
    fclose(ptr);
    rewind(ptr);
    ptr=fopen("Bank_data.txt","r");
    if(ptr==NULL)
    {
        printf("Error\n");
    }
    else
    {
    while ((fscanf(ptr,"%s\n",ch))!=EOF)
    {
        printf("\n%s\n",ch);
    }
    }
    fclose(ptr);
}
