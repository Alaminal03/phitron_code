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
        if(array[i]==0)
        {
            count[0]++;
        }
        else if(array[i]==1)
        {
            count[1]++;
        }
        else if(array[i]==2)
        {
            count[2]++;
        }
        else if(array[i]==3)
        {
            count[3]++;
        }
        else if(array[i]==4)
        {
            count[4]++;
        }
        else if(array[i]==5)
        {
            count[5]++;
        }
    }

    printf("%d -> %d\n", 0, count[0]);
    printf("%d -> %d\n", 1, count[1]);
    printf("%d -> %d\n", 2, count[2]);
    printf("%d -> %d\n", 3, count[3]);
    printf("%d -> %d\n", 4, count[4]);
    printf("%d -> %d\n", 5, count[5]);


}