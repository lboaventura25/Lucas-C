#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double soma = 0;
    double cont = 0;
    int Y;

    while(Y >= 0) {

        scanf("%d", &Y);

        if(Y >= 0) {
            cont++;
            soma += Y;
        }
    }

    printf("%.0lf\n%.1lf\n", soma, (double)(soma/cont));

    return 0;
}
