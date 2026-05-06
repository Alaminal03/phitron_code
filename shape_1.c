#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;

    for (int i = 1; i <= n;i++)
    {
        for (int k = 1; k <=star;k++)
        {
            printf("*");
        }
        printf("\n");
        star--;
        }

        return 0;
}