#include <stdio.h>
#include <stdlib.h>

int main() {

    int M[9][9], D1[9], D2[9];
    int i = 0, j = 0, l = 8, m = 0;
    int pos1 = 0, pos2 = 8;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (i == j) {
                D1[i] = M[i][j];
            }
        }
    }

    for (i = 9; i >= 0; i--) {
        for (j = 0; j < 9; j++) {
            if (i == l && j == m) {
                D2[i] = M[i][j];
                l--;
                m++;
            }
        }
    }

    l = 8;
    m = 0;

    printf("\n\n");

    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            if(i == j) {
                M[i][j] = D2[pos2];
                pos2--;
            }
        }
    }

    for(i = 8; i >= 0; i--) {
        for(j = 0; j < 9; j++) {
            if(i == l && j == m) {
                M[i][j] = D1[pos1];
                pos1++;
                l--;
                m++;
            }
        }
    }


    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Exemplos de entrada:

// 11 60 14 38 33 17 24 77 91
// 30 54 77 73 93 87 13 46 39
// 93 31 85 36 94 74 14 72 61
// 11 71 85 96 87 57 29 55 44
// 70 90 13 76 60 37 91 23 76
// 41 73 69 16 57 49 93 49 70
// 68 33 61 49 64 64 91 87 88
// 70 11 42 61 84 99 35 39 76
// 13 91 68 81 82 80 17 47 87

/////////////////////////////

// 54 84 71 68 61 95 16 48 20
// 23 29 58 80 44 63 39 86 27 
// 33 26 92 88 17 64 15 55 18   
// 51 28 14 30 15 70 38 90 40
// 18 86 14 56 43 22 60 56 21
// 59 39 88 19 43 80 57 40 46
// 91 64 69 94 41 34 84 96 10
// 73 60 18 81 69 26 21 97 78
// 48 28 32 84 88 24 52 95 42
