#include<stdio.h>
int main()
{
    int i=0,vowel=0,consonant=0;
    char str[50],*ptr; //
    printf("Enter the string: ");
    fgets(str,50,stdin);
    ptr=str;   
    while(*ptr!='\0')
    {
if((*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')||(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'))
{
vowel++;
}
else if((*ptr>='a'&&*ptr<='z')||(*ptr>='A'&&*ptr<='Z'))
{
    consonant++;
}
  ptr++;
    }
    printf("\nVOWELS:%d\n",vowel);
    printf("\nCONSONANT:%d\n",consonant);
    return 0;
}