#include <stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		for (int j = count-1; j >i; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < count; i++) {
		for(int j=0;j<i;j++){
			printf(" ");
		}
		for (int j = count; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}