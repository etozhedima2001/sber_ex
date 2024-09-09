#include <stdio.h>

int main() {
	int a, b, c;
	if(scanf("%d%d%d", &a, &b, &c) != 3) {
	printf("n/a");
	return 1;
}
	printf("%d", (c > a && c < b) || (c < a && c > b));

	return 0;
}
