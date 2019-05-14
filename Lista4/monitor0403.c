#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[150];
    int i, cont = 0, lim;

    for(i = 0; i < 150; i++) {
        scanf("%d", &numbers[i]);
        cont++;
    }

    scanf("%d", &lim);

    for(i = 0; i < cont; i++) {
        if(numbers[i] <= lim) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
    
    return 0;
}