#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[106];
    int i, cont = 0, lim, add = 0, X;

    for(i = 0; i < 106; i++) {
        scanf("%d", &X);

        if( X == 0) {
            break;
        }

        numbers[i] = X;
        cont++;
    }

    scanf("%d", &lim);

    for(i = 0; i < cont; i++) {

        if(numbers[i] <= lim) {
            add += numbers[i];
        }
    }

    printf("%d\n", add);

    return 0;
}