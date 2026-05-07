#include<stdio.h>

int sum(int a,int b)
{
    int add = a + b;
    return add;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int add =sum(a,b);

   
    printf("%d", add);

    return 0;
}