#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char text[255];
	int count = 0;
	while (1) {
		count = 0;
		scanf("%[^\n]s", text);
		getchar();
		if (strlen(text) == 1 && text[0] == '#') {
			break;
		}
		else {
			for (int i = 0; i < strlen(text); i++) {
				text[i] = tolower(text[i]);
			}
			for (int i = 0; i < strlen(text); i++) {
				if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
					count++;
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}