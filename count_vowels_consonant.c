#include<stdio.h>
int main()
{
    int i=0,vowel=0,consonant=0;
    char str[80];  //a e i o u vowels 
    printf("Enter the string:");
    fgets(str,80,stdin);
while(str[i]!='\0')
{
if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')||(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
{

 vowel++;
 }   

 else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
{

consonant++;
}
i++;
}
printf("\nvowels:%d\n",vowel);
printf("\nconsonant:%d\n",consonant);
    return 0;
} 