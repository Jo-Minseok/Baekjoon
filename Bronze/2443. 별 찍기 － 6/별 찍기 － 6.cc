#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i <num; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = num; j > i; j--) {
			printf("*");
		}
		for (int k = num - 1; k > i; k--) {
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}