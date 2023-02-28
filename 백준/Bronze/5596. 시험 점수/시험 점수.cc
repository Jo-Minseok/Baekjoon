#include <stdio.h>

int main() {
	int min[4], man[4], min_result=0,man_result=0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &min[i]);
		min_result += min[i];
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &man[i]);
		man_result += man[i];
	}
	printf("%d", min_result > man_result ? min_result : man_result);

	return 0;
}