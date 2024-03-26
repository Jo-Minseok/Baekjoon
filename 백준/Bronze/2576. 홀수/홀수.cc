#include <stdio.h>

int main() {
	int sum = 0,num,small;
	int num_a[7] = { 0 }, count = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num);
		if (num % 2 != 0) {
			sum += num;
			num_a[count] = num;
			count++;
		}
	}
	small = num_a[0];
	for (int i = 0; i < count; i++) {
		if (small > num_a[i]) {
			small = num_a[i];
		}
	}

	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d", small);
	}
	return 0;
}