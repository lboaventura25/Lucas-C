#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int numeroEntrada, resto, i = 0, cont = 0;
    int numbers[100] = {};

    scanf("%d", &numeroEntrada);

    while(numeroEntrada != 0) {
        resto = numeroEntrada % 16;
        numbers[i] = resto;
        numeroEntrada /= 16;
        i++;
        cont++;
    }

    for(i = (cont - 1); i >= 0; i--) {

        if(numbers[i] == 10) {
            printf("A");
        }
        else if(numbers[i] == 11) {
            printf("B");
        }
        else if(numbers[i] == 12) {
            printf("C");
        }
        else if(numbers[i] == 13) {
            printf("D");
        }
        else if(numbers[i] == 14) {
            printf("E");
        }
        else if(numbers[i] == 15) {
            printf("F");
        }
        else if(numbers[i] < 10) {
            printf("%d", numbers[i]);
        }
    }

    return 0;
}
