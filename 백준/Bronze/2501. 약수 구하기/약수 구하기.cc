#include <stdio.h>

int main() {
	int count = 0, div[10000] = { 0 }, num, small;
	scanf("%d %d", &num,&small);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			div[count] = i;
			count++;
		}
	}
	if (div[small-1] == 0) {
		printf("0");
	}
	else {
		printf("%d", div[small-1]);
	}
	return 0;
}