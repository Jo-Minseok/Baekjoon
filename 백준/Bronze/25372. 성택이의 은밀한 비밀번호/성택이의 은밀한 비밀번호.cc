#include <stdio.h>
#include <string.h>

int main() {
	int test;
	char password[1000];
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%s", password);
		if (strlen(password) > 5 && strlen(password) < 10) {
			puts("yes");
		}
		else {
			puts("no");
		}
	}
	return 0;
}