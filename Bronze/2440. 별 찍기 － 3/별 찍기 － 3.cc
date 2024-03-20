#include <stdio.h>

int main() {
	int count, i, j;
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		for (j = count; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}