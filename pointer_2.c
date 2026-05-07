#include<stdio.h>

int fun(int x)
{
    x = 20;
     printf("%d\n", x);
     printf("global function er variable er address %p\n", &x);
}

int main()
{
    int x = 10;
    fun(x);
    printf("%d\n", x);
    printf("main function er variable er address %p\n", &x);
    return 0;
}