#include <stdio.h>

int main() {
	int num, num2;
	while (1) {
		scanf("%d %d", &num, &num2);
		if (num == 0 && num2 == 0) {
			break;
		}
		else {
			if (num > num2) {
				puts("Yes");
			}
			else {
				puts("No");
			}
		}
	}
	return 0;
}