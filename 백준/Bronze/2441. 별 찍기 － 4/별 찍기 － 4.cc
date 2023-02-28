#include <stdio.h>

int main() {
	int count,j,k,i;
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (k = count; k > i; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}