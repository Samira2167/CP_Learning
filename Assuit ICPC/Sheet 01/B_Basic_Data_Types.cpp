#include <stdio.h>

int main()
{
    int x;
    long long y;
    char ch;
    float p;
    double q;

    scanf("%d %lld %c %f %lf", &x, &y, &ch, &p, &q);

    printf("%d\n", x);
    printf("%lld\n", y);
    printf("%c\n", ch);
    printf("%.2f\n", p);   // FIXED
    printf("%.1lf\n", q);  // FIXED

    return 0;
}
