#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ID = 0, cont = 0;
    double idade = 0;
    int OP;
    double ot = 0, b = 0, re = 0, ru = 0, p = 0;
    while(ID >= 0) {
        scanf("%d", &ID);
        if(ID < 0) {
            break;
        }
        scanf("%d", &OP);
        if(OP > 5 || OP < 1) {
            while(OP > 5 || OP < 1) {
                scanf("%d", &OP);
            }
        }
        if(OP == 1) {
            ot++;
        }
        if(OP == 2) {
            b++;
        }
        if(OP == 3) {
            re++;
        }
        if(OP == 4) {
            ru++;
        }
        if(OP == 5) {
            p++;
        }
        cont++;
        idade += ID;
    }
    printf("qtde de participantes: %d\n", cont);
    printf("idade media dos participantes: %.1lf\n", (double)(idade / cont));
    printf("Otimo: %.1lf%%\n", (double)(ot / cont * 100));
    printf("Bom: %.1lf%%\n", (double)(b / cont * 100));
    printf("Regular: %.1lf%%\n", (double)(re / cont * 100));
    printf("Ruim: %.1lf%%\n", (double)(ru / cont * 100));
    printf("Pessimo: %.1lf%%\n", (double)(p / cont * 100));
    return 0;
}