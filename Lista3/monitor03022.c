#include <stdio.h>
#include <math.h>

int main() {
    int N, code, maior_code, menor_code;
    double  venda, comi, maior = 0, menor = 10000000.0;
    for(N = 0; N < 10; N++) {
        scanf("%d %lf", &code, &venda);
        if(venda <= 5000) {
            comi = venda * 1.5 / 100.0;
        }
        if(venda > 5000 && venda < 15000) {
            comi = venda * 3.5 / 100.0;
        }
        if(venda >= 15000) {
            comi = venda * 4.7 / 100.0;
        }
        if(comi >= maior) {
            maior = comi;
            maior_code = code;
        }
        if(comi <= menor) {
            menor = comi;
            menor_code = code;
        }
    }
    printf("%d %.2lf %d %.2lf\n", maior_code, maior, menor_code, menor);
    return 0;
}