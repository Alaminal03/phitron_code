#include<stdio.h>

void movezeros(int a, int b[])
{
    for (int i = 0; i < a;i++)
    {
        if(b[i] !=0)
        {
            printf("%d ", b[i]);
        }
    }

    for (int i = 0; i < a;i++)
    {
        if(b[i]==0)
        {
            printf("%d ", b[i]);
        }
    }
}

    int main()
{
    int n;
    scanf("%d", &n);

   int value[n];

   for (int i = 0; i < n;i++)
   {
       scanf("%d", &value[i]);
   }
   movezeros(n, value);

   return 0;
}