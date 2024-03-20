#include <stdio.h>

int main() {
	int i = 0, count, j =0;
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}