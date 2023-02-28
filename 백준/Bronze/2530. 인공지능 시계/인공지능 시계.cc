#include <stdio.h>

int main() {
	int hour, min, sec,time;
	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &time);
	hour += time / 3600;
	time %= 3600;
	min += time / 60;
	sec += time % 60;
	while (sec >= 60) {
		min += 1;
		sec -= 60;
	}
	while (min >=60) {
		hour += 1;
		min -= 60;
	}
	while (hour >= 24) {
		hour -= 24;
	}
	printf("%d %d %d", hour, min, sec);

	return 0;
}