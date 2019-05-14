#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[135];
    int limite_inferior, limite_superior;
    int i;

    for(i = 0; i < 135; i++) {
        scanf("%d", &numbers[i]);
    }

    scanf("%d %d", &limite_inferior, &limite_superior);

    for(i = 0; i < 135; i++) {

        if(numbers[i] < limite_inferior || numbers[i] > limite_superior) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}