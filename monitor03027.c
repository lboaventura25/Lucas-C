#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double x, y, s1 =0, s2 =0, s3 =0, s4 =0, s5 =0, s6 =0, s7 =0, p;
    int i;

    for(i = 1; i <= 10; i++) {
        scanf("%lf %lf", &x, &y);

        s1 += (x * y);
        s2 += (x);
        s3 += (y);
        s4 += (x*x);
        s5 += (x);
        s6 += (y*y);
        s7 += (y);
    }

    p = (((10*s1)-(s2*s3))/((sqrt(((10*s4)-(s5*s5))))*(sqrt((10*s6)-(s7*s7)))));

    printf("%.2lf\n", p);

    return 0;
}