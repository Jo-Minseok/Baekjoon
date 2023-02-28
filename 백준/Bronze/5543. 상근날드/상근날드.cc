#include <stdio.h>

int main() {
	int max,burger[3],drink[2],result[6],index = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &burger[i]);
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &drink[i]);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			result[index] = burger[i] + drink[j]-50;
			index++;
		}
	}
	max = result[0];
	for (int i = 0; i < 6; i++) {
		if(max > result[i]){
			max = result[i];
		}
	}
	printf("%d", max);

	return 0;
}