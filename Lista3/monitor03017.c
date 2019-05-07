#include <stdio.h>
#include <math.h>

int main() {
    int L, A, Vi, class, fast = 0;
    scanf("%d", &L);
    for(A = 0; A < L; A++) {
        scanf("%d", &Vi);
        if(Vi < 10) {
            class = 1;
        }
        if(Vi >= 10 && Vi < 20) {
            class = 2;
        }
        if(Vi >= 20) {
            class = 3;
        }
        if(class > fast) {
            fast = class;
        }
    }
    printf("%d\n", fast);
    return 0;
}