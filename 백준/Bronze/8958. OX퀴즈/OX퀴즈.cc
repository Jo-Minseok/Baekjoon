#include <stdio.h>
#include <string.h>

int main() {
	int count, j = 0, sum,score;
	char solve[100];
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		sum = 0;
		score = 1;
		scanf("%s", solve);
		for (int j = 0; j < strlen(solve); j++) {
			if (solve[j] == 'O') {
				sum += score;
				score++;
			}
			else if (solve[j] == 'X') {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}