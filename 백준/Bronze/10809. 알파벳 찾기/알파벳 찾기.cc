#include <stdio.h>
#include <string.h>

int main() {
	char text[100];
	int arr[26];
	scanf("%s", text);
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < strlen(text); j++) {
			if (text[j] == i) {
				arr[text[j] - 'a'] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}