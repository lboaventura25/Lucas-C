#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[53];
    int i, cont = 0, lim, conta = 0;
    double media = 0.0;

    for(i = 0; i < 53; i++) {
        scanf("%d", &numbers[i]);
        cont++;
    }

    scanf("%d", &lim);

    for(i = 0; i < cont; i++) {
        
        if(numbers[i] <= lim) {
            media += numbers[i];
            conta++;
        }
    }

    printf("%.1lf\n",(double)(media / conta));

    return 0;
}