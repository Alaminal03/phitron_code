#include<stdio.h>

void hello(int i)
{
    printf("%d\n", i);
    hello(i);
}
int main()
{
    int i = 1;
    hello(i);
    return 0;
}