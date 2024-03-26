#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char text[800000];
	int s = 0, b = 0;
	int student_count;
	scanf("%d %s", &student_count, text);
	for (int i = 0; i < sizeof(text); i++) {
		if (text[i] == 's') {
			s++;
		}
		else if (text[i] == 'b') {
			b++;
		}
	}
	if (s > b) {
		printf("security!");
	}
	else if (s < b) {
		printf("bigdata?");
	}
	else {
		printf("bigdata? security!");
	}
	return 0;
}