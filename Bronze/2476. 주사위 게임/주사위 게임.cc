#include <stdio.h>

int main() {
	int max,result_max;
	int dice[3];
	int result[1000];
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &dice[j]);
		}
		if (dice[0] == dice[1] && dice[0] == dice[2] && dice[1] == dice[2]) {
			result[i] = 10000 + dice[0] * 1000;
		}
		else if (dice[0] == dice[1]||dice[0]==dice[2]) {
			result[i] = 1000 + dice[0] * 100;
		}
		else if (dice[1] == dice[2]) {
			result[i] = 1000 + dice[1] * 100;
		}
		else {
			max = dice[0];
			for (int k = 0; k < 3; k++) {
				if (max < dice[k]) {
					max = dice[k];
				}
			}
			result[i] = max * 100;
		}
	}
	result_max = result[0];
	for(int i=0;i<count;i++){
		if (result_max < result[i]) {
			result_max = result[i];
		}
	}
	printf("%d", result_max);

	return 0;
}