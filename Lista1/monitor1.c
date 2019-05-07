#include <stdio.h>

int main() {
	double S = 0;
	scanf("%lf", &S);
	double N = (S*0.25)+S;
	printf("%.2lf\n", N);
	return 0;
}
