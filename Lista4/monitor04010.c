#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int numbers[28];
    int i, cont = 0;
    double media = 0.0, variancia = 0.0, desvpad;

    for(i = 0; i < 28; i++) {
        scanf("%d", &numbers[i]);
        cont++;
        media += numbers[i];
    }

    media = (double)(media / cont);

    for(i = 0; i < 28; i++) {
        variancia += (double)(((numbers[i] - media)*(numbers[i] - media))/ cont);
    }

    desvpad = (double)(sqrt(variancia));

    printf("%.1lf\n%.1lf\n", variancia, desvpad);

    return 0;
}