
#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);
    int m1[t], m2[t], d1[t];
    int d2[t];

    for (int i=0;i<t;i++)
        {
            scanf("%d%d%d", &m1[i], &m2[i], &d1[i]);
            
        }
        for (int i = 0; i < t;i++)
        {
            d2[i] = (m1[i] * d1[i]) / (m1[i] + m2[i]);
            d2[i] = d1[i] - d2[i];
            printf("%d\n", d2[i]);
        }

            return 0;
}