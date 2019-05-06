#include <stdio.h>
#include <string.h>

int main () {

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    double media = (double)(A + B + C) / 3;

    printf("%.1lf\n", media);

    return 0;
}
