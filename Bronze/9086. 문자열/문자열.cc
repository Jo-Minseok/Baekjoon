#include <stdio.h>
#include <string.h>

int main() {
	char text[1000];
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%s", text);
		printf("%c%c\n", text[0], text[strlen(text)-1]);
	}
	return 0;
}