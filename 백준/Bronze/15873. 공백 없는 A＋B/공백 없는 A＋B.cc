#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if (100 > num) {
		printf("%d", num / 10 + num % 10);
	}
	else if (num % 10 == 0) {
		printf("%d", num / 100 + 10);
	}
	else {
		printf("%d", num % 100 + 10);
	}
	return 0;
}