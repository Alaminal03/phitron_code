
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int array[n];
    int x, y;
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d%d", &x, &y);
    for (int i = n - 1; i >= 0;i--)
    {
        if(x==i)
        {
            printf("%d ",y);
        }
        else
        {
            printf("%d ", array[i]);
        }
    }

        return 0;
}