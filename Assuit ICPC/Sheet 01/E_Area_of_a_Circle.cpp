#include <stdio.h>

int main()
{
    double R;
    double pi = 3.141592653;

    scanf("%lf", &R);

    double area = pi * R * R;

    printf("%.9lf\n", area);

    return 0;
}
