#include <stdio.h>
#include <string.h>
int main() {
	int a[26] = { 0 };
	char text[100];
	scanf("%s", text);
	for (int i = 0; i < strlen(text); i++) {
		a[text[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++){
		printf("%d ", a[i]);
	}
	return 0;
}