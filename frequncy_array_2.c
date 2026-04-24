#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &array[i]);
    }
    int count[6] = {0};
    for (int i = 0; i < n;i++)
    {
        count[array[i]]++;
    }

    for (int i = 0; i < 6;i++)
    {
        printf("%d -> %d\n", i, count[i]);
    }
}