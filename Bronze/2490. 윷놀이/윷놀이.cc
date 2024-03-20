#include <stdio.h>

int main() {
	int result[3][4];
	int sum[3] = {0};
	int back;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &result[i][j]);
			sum[i] += result[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		switch (sum[i]) {
		case 0:
			puts("D");
			break;
		case 1:
			puts("C");
			break;
		case 2:
			puts("B");
			break;
		case 3:
			puts("A");
			break;
		case 4:
			puts("E");
			break;
		}
	}
	return 0;
}