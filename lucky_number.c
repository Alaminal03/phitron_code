#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);


    int div, rem;
    div = num / 10;
    rem = num % 10;
    if(rem==0)
    {
        printf("YES");
    }
    else
    {
    if((div%rem==0)||(rem%div==0))
    {
        printf("YES");
    }
    
    else
        printf("NO");
    }

    return 0;
}