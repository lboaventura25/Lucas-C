#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[300];
    int cont = 0, i, A;

    for(i = 0; i < 300; i++) {
        scanf("%d", &A);

        if(A < 0) {
            break;
        }

        numbers[i] = A;
        cont ++;
    }

    for(i = cont; i > 0; i--) {
        printf("%d ", numbers[i-1]);
    }

    printf("\n");

    return 0;
}