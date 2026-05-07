
#include <stdio.h>
#include<string.h>

int is_palindrome(char name[]) 
{
    int count = 0;
    int length = strlen(name)-1;
    int k = 0;

    for (int i = length; i >= 0;i--)
    {
            if(name[i] != name[k]) 
            {
                count++;
            }
            k++;
    }


    // if(count == 0)
    // {
    //     printf("Palindrome");
    // }
    // else
    // {
    //     printf("Not Palindrome");
    // }

    return count;
}

int main() 
{
    char name[1000];
    scanf("%s", name);

   int count = is_palindrome(name); 

    if(count == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }


    return 0;
}