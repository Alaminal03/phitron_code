#include<stdio.h>

int main()
{
    int n,count=0;
    scanf("%d", &n);

    int value[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &value[i]);
    }
    int num;
    scanf("%d", &num);

    for (int i = 0; i < n - 1;i++)
    {
        for (int k = i + 1; k < n;k++)
        {
           if(value[i]+value[k]==num)
            {
                count++;
            
            }
        }
    }

    if(count==0)
    {
        printf("NO\n");
    }
    else 
    {
        printf("YES");
    }

        return 0;
}
