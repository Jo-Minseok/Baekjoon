#include <stdio.h>
int main() {
	int day, num[5],count = 0;
	scanf("%d", &day);
	day %= 10;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		if (day == num[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}