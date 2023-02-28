#include <stdio.h>

int main() {
	int num, num2, num3, arr[10] = { 0 };
	long long result;
	scanf("%d %d %d", &num, &num2, &num3);
	result = num * num2 * num3;

	while (1) {
		arr[result % 10]++;
		if (result / 10 == 0) {
			break;
		}
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}