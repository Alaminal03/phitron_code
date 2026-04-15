#include<stdio.h>

int main()
{
    int num;
    int rem = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num;i++)
    {
        int val;
        scanf("%d", &val);
        if(val==0)
        {
            printf("%d", val);
        }
        else
        {
        while(val !=0)
        {
            rem = val % 10;
            printf("%d ", rem);
            val = val / 10;
        }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}