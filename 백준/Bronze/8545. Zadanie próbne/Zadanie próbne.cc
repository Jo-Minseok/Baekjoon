#include <stdio.h>

int main() {
	char text[4];
	char tmp[4];
	scanf("%s", text);
	tmp[0] = text[2];
	tmp[2] = text[0];
	text[0] = tmp[0];
	text[2] = tmp[2];
	printf("%s", text);
	return 0;
}