#include<stdio.h>

int main()
{
    int pass;
    while(scanf("%d",&pass))
    {
        if(pass==9999)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}