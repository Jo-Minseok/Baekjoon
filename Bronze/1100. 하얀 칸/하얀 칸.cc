#include <stdio.h>

int main() {
	char chess[8][9] = { '.' };
	int i = 0, j = 0, count = 0;
	for (i = 0; i < 8; i++) {
		scanf("%s", chess[i]);
	}
	for(i=0;i < 8;i++){
		for (j = 0; j < 9; j++) {
			if (i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1) {
				if (chess[i][j] == 'F') {
					count++;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}