#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    fgets(name, 20, stdin);
    printf("%s", name);


    return 0;
}