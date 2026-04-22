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

    int m;
    scanf("%d", &m);
    int arr[m];

    for (int i = 0; i < m;i++)
    {
        scanf("%d", &arr[i]);
    }

    int total[n + m];
    for (int i = 0; i < n;i++)
    {
        total[i] = array[i];
    }
    for (int i = 0; i < m;i++)
    {
        total[i + n] = arr[i];
    }
    for (int i = 0; i < n + m;i++)
    {
        printf("%d ", total[i]);
    }

        return 0;
}