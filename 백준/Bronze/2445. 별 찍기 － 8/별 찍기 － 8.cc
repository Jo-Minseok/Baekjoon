#include <stdio.h>

int main() {
	int num,space=0;
	scanf("%d", &num);
	space = (num - 1) * 2;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = 0; k < space; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		space -= 2;
		printf("\n");
	}
	space = 0;
	space +=2;
	for (int i = 1; i < num; i++) {
		for (int j = num; j > i; j--) {
			printf("*");
		}
		for (int k = 1; k <= space; k++) {
			printf(" ");
		}
		for (int j = num; j > i; j--) {
			printf("*");
		}
		space += 2;
		printf("\n");
	}
	return 0;
}