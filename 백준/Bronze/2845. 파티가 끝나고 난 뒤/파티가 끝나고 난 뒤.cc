#include <stdio.h>

int main() {
	int human, area;
	int news[5];
	scanf("%d %d", &human, &area);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &news[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", news[i] - human * area);
	}
}