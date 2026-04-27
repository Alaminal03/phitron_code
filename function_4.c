#include<stdio.h>

void calculatePower(double b,double e)
{
    double result = 1;

    for (int i = 1; i <= e; i++)
    {
        result = result * b;
    }
    printf(" Answer = %lf", result);
}

int main()
{
    double base, exp;
    printf("Enter Base = ");
    scanf("%lf", &base);

    printf("Enter Exponent = ");
    scanf("%lf", &exp);

     calculatePower(base, exp);
}