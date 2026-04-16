
#include <stdio.h>

int main() {
    int n,pos_sum = 0,neg_sum= 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

    }
    for (int i = 0; i < n;i++)
    {
        if(array[i]>=0)
        {
            pos_sum = pos_sum + array[i];
        }
        else
        {
            neg_sum = neg_sum + array[i];
        }
    }
    printf("%d ", pos_sum);
    printf("%d", neg_sum);

    return 0;
}