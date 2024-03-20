#include <stdio.h>
#include <string.h>

int main() {
	char text[1000000], index=0;
	int alpha[26] = { 0 }, max=0, len;
	scanf("%s", text);
	len = strlen(text);

	for (int i = 0; i < len; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			alpha[text[i] - 'a']++;
		}
		else if (text[i] >= 'A' && text[i] <= 'Z') {
			alpha[text[i] - 'A']++;
		}
	}

	max = alpha[0];
	for (int i = 1; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			index = i;
		}
		else if (max == alpha[i]) {
			index = -1;
		}
	}

	if (index == -1) {
		printf("?");
	}
	else {
		printf("%c", index+'A');
	}

	return 0;
}