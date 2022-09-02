#include <stdio.h>
int main()
{
    int n;
    char arr[100][100],c;
    FILE *ptr;
    printf("How many lines do you want to write into the file?");
    scanf("%d", &n);
    printf("Enter Your line:\n");
    ptr = fopen("my_file.txt", "w+");
    for (int i = 0; i <=n; i++)
    {
        fgets(arr[i], 100, stdin);
        fputs(arr[i], ptr);
    }
   for (int i = 0; i <=n; i++)
    {
        fgets(arr[i],100,ptr);
        puts(arr[i]);
    }


    return 0;
}