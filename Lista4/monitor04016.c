#include <stdio.h>
#include <string.h> //Biblioteca onde fica a função "strlen".

int main() {

    char string[110];
    int i, size, j;

    //Lê a String.
    scanf("%[^\n]", string);

    //Função que retorna o tamanho da String.
    size = strlen(string);

    //Lógica da troca de vogais.
    for(i = 0; i < 5; i++) {
        for(j = 0; j <= size; j++) {
            if(i == 0) {
                if(string[j] == 'a' ||
                string[j] == 'e' ||
                string[j] == 'i' ||
                string[j] == 'o' ||
                string[j] == 'u' ||
                string[j] == 'A' ||
                string[j] == 'E' ||
                string[j] == 'I' ||
                string[j] == 'O' ||
                string[j] == 'U') {
                    printf("a");
                }
                else {
                    printf("%c", string[j]);
                }
            }

            if(i == 1) {
                if(string[j] == 'a' ||
                string[j] == 'e' ||
                string[j] == 'i' ||
                string[j] == 'o' ||
                string[j] == 'u' ||
                string[j] == 'A' ||
                string[j] == 'E' ||
                string[j] == 'I' ||
                string[j] == 'O' ||
                string[j] == 'U') {
                    printf("e");
                }
                else {
                    printf("%c", string[j]);
                }
            }

            if(i == 2) {
                if(string[j] == 'a' ||
                string[j] == 'e' ||
                string[j] == 'i' ||
                string[j] == 'o' ||
                string[j] == 'u' ||
                string[j] == 'A' ||
                string[j] == 'E' ||
                string[j] == 'I' ||
                string[j] == 'O' ||
                string[j] == 'U') {
                    printf("i");
                }
                else {
                    printf("%c", string[j]);
                }
            }

            if(i == 3) {
                if(string[j] == 'a' ||
                string[j] == 'e' ||
                string[j] == 'i' ||
                string[j] == 'o' ||
                string[j] == 'u' ||
                string[j] == 'A' ||
                string[j] == 'E' ||
                string[j] == 'I' ||
                string[j] == 'O' ||
                string[j] == 'U') {
                    printf("o");
                }
                else {
                    printf("%c", string[j]);
                }
            }

            if(i == 4) {
                if(string[j] == 'a' ||
                string[j] == 'e' ||
                string[j] == 'i' ||
                string[j] == 'o' ||
                string[j] == 'u' ||
                string[j] == 'A' ||
                string[j] == 'E' ||
                string[j] == 'I' ||
                string[j] == 'O' ||
                string[j] == 'U') {
                    printf("u");
                }
                else {
                    printf("%c", string[j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}