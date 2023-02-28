#include <stdio.h>

int main() {
	int month, day;
	scanf("%d %d", &month, &day);
	if (month == 2) {
		if (day == 18) {
			puts("Special");
		}
		else if (day > 18) {
			puts("After");
		}
		else {
			puts("Before");
		}
	}
	else if (month < 2) {
		puts("Before");
	}
	else if (month > 2) {
		puts("After");
	}
	return 0;
}