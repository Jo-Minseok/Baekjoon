#include <stdio.h>

int main() {
	int price;
	scanf("%d", &price);
	printf("%d %d", (int)(price - price * 0.22), (int)(price - price * 0.20 * 0.22));
	return 0;
}