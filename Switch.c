#include<stdio.h>
int main()
{
int i=65;
char ch='B';
switch (ch,i)  //because comma operator is used so expression will execute left to right and last expression will evaluate
{
case 65:
    printf("Integer");
    break;
case 'B':
    printf("char");
    break;

default:
printf("error");   // so this program will execute (case 65) because it is last expression in right side of comma operator , comma operator executes expression left to right and than print the last right expression 
    break;
}
    return 0;
}