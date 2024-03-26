#include <stdio.h>

int main() {
	int num;
	long long result = 1;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	printf("%lld", result);
	return 0;
}