#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    do {
        scanf("%d", &n);
        if(n < 0) break;
        if(n % 2 == 0) printf("%d: par\n", n);
        else printf("%d: impar\n", n);  
    } while(n >= 0);
    return 0;
}