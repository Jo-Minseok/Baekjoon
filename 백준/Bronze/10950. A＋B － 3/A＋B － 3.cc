#include <stdio.h>

int main() {
	int count, first, second, arr[100] = { 0 };
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &first, &second);
		arr[i] += first + second;
	}
	for (int i = 0; i < count; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}