#include <stdio.h>

int main () {
    int numbers[200];
    int cont = 0, i, x;

    for(i = 0; i < 200; i++) {
        scanf("%d", &numbers[i]);
        cont++;
    }

    for(x = cont; x > 0; x--){
        printf("%d ", numbers[x-1]);
    }

    printf("\n");

    return 0;
}