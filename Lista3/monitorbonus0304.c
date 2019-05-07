#include <stdio.h>

    int fat(int);

int main() {
    int N = 0;
    scanf("%d", &N);
    int sum = fat(N);
    if(sum == -1) {
        printf("nao existe\n");
    }
    else {
        printf("%d\n", sum);
    }
    return 0;
}

    int fat(int n) {
        if(n == 0) {
            return 1;
        }
        if(n < 0) {
            return -1;
        }
        return n * fat(n - 1);
    }