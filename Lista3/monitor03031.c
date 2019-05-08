#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
    
    int T, i, PA, PB, cont = 0, a, b;
    double G1, G2;

    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while(PA < PB) {
            a = PA*G1/100;
            b = PB*G2/100;
            PA += a;
            PB += b;
            cont++;
        }

        if(cont <= 100) {
            printf("%d anos.\n", cont);
        }

        if(cont > 100) {
            printf("Mais de 1 seculo.\n");
        }

        cont = 0;
    }

    return 0;
}