#include<stdio.h>
int main()
{
    int choice;
    float kilogram,gram,kg,g;
    void kg_g ()
    {
    printf("Press 1 for converting kg to gram:\n");
    printf("Press 2 for converting gram to kg:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter the kg value which you want to convert in gram:\n");
        scanf("%f",&kg);
        gram=1000*kg;
        printf("%.1f :g\n",gram);
    }
    if(choice==2)
    {
        printf("Enter the gram value which you want to convert in kg:\n");
        scanf("%f",&g);
        kilogram=g/1000;
        printf("%.1f :kg\n",kilogram);
    }
    }
    return 0;
}