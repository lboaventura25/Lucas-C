#include <stdio.h>
#include <math.h>

int main() {

    long int N = -2, a;
    int x, fat = 1, g, cont = 0, check = 0;
    while(N < 0) {
        scanf("%ld", &N);
        if(N == 0) {
            fat = 1;
        }
        if(N > 0) {
            for(x = 1; x <= N; x++) {
                fat *= x;
            }
            for(a = 1; a < fat; a++) {
                for(g = 1; g <= a; g++) {
                    if(a % g == 0) {
                        cont++;
                    }
                }
                if(cont == 2) {
                    printf("%ld ", a);
                    check = 1;
                }
                cont = 0;
            } 
        }
        if(check == 0) {
            printf("NENHUM PRIMO");
        }
    }
    printf("\n");
    return 0;
}