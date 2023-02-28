#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char text[100];
	scanf("%s", text);
	for (int i = 0; i < (int)(strlen(text)); i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = toupper(text[i]);
		}
		else {
			text[i] = tolower(text[i]);
		}
	}
	printf("%s", text);
	return 0;
}