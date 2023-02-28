#include <stdio.h>

int main() {
	int first, second;
	while (scanf("%d %d", &first, &second)!=EOF) {
		if (first != 0 && second != 0) {
			printf("%d\n", first + second);
		}
		else {
			break;
		}
	}
	return 0;
}