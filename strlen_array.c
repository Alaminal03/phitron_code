#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    scanf("%s", name);

    int size = strlen(name);
    printf("%d", size);

    return 0;
}