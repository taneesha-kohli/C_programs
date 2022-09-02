#include<stdio.h>
int main()
{
    char *str="ABCD";
    switch (*str+2) // we know *str is pointer string , str is holding the first character of string mean *str=A *str+1=B *str+2=C so the case of c will execute
    {
    case 'A':
printf("A will execute");
        break;
    case 'B':
printf("B will execute");
        break;
    case 'C':
printf("C will execute"); // we know c will execute , because in switch expression we have pointer string
        break;
    
    default:
    printf("Nothing will execute");
        break;
    }
    return 0;
}