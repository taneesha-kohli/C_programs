#include<stdio.h>
#define preprocessor(n) printf("my name is =%s",macro##n)
int main()
{

char macroname[10]="Shivani";
preprocessor(name);
    return 0;
}
