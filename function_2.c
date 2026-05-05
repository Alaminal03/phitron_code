#include<stdio.h>

void calculator(int a,int b)
{
    int sum = a + b;
    printf("%d", sum);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    calculator(a, b);
    return 0;
}