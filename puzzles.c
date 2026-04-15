#include<stdio.h>

int main()
{
    int a,b,c,result;
    scanf("%d%d%d%d", &a, &b, &c, &result);

    if(a+b-c==result)
    {
        printf("YES");
    }
    else if(a-b+c==result)
    {
        printf("YES");
    }
    else if(a*b+c==result)
    {
        printf("YES");
    }
    else if(a*b-c==result)
    {
        printf("YES");
    }
    else if(a+b*c==result)
    {
        printf("YES");
    }
    else if(a-b*c==result)
    {
         printf("YES");
    }
    else
        printf("NO");
    return 0;
}