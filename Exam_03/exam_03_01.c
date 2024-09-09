#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int P = 21500;
	if(scanf("%d", &n) != 1) {
	printf("n/a");
	return 1;
}
	double V = (double)(4.0/3.0) * M_PI * pow(n, 3);
	double m = round(P * V);
	printf("%.0lf", m);
	return 0;
}
