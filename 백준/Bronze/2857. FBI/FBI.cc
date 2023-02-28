#include <stdio.h>
#include <string.h>
int main() {
	char name[5][11];
	int n, i, j, chk[5] = { 0, }, length, cnt = 0;
	for (i = 0; i < 5; i++) {
		scanf("%s", name[i]);
		length = strlen(name[i]);
		for (j = 0; j < length; j++) {
			if (name[i][j] == 'F' && name[i][j + 1] == 'B' && name[i][j + 2] == 'I') {
			chk[i] = i + 1;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		if (chk[i] != 0) {
			printf("%d ", chk[i]);
			cnt++;
		}
	}
	if (cnt == 0)
		printf("HE GOT AWAY!");
}