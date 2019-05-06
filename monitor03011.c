#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int N, L, maior = 0, menor = 10000000;
    int A;

    scanf("%d", &N);

    for(A = 0; A < N;A++) {

        scanf("%d", &L);

        if(L > maior) {
            maior = L;
        }

        if(L < menor) {
            menor = L;
        }

    }

    printf("Menor: %d\nMaior: %d\n", menor, maior);

    return 0;
}