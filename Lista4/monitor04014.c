#include <stdio.h>
#include <string.h> //Biblioteca onde fica a função "strlen".

int main() {
    char letters[101];
    int i;

    //Lê a String até a quebra de linha.
    scanf("%[^\n]", letters);

    /*"strlen"=> Função que diz qual o tamanho da string.
    Imprime a String reversa.*/
    for(i = strlen(letters); i >= 0; i--) {
        printf("%c", letters[i]);
    }

    return 0;
}