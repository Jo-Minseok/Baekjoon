#include <stdio.h>
#include <string.h>

int main() {
	char id[20];
	scanf("%s", id);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				printf(":%s:", id);
			}
			else {
				printf(":fan:");
			}
		}
		printf("\n");
	}
	return 0;
}