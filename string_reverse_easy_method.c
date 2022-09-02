#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str[30];
    printf("Enter the string:");
   fgets(str,sizeof str,stdin);
   l=strlen(str);
   printf("real string is:");
   puts(str);
   printf("sapering string in reverse order:\n");
for(int i=(l-1);i>=0;i--)
{
    printf("%2c",str[i]);
}
printf("\n");
    return 0;
}