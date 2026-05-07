#include<stdio.h>

int  function(int a[],int n)
{
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n-1;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
            }
            if(a[j]>max)
            {
                max = a[j];
            }
        }
        
         
    }
     printf("%d %d", min, max);
   
}

int main()
{
    int n;
    scanf("%d", &n);
    int index[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &index[i]);
    }
    function(index, n);

    return 0;
}