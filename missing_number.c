#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

   while(t--)
   {
       int m, a, b, c;
       scanf("%d%d%d%d", &m, &a, &b, &c);

       int x;
       x = a * b * c;
       if(m==0)
       {
           printf("0\n");
       }
       else{
        if(m%x==0)
        {
            printf("%d\n", m / x);
        }
        else{
            printf("-1\n");
        }
       }
   }


    

        return 0;
}