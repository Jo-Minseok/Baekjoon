#include <stdio.h>

int main() {
	int hou, min;
	scanf("%d %d", &hou, &min);
	min += hou * 60;
	min -= 45;
	hou = min / 60;
	min %= 60;

	if (min < 0) {
		hou--;
		min += 60;
	}
	if (hou < 0) {
		hou = 23;
	}

	printf("%d %d", hou, min);
	return 0;
}