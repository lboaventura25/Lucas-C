#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int A, B, i,auxa1, auxa2;

    scanf("%d %d", &A, &B);

    auxa1 = A;
    auxa2 = B;

    for(i = 0; auxa1 != auxa2; i++) {

        auxa1 += 2;
        auxa2 += 3;
    }

    printf("%d\n", i);

    return 0;
}
