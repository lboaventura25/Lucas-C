#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int A, B;
    float price = 0;

    scanf("%d %d", &A, &B);

    switch(A) {

        case 1:
            price += 5.00;
            break;

        case 2:
            price += 7.00;
            break;

        case 3:
            price += 7.50;
            break;

        case 4:
            price += 3.50;
            break;
        
        case 5:
            price += 3.00;
            break;
    }

    switch(B) {

        case 1:
            price += 5.00;
            break;

        case 2:
            price += 7.00;
            break;

        case 3:
            price += 7.50;
            break;

        case 4:
            price += 3.50;
            break;
        
        case 5:
            price += 3.00;
            break;
    }

    printf("Total: R$ %.2f\n", price);

    return 0;
}