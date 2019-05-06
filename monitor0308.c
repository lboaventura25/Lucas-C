#include <stdio.h>
#include <math.h>

int main() {
    int N, n;
    int inverso = 0;
    int mult;
    int cont = 0;
    scanf("%d" , &N);
    int L = N;
    while (L != 0) {
        L /= 10;
        cont++;
    }
    mult = pow(10, (cont - 1));
    while(N != 0) {
        n = N % 10;
        inverso +=  (n * mult);
        N /= 10;
        mult /= 10;
    }
    printf("%d\n", inverso);
    return 0;
}