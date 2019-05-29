#include <stdio.h>

int main() {

    int array[8][8], SD = 0, SL, somaL[8], i, j, n;
    int resto[8], restomaior = 0;

    //MONTAGEM DO ARRAY
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    //SOMA DA DIAGONAL PRINCIPAL
    for (i = 0; i < 8; i++) {
        j = i;
        SD += array[i][j];
    }

    //SOMA DE CADA LINHA
    for (i = 0; i < 8; i++) {
        SL = 0;
        for (j = 0; j < 8; j++) {
            SL += array[i][j];
        }
        somaL[i] = SL;
    }

    //Calculo do Resto
    for (i = 0; i < 8; i++) {
        resto[i] = somaL[i] % SD;
    }

    //Comparações
    for (i = 0; i < 8; i++) {
        if (resto[i] >= restomaior) {
            restomaior = resto[i];
            n = i;
        }
    }

    printf("%d", n);

    return 0;
}

// 83 89 91 60 20 83 40 75
// 12 14 36 43 43 11 90 33
// 15 74 90 79 40 85 77 63
// 74 69 38 49 76 29 13 43
// 26 89 59 48 70 65 59 93
// 18 59 96 73 36 51 37 44
// 25 45 33 48 42 31 46 46
// 98 95 88 67 74 38 37 68