#include <stdio.h>

int main() {
    int N = 0;
    int A = 0;
    int sum = 0;
    scanf("%d", &N);
    while(A <= N) {
        sum += A;
        A++;
    }
    printf("%d\n", sum);
    return 0;
}