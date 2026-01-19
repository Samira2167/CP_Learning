#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int x = A, y = B, z = C;

    if (x > y) { int t = x; x = y; y = t; }
    if (x > z) { int t = x; x = z; z = t; }
    if (y > z) { int t = y; y = z; z = t; }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
