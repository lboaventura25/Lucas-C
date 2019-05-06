#include <stdio.h>

int main() {
    int A = 0;
    int S = 0;
    int T = 0;
    while(A >= 0) {
        scanf("%d", &A);
        if(A >= 0) {            
            T++;
            S += A;
        }
    }
    double media = (double)S/T;
    printf("%d\n%.1lf\n", S, media);
    return 0;
}