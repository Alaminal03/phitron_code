#include<stdio.h>

int main()
{
    int a, b, tamp;

    scanf("%d%d", &a, &b);

    tamp = a;
    a = b;
    b = tamp;

    printf("%d %d ", a, b);

    return 0;
}