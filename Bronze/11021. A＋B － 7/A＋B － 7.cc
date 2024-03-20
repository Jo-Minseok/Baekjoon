#include <stdio.h>

int main() {
	int test;
	int num, num2;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d", &num, &num2);
		printf("Case #%d: %d\n", i + 1, num + num2);
	}
	return 0;
}