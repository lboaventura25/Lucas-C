#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double r, rs =0, rp =0, maior =-150000, media =0, dif;
    int i;
    
    for (i = 1; i <= 6; i++){
        scanf("%lf", &r);

        rs += r;

        if(r > maior) {
            maior = r;
        }
    }

    media = rs / 6;
    rp = (1/rs);
    dif = maior - media;

    printf("%.4lf %.4lf %.4lf\n", rs, rp, dif);

    return 0;
}