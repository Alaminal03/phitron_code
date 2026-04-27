#include<stdio.h>

double traingle_area(double b,double h)
{
    return 0.5 * b * h;
}

int main()
{
    double base, height;
    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter height = ");
    scanf("%lf", &height);

    double area = traingle_area(base, height);
    printf("Area = %lf", area);
}