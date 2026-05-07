#include<stdio.h>

void fun(int *p)
{
    *p = 20;
     printf("%d\n", *p);
     printf("global function er variable er address %p\n", &p);
}

int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    printf("main function er variable er address %p\n", &x);
    return 0;
}