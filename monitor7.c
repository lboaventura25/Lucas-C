#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float P;
    float H;
    scanf("%f %f", &P, &H);
    //float imc = (P / (H*H));
    if((P / (H*H)) < 20) {
        printf("ABAIXO\n");
    }
    if((P / (H*H)) >= 20 && (P / (H*H)) < 25) {
        printf("NORMAL\n");
    }
    if((P / (H*H)) >= 25 && (P / (H*H)) < 30) {
        printf("SOBREPESO\n");
    }
    if((P / (H*H)) >= 30 && (P / (H*H)) < 40) {
        printf("OBESO\n");
    }
    if((P / (H*H)) >= 40) {
        printf("MORBIDO\n");
    }
    return 0;
}