
#include <stdio.h>

int main() {

    int n,count2=0,count3=0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n;i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n;i++)
    {
        // if(array[i]%2==0&&array[i]%3==0)
        // {
        //     count2++;
        //     count3++;
        // }
        if(array[i]%2==0)
        {
            count2++;
        }
        else if(array[i]%3==0)
        {
            count3++;
        }
        
    }
    printf("%d %d", count2, count3);
    return 0;
}