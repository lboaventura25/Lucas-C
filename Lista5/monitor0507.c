#include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
    int dif = 0;
    int i;

    for(i = 1; i < 5; i++) {
        dif = my_hand[i] - my_hand[i - 1];
        
        if(dif <= 0) {
            return 0;
        }
    }
    return 1;
}

void corrigir_contagem(int *my_hand){
    int ord = 5;
    int aux, cont;

    while (ord >= 1) {
        for (cont = 1; cont <= 5; cont++) {
            if (*(my_hand + cont - 1) > *(my_hand + cont)) {
                aux = *(my_hand + cont - 1);
                *(my_hand + cont - 1) = *(my_hand + cont);
                *(my_hand + cont) = aux;
            }
        }
        ord -= 1;
    }
}
  
int main(){
    int i, mao[5];
    for(i=0; i<5; ++i)
        scanf("%d", &mao[i]);

    if(conferir_contagem(mao))printf("Contagem Correta\n");

    else{
        printf("Contagem Incorreta\n");
        printf("Sequencia certa: ");
        corrigir_contagem(mao);
        for(i=0; i<5; ++i)
            printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
    }

    return 0;
}

//Função corrigir_contagem usando notação de vetor ao invés de ponteiro.

// int ord = 5;
//     int aux, cont;

//     while (ord > 1) {
//         for (cont = 1; cont <= 5; cont++) {
//             if (my_hand[cont] > my_hand[cont + 1]) {
//                 aux = my_hand[cont];
//                 my_hand[cont] = my_hand[cont + 1];
//                 my_hand[cont + 1] = aux;
//             }
//         }
//         ord -= 1;
//     }
