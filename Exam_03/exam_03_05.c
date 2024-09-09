#include <stdio.h>

int main() {
	int x, y, z;
	char c;
	if(scanf("%d%d%d%c", &x, &y, &z, &c) != 4 || c != '\n') {
	printf("n/aaa");
	return 1;
}
	if ((x != 1 && x != 0) || (y != 1 && y != 0) || (z != 1 && z != 0)) {
	printf("n/a");
	return 1;
} else {
	if (x && (z || y)) {
	printf("1");
} else {
	printf("0");
}
}

	return 0;
}
