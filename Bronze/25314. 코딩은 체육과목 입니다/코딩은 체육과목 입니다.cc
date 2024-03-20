#include <stdio.h>

int main() {
	int byte;
	scanf("%d", &byte);
	for (int i = 0; i < byte; i += 4) {
		if (byte%4 == 0) {
			printf("long ");
		}
	}
	printf("int");
	return 0;
}