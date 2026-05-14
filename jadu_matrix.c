#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int array[x][y];

    if(x==y)
    {
        for (int i = 0; i < x;i++)
        {
            for (int j = 0; j < y;j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
    }
    else
    {
        printf("NO");
    }

    int count = 0;

    for (int i = 0; i < x;i++)
    {
        for (int j = 0; j < y;j++)
        {
            if (i == j || i + j == x - 1)
            {
                if (array[i][j] != 1)
                {
                    count++;
                }
            }
            else
            {
                if (array[i][j] != 0)
                {
                    count++;
                }
            }

        }
    }
   if (count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
        return 0;
}