#include <stdio.h>
#include <stdlib.h>

int func(const void *a, const void *b)
 {
    return *(int *)a - *(int *)b;
}

int main() 
{
    int T, N, A[1000], B[1000];

    scanf("%d", &T);

    while (T--)
     {
        scanf("%d", &N);

        for (int i = 0; i < N; i++) scanf("%d", &A[i]), B[i] = A[i];

        qsort(B, N, sizeof(int), func);

        for (int i = 0; i < N; i++) printf("%d ", abs(A[i] - B[i]));

        printf("\n");
    }
}