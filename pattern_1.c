#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;

    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= space;j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=star;k++)
        {
            if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
    star += 2;
    space--;
    }
    star -= 4;
    space+=2;

    for (int i = n-1; i >=1;i--)
    {
        for (int j = space; j >= 1;j--)
        {
            printf(" ");
        }
        for (int k = star; k >=1;k--)
        {
            if(i%2==1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
    star -= 2;
    space++;
    }
    

    return 0;
}