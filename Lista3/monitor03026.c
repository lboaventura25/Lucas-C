#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double deposm, depost = 0, rendm = 0, rendt = 0;
    for(i = 1; i <= 12; i++) {
        scanf("%lf", &deposm);
        depost += deposm + rendm;
        if(depost < 10000) {
            rendm = depost * 1.75 / 100.0;
        }
        if(depost >= 10000) {
            rendm = depost * 2.25 / 100.0;
        }
        rendt += rendm;
        //depost += rendm;
    }
    printf("%.2lf\n", rendt);
    return 0;
}