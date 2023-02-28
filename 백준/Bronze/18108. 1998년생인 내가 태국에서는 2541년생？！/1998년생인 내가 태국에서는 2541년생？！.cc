#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);
	while (y <= 1000 || y >= 3000) {
		scanf("%d", &y);
	}
	printf("%d", y - 543);
	return 0;
}
