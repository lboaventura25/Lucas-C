#include <stdio.h>

int main() {
	
	double S, A;

	scanf("%lf %lf", &S, &A);

	double more = S * A / 100;

	double salary = S + more;

	printf("%.2lf %.2lf\n", more, salary);

	return 0;
}
