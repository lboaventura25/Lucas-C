#include <stdio.h>
#include <stdlib.h>

int main() {

    int numbers[121];
    int cont = 0, i;
    double media = 0.0, dispercao;

    for(i = 0; i < 121; i++) {
        scanf("%d", &numbers[i]);
        media += numbers[i];
        cont++;
    }

    media = (double)(media / cont);

    for( i = 0; i < 121; i++) {
        dispercao = (double)((numbers[i] - media)*(numbers[i] - media));
        printf("%.1lf ", dispercao);
    }

    printf("\n");

    return 0;
}