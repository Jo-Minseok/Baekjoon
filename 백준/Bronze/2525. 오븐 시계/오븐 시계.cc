#include <stdio.h>

int main() {
	int hour, minute,plus;
	scanf("%d %d", &hour, &minute);
	scanf("%d", &plus);
	hour += plus / 60;
	minute += plus % 60;
	while (1) {
		if (minute >= 60) {
			minute -= 60;
			hour++;
		}
		if (hour >= 24) {
			hour -= 24;
		}
		else {
			break;
		}
	}
	printf("%d %d", hour, minute);
	return 0;
}