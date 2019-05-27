#include <stdio.h>

int main() {

    int matriz[15][5];
    int i, j, menor = 1000000;

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] <= menor) {
                menor = matriz[i][j];
            }

        }
        for(j = 0; j < 5; j++) {
            matriz[i][j] -= menor;
        }
        menor = 1000000;
    }

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 5; j++) {
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Exemplo da Questão
// 35 75 39 76 50
// 48 65 54 46 91 
// 43 59 83 20 32
// 59 97 14 35 87 
// 14 10 89 18 82
// 54 29 32 26 80
// 60 34 72 49 66
// 47 18 86 58 29
// 65 76 56 19 73
// 55 48 92 93 13
// 62 80 78 55 28
// 60 18 15 87 92
// 31 84 93 12 97
// 45 17 12 97 99
// 58 15 21 14 16