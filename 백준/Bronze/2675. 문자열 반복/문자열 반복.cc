#include <stdio.h>
#include <string.h>

int main() {
	int test_count, repeat = 0;
	char text[1000];
	scanf("%d", &test_count);
	for (int i = 0; i < test_count; i++) {
		scanf("%d %s", &repeat, text);
		for (int j = 0; j < strlen(text); j++) {
			for (int k = 0; k < repeat; k++) {
				printf("%c", text[j]);
			}
		}
		printf("\n");
	}
	return 0;
}