#include <stdio.h>
#include <math.h>
int main() {
	int score[4],min, result[3] = { 0 };
	for (int i = 0; i < 4; i++) {
		scanf("%d", &score[i]);
	}
	result[0] = abs((score[0] + score[1]) - (score[2] + score[3]));
	min = result[0];
	result[1] = abs((score[0] + score[2]) - (score[1] + score[3]));
	result[2] = abs((score[0] + score[3]) - (score[1] + score[2]));
	for (int i = 0; i < 3; i++) {
		if (min > result[i]) {
			min = result[i];
		}
	}
	printf("%d", min);
	return 0;
}