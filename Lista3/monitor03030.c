#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int numero, base, num, digito, check = 0, cont = 0, i, n;
    int decimal = 0;
    int inverso = 0;
    int dig;

    scanf("%d %d", &numero, &base);

    num = numero;
    n = numero;

    while(num != 0) {
        digito = num % 10;

        if(digito >= base) {
            check = 1;
        }

        num = num / 10;
        cont++;
    }

    int mult = pow(10, (cont -1));

    while(n != 0) {
        dig = n % 10;
        inverso +=  (dig * mult);
        n /= 10;
        mult /= 10;
    }

    //printf("***** %d\n", cont);
    if(check == 0) {
        for(i = cont; i > 0; i--) {
            digito = inverso % 10;
            decimal += (digito*pow(base, (i - 1)));
            inverso = inverso / 10;
        } 
        printf("%d\n", decimal);
    }

    if(check == 1) {
        printf("ERROR\n");
    }

    return 0;
}
