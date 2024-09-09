#include <stdio.h>

int main() {
	int n;
	char c;
	if(scanf("%d%c", &n, &c) !=2 || c != '\n') {
	printf("n/a");
	return 1;
}
	int n_1 = n / 100;
	int n_2 = n % 100 / 10;
	int n_3 = n % 10;

	if(n < 0) {
	n_1 = -n_1;
	n_2 = -n_2;
	//n_3 = -n_3;
	}

	printf("%d%d%d", n_3, n_2, n_1);
	return 0;
}
