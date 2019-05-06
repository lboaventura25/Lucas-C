#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int t1, t2;
    double tc = 0;
    int i;

    scanf("%d %d", &t1, &t2);

    for(i = t1; i <= t2; i++) {

        tc = (double)((i - 32.0) * (5.0/9.0));
        printf("%d F : %.1lf C\n", i, tc);
    }

    return 0;
}