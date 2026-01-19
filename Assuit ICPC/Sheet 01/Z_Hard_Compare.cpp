#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if ((double)A * B > (double)C * D)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
