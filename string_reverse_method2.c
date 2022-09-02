#include<stdio.h>
#include<string.h>
int s=0;
char str1[20];
void rev(char[],int,int);
int main()
{
    int a,b;
    char str[20];
    printf("Enter the string:");
    scanf("%s",&str);
    a=strlen(str);
    b=(a-1);
    printf("\nlength of string is:%d\n",a);
    printf("\nReal string is:%s\n",str);
    printf("\nReversed string is:");
  
    rev(str,a,b);
    return 0;
}
void rev(char str[],int a,int b)
{
   
    if(b>=0)
    {
    if(s<a)
    {
       str1[s]=str[b];
    printf("%c",str1[s]);
    s++;
  
    rev(str,a,b-1);
    }
    printf("\n");
    }

}
 