#include <stdio.h>

int main() {
	int count, num, input;
	scanf("%d %d", &count, &num);
	for (int i = 0; i < count; i++) {
		scanf("%d", &input);
		if (num > input) {
			printf("%d ", input);
		}
	}
	return 0;
}