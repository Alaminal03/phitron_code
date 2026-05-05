#include<stdio.h>

int sum(int a,int b)
{
    int ans = a + b;
    return ans;
}

int main()
{
    int ans = sum(10, 50);
    int ans2 = sum(40, 50);

    printf("SUM = %d\nSUM = %d", ans,ans2);
    return 0;
}