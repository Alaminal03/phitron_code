#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int rows = 5 + (N + 1) / 2;
    int width = 2 * rows - 1;

    for (int i = 1; i <= rows; i++) 
    {
        int stars = 2 * i - 1;
        
        int spaces = (width - stars) / 2;
        
        for (int s = 0; s < spaces; s++) 
        {
            printf(" ");
        }    
        
        for (int s = 0; s < stars; s++) 
        {
            printf("*");
        }
        printf("\n");
    }

    int t_spaces = (width - N) / 2;
    
    
    for (int i = 0; i < 5; i++) 
    {
        for (int s = 0; s < t_spaces; s++) 
        {
            printf(" ");
        }   
        for (int s = 0; s < N; s++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}