#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    int initmin, inith, finalmin, finalh, p1, p2, p3, t;
    int min = 0;
    int price = 0;
    
    scanf("%d %d", &A, &B);
    
    initmin = A % 100;
    int J = A / 100;
    
    inith = J % 100;
    finalmin = B % 100;
    
    int L = B / 100;
    finalh = L % 100;
    
    min = finalmin - initmin;
    int h = (abs(inith - finalh)) * 60;
    
    //printf("%d %d", min, h);
    
    int time = min + h;
    
    if(time <= 15) {
        price = 0;
    }
    if(time > 15 && time <= 60) {
        price = time * 30;
    }
    if(time > 60 && time <= 120) {
        t = time;
        p1 = 60 * 30;
        t -= 60;
        p2 = t * 20;
        price = p1 + p2;
    }
    if(time > 120) {
        t = time;
        p1 = 60 * 30;
        p2 = 60 * 20;
        t -= 120;
        p3 = t * 10;
        price = p1 + p2 + p3;
    }
    printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", inith, initmin, finalh, finalmin, time, price);
    return 0;
}
