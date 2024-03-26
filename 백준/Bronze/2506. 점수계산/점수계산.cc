#include <stdio.h>

int main() {
	int solve[100],score=1,sum = 0;
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &solve[i]);
		if (solve[i] == 1) {
			sum += score;
			score++;
		}
		else {
			score = 1;
		}
	}
	printf("%d", sum);
	return 0;
}