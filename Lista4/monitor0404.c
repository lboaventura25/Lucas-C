#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[87];
    int cont = 0, i, X, lim;

    for( i = 0; i < 87; i++) {
        scanf("%d", &X);

        if(X == 0) {
            break;
        }

        numbers[i] = X;
        cont++;
    }

    scanf("%d", &lim);

    for(i = 0; i < cont; i++) {

        if(numbers[i] > lim) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}