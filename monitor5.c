#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char op;
    double A, B, C;
    int aux, aux1;

    scanf("%c", &op);

    switch(op) {

        case '+':
            scanf("%lf %lf", &A, &B);
            printf("%.3lf", (A + B));
            break;

        case '-':
            scanf("%lf %lf", &A, &B);
            printf("%.3lf", (A - B));
            break;

        case '*':
            scanf("%lf %lf", &A, &B);
            printf("%.3lf", (A * B));
            break;

        case '/':
            scanf("%lf %lf", &A, &B);

            if(B != 0) {
                printf("%.3lf", (A / B));
            }
            else {
                printf("ERROR!");
            }

            break;

        case '%':
            scanf("%lf %lf", &A, &B);

            if(B != 0) {

                aux = A;
                aux1 = B;

                if(aux == A && aux1 == B) {

                    double mod = (double) (aux % aux1);

                    printf("%.3lf", mod);
                }

                else {
                    printf("ERROR!");
                    break;
                }
            }

            else {
                printf("ERROR!");
            }

            break;

        case 'p':
            scanf("%lf %lf", &A, &B);

            if(A < 0) {
                aux = B;

                if(aux == B) {
                    printf("%.3lf", pow(A, B));
                }

                else {
                    printf("ERROR!");
                }
            }

            else {
                printf("%.3lf", pow(A, B));
            }

            break;

        case 'b':
            scanf("%lf %lf %lf", &A, &B, &C);

            double delta = (B*B)-4*A*C;

			if (A != 0) {
                if(delta > 0) {

                    printf("%.3lf ", ((B*-1) + sqrt(delta)) / (2*A));
                    printf(" %.3lf", ((B*-1) - sqrt(delta)) / (2*A));
                }
                if(delta == 0) {
                    printf("%.3lf", (B*-1) / (2*A));
                }
            } 

            if(A == 0 || delta < 0) {
                printf("ERROR!");
            }

            break;

        case 'r':
            scanf("%lf", &A);

            if(A > 0) {
                printf("%.3lf", sqrt(A));
            }

            else {
                printf("ERROR!");
            }

            break;
    }

    return 0;
}