#include <stdio.h>
#include <string.h>

int main() {
	int count = 0, count1=0;
	char jae[999], text[999];
	scanf("%s %s", jae, text);
	for (int i = 0; i < strlen(jae); i++) {
		if (jae[i] == 'a') {
			count++;
		}
	}

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == 'a') {
			count1++;
		}
	}
	if (count >= count1 || strlen(text) == strlen(jae)) {
		puts("go");
	}
	else {
		puts("no");
	}
	return 0;
}