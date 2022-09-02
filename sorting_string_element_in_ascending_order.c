#include<stdio.h>
#include<string.h>
void main()
{
int a;
char str[30],temp=0;
printf("Enter the string:\n");
scanf("%s",&str);
a=strlen(str);
printf("length of string is:%d\n",a);
printf("\nYour entered string is:\n");
for(int i=0;i<a;i++)
{
    printf("%c",str[i]);
}
for(int i=0;i<a;i++)
{
  for(int j=i+1;j<a;j++)
  {
    if(str[i]>str[j])
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
  }
}
printf("\n\nSorted string is:\n");
for(int i=0;i<a;i++)
{
    printf("%c",str[i]);
}
}


