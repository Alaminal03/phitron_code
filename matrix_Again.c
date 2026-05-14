#include<stdio.h>

int main()
{
    int x ,  y;
     scanf("%d %d", &x, &y);

       int a[x][y];

  
       for (int i = 0; i < x; i++)

    {
        for (int j = 0; j < y; j++)

        {
            scanf("%d", &a[i][j]);

        }


    }

      for (int j = 0; j < y; j++)

    {
        printf("%d ", a[x-1][j]);


    }

        printf("\n");


      for (int i = 0; i < x; i++)
    {
         printf("%d ", a[i][y-1]);


    }

    return 0;
}