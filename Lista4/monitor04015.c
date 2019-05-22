#include <stdio.h>
#include <string.h> //Biblioteca onde fica a função "strlen".

int main() {

    char one[101], two[101];
    int size_one = 0, size_two = 0;
    int i, l = 0;

    //Lê as duas Strings.
    scanf("%[^\n]", &one[0]);
    getchar(); //Pega o Enter e joga fora, SEM ELE NÃO FUNCIONA.
    scanf("%[^\n]", &two[0]);

    //FUnção que Pega o tamanho das Strings.
    size_one = strlen(one);
    size_two = strlen(two);

    //Lógica de impressão das Strings intercaladas.
    for(i = 0; i < size_one; i++) {
        printf("%c", one[i]);
        while(l <= size_two) {
            if(i < size_one) {
                printf("%c", two[l]);
                l++;
                break;
            }

        }
    }
    
    for(i = l; i < size_two; i++) {
        printf("%c", two[i]);
    }

    return 0;
}