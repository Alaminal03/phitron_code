#include<stdio.h>

int main()
{
    int n,count=0;
    scanf("%d", &n);
    int array[n];

    for (int j = 0; j < n;j++)
    {
        scanf("%d", &array[j]);
    }
    for (int i = 0; i < n;i++)
    {
        array[i] != array[n-i-1];
        count++;
    }
    if(count==1)
    {
        printf("Not");
    }
    else
    {
        printf("Yes");
    }
    

    return 0;
}