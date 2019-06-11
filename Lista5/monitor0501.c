#include <stdio.h>
#include <string.h> 

void extraiSobrenome(char *, char *); 

int main() { 
    char nome[30]; 
    char sobrenome[30];

    scanf("%s", nome);
    extraiSobrenome(nome, sobrenome);

    printf("Nome\n%s\nSobrenome\n%s\n", nome, sobrenome);

    return 0; 
}

void extraiSobrenome(char *name, char *sobre) {

    int i, pos, a;
    char Sobrenome[30];

    for(i = 0; i < 30; i++) {
        if(*(name + i) == '_') {
            pos = i;
            break;
        }
    }

    for(i = (pos + 1), a = 0; *(name + i) != '\0'; i++, a++) {
        *(sobre + a) = *(name + i);
    }

    *(name + pos) = '\0';
    *(Sobrenome + a) = '\0';
}


