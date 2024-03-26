#include <stdio.h>
#include <string.h>
int main() {
	char text[1000];
	int space = 0,len;
	while (1) {
		space = 0;
		scanf("%s", text);
		if (text[0] == '0') {
			break;
		}
		len = strlen(text);
		for (int i = 0; i < len; i++) {
			if (text[i] == '0') {
				space += 4;
			}
			else if (text[i] == '1') {
				space += 2;
			}
			else {
				space += 3;
			}
		}
		printf("%d\n", space + len + 1);
	}
	return 0;
}