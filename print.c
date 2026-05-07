#include<stdio.h>

int function(int a)
{
    for (int i = 0; i < a;i++)
    {
        printf("%d", i+1);
         printf(" ");
    }
   
}

int main()
{

    int n;
    scanf("%d", &n);
    function(n);
    return 0;
}