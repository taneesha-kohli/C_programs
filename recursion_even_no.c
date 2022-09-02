#include<stdio.h>
int a=1;
void range (int);
int main()
{
    int r;
    printf("till where you want to print the numbers?\n");
    scanf("%d",&r);
    range(r);
    return 0;
}
void range(int r)
{
    int series;
    if(a<=r)
    {
        if(a%2==0)
        {
    series=a;
    printf("%3d",series);
        }
    a++;
    range(r);
        }
    }

