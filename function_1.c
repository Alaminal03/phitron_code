#include<stdio.h>

void value(int a,int b)
{
    printf("%d\n", a + b);
}
void result(int a,int b)
{
    printf("%d\n", a - b);
}

int main()
{
    value(400, 200);
    result(60, 80);

    return 0;
}