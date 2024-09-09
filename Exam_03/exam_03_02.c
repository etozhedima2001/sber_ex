#include <stdio.h>
#include <math.h>

int main() {
	double n;
	char c;
	if(scanf("%lf%c", &n, &c) != 2 || c != '\n') {
	printf("n/a");
	return 1;
}
	double rad = 57.29;
	double res = round(n * rad);
	printf("%.0lf", res);
	return 0;
}
