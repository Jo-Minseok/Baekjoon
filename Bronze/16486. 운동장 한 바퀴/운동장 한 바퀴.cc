#include <stdio.h>

int main() {
	double result;
	double pi = 3.141592;
	int d1, d2;
	scanf("%d %d", &d1, &d2);
	result = d2 * 2 * pi + d1 * 2;
	printf("%f", result);
	return 0;
}