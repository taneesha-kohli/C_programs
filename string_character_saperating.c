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
   printf("after saperating character of this string:\n");
for(int i=0;i<l;i++)
{
    printf("%2c",str[i]);
}
    return 0;
}