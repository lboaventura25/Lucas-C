#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int Q = 1;
    double PR = 1;
    double price = 0;
    while(Q > 0) {
        scanf("%d", &Q);
        if(Q <= 0) {
            break;
        }
        scanf("%lf", &PR);
        if(PR < 0) {
            while(PR < 0) {
                scanf("%lf", &PR);
            }
        }
            price += (Q*PR); 
    }
    printf("%.2lf\n", price);
    return 0;
}
