#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double D, TJ, ren;
    int M = 0;
    scanf("%lf %lf %d", &D, &TJ, &M);
    for(int A = 0; A < M; A++) {
        ren = D*TJ/100;
        D += ren;
        printf("Rendimento no mes %d: %.2lf\n", A, ren);
    }
    printf("Saldo final do investimento: %.2lf\n", D);
    return 0;
}