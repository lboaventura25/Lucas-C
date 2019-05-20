#include <stdio.h>

int main() {
    
    int X[10];
    int Y[10];
    int uniao[20] = {};
    int dif[10];
    int inter[10];
    int i, j, cont = 0, check = 0;

    //Laço que deixa todos os vetores = -100.
    for(i = 0; i < 10; i++) {
        X[i] = -100;
        Y[i] = -100;
        dif[i] = -100;
        inter[i] = -100;
    }

    //Leitura dos dois vetores X e Y.
    for(i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }

    for(i = 0; i < 10; i++) {
        scanf("%d", &Y[i]);
    }

    //Lógica da união dos vetores, sem repetições.
    for(i = 0; i < 10; i++) {
        for(j = 0; j < cont; j++) {
            if(X[i] == uniao[j]) {
                check = 10;
                break;
            }
        }
        if(check == 0) {
            uniao[cont] = X[i];
            cont++;
        }
        check = 0;
    }

    for(i = 0; i < 10; i++) {

        if(Y[i] == 0) {
            uniao[cont] = Y[i];
            cont++;
        }

        if(Y[i] != 0) {
            for(j = 0; j < cont; j++) {
                if(Y[i] == uniao[j]) {
                    check = 10;
                    break;
                }
            }
            if(check == 0) {
                uniao[cont] = Y[i];
                cont++;
            }
        }
        check = 0;
    }

    //Imprime o vetor União.
    for(i = 0; i < cont; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\n");
    cont = 0;

    //Lógica da diferença dos vetores, sem repetições.
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(X[i] == Y[j]) {
                check = 10;
                break;
            }
        }
        if(check == 0) {
            dif[cont] = X[i];
            cont++;
        }
        check = 0;
    }

    for(i = 0; i < cont; i++) {
        for(j = 0; j < cont; j++) {
            if(i != j) {
                if(dif[i] == dif[j]) {
                    dif[j] = -100;
                    break;
                }
            }
        }
    }

    //Imprime o vetor da diferença.
    for(i = 0; i < 10; i++) {
        if(dif[i] != -100) {
            printf("%d ", dif[i]);
        }
    }

    printf("\n");
    cont = 0;
    check = 0;

    //Lógica da intersecção dos vetores, sem repetições.
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(X[i] == Y[j]) {
                inter[cont] = X[i];
                cont++;
            }
        }
    }

    //Lógica para tirar as repetoções.
    for(i = 0; i < cont; i++) {
        for(j = 0; j < cont; j++) {
            if(i != j) {
                if(inter[i] == inter[j]) {
                    inter[j] = -100;
                    break;
                }
            }
        }
    }

    //Imprime o vetor da intersecção.
    for(i = 0; i < 10; i++) {
        if(inter[i] != -100) {
            printf("%d ", inter[i]);
        }
    }

    printf("\n");

    return 0;
}
