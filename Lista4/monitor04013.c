#include <stdio.h>
#include <string.h> //Biblioteca onde fica a função "strlen".

int main() {
    char letters[81];
    int cont = 0;

    //Lê a String até a quebra de linha.
    scanf("%[^\n]", letters);

    //"strlen"=> Função que diz qual o tamanho da string.
    cont = strlen(letters);

    //Imprime a quantidade de caracteres na String.
    printf("%d\n", cont);

    return 0;
}